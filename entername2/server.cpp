#include "server.h"
#include "ui_server.h"
#include <QFrame>
#include <QLabel>
#include <QVBoxLayout>
#include <QString>
#include <QDateTime>

server::server(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::server)
{
    ui->setupUi(this);

    m_server = new QTcpServer();

    if(m_server->listen(QHostAddress::Any, 8080))
    {
       connect(this, &server::newMessage, this, &server::displayMessage);
       connect(m_server, &QTcpServer::newConnection, this, &server::newConnection);
    }
    else
    {
        QMessageBox::critical(this,"QTCPServer",QString("Unable to start the server: %1.").arg(m_server->errorString()));
        exit(EXIT_FAILURE);
    }
}

server::~server()
{
    foreach (QTcpSocket* socket, connection_set)
    {
        socket->close();
        socket->deleteLater();
    }

    m_server->close();
    m_server->deleteLater();

    delete ui;
}

void server::on_pushButton_clicked()
{

    QString str = ui->lineEdit->text();
    if (str.length() < 1){
        return;
    }

    qint64 secondsSinceEpoch = QDateTime::currentSecsSinceEpoch();
    QDateTime currentDateTime = QDateTime::fromSecsSinceEpoch(secondsSinceEpoch);
    QString time = currentDateTime.toString("hh:mm");

    QIcon icon(":/new/prefix1/bot_user.png");
    QPixmap pixmap = icon.pixmap(QSize(100, 100));
    QListWidgetItem* item = new QListWidgetItem();

    QFrame* frame = new QFrame;
    frame->setFrameStyle(QFrame::Box);
    frame->setLineWidth(1);
    frame->setFixedHeight(40);

    QVBoxLayout* layout = new QVBoxLayout(frame);
    QLabel* label = new QLabel;
    label->setText(str);
    layout->addWidget(label);

    QString username = "username"; ///////////////// add the username from database
    item->setIcon(pixmap);
    item->setText(username+' '+time);
    item->setSizeHint(QSize(110, 110));
    ui->listWidget->addItem(item);
    ui->listWidget->setItemWidget(item, frame);






    QString receiver = ui->comboBox_receiver->currentText();

    if(receiver == "Broadcast")
    {
        foreach (QTcpSocket* socket,connection_set)
        {
            sendMessage(socket);
        }
    }
    else
    {
        foreach (QTcpSocket* socket,connection_set)
        {
            if(socket->socketDescriptor() == receiver.toLongLong())
            {
                sendMessage(socket);
                break;
            }
        }
    }
    ui->lineEdit->clear();
}


void server::newConnection()
{
    while (m_server->hasPendingConnections())
        appendToSocketList(m_server->nextPendingConnection());
}

void server::appendToSocketList(QTcpSocket* socket)
{
    connection_set.insert(socket);
    connect(socket, &QTcpSocket::readyRead, this, &server::readSocket);
    connect(socket, &QTcpSocket::disconnected, this, &server::discardSocket);

    ui->comboBox_receiver->addItem(QString::number(socket->socketDescriptor()));
//    displayMessage(QString("INFO :: Client with sockd:%1 has just entered the room").arg(socket->socketDescriptor()));
}

void server::readSocket()
{
    QTcpSocket* socket = reinterpret_cast<QTcpSocket*>(sender());

    QByteArray buffer;

    QDataStream socketStream(socket);
    socketStream.setVersion(QDataStream::Qt_DefaultCompiledVersion);

    socketStream.startTransaction();
    socketStream >> buffer;

    if(!socketStream.commitTransaction())
    {
//        QString message = QString("%1 :: Waiting for more data to come..").arg(socket->socketDescriptor());
//        emit newMessage(message);
        return;
    }

    QString header = buffer.mid(0,128);
    QString fileType = header.split(",")[0].split(":")[1];

    buffer = buffer.mid(128);

    if(fileType=="attachment")
    {
        QString fileName = header.split(",")[1].split(":")[1];
        QString ext = fileName.split(".")[1];
//        QString size = header.split(",")[2].split(":")[1].split(";")[0];

//        if (QMessageBox::Yes == QMessageBox::question(this, "QTCPServer", QString("You are receiving an attachment from sd:%1 of size: %2 bytes, called %3. Do you want to accept it?").arg(socket->socketDescriptor()).arg(size).arg(fileName)))
//        {
            QString filePath = QFileDialog::getSaveFileName(this, tr("Save File"), QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation)+"/"+fileName, QString("File (*.%1)").arg(ext));

            QFile file(filePath);
            if(file.open(QIODevice::WriteOnly)){
                file.write(buffer);
//                QString message = QString("INFO :: Attachment from sd:%1 successfully stored on disk under the path %2").arg(socket->socketDescriptor()).arg(QString(filePath));
//                emit newMessage(message);


                QImage *image = new QImage(filePath);
                QLabel *label = new QLabel;
                QSize desiredSize(200, 200);
                QPixmap pixmap(QPixmap::fromImage(image->scaled(desiredSize, Qt::KeepAspectRatio, Qt::SmoothTransformation)));
                label->setPixmap(pixmap);
                QListWidgetItem *item = new QListWidgetItem;
                item->setSizeHint(pixmap.size());
                ui->listWidget->addItem(item);
                ui->listWidget->setItemWidget(item, label);
                ui->listWidget->setSpacing(10);





            }else
                QMessageBox::critical(this,"QTCPServer", "An error occurred while trying to write the attachment.");
//        }else{
//            QString message = QString("INFO :: Attachment from sd:%1 discarded").arg(socket->socketDescriptor());
//            emit newMessage(message);
//        }
    }else if(fileType=="message"){
        QString message = QString("%1 :: %2").arg(socket->socketDescriptor()).arg(QString::fromStdString(buffer.toStdString()));
        emit newMessage(message);
    }
}

void server::discardSocket()
{
    QTcpSocket* socket = reinterpret_cast<QTcpSocket*>(sender());
    QSet<QTcpSocket*>::iterator it = connection_set.find(socket);
    if (it != connection_set.end()){
        displayMessage(QString("INFO :: A client has just left the room").arg(socket->socketDescriptor()));
        connection_set.remove(*it);
    }
    refreshComboBox();

    socket->deleteLater();
}


void server::sendMessage(QTcpSocket* socket)
{
    if(socket)
    {
        if(socket->isOpen())
        {
            QString str = ui->lineEdit->text();

            QDataStream socketStream(socket);
            socketStream.setVersion(QDataStream::Qt_DefaultCompiledVersion);

            QByteArray header;
            header.prepend(QString("fileType:message,fileName:null,fileSize:%1;").arg(str.size()).toUtf8());
            header.resize(128);

            QByteArray byteArray = str.toUtf8();
            byteArray.prepend(header);

            socketStream.setVersion(QDataStream::Qt_DefaultCompiledVersion);
            socketStream << byteArray;
        }
        else
            QMessageBox::critical(this,"QTCPServer","Socket doesn't seem to be opened");
    }
    else
        QMessageBox::critical(this,"QTCPServer","Not connected");
}

void server::sendAttachment(QTcpSocket* socket, QString filePath)
{
    if(socket)
    {
        if(socket->isOpen())
        {
            QFile m_file(filePath);
            if(m_file.open(QIODevice::ReadOnly)){

                QFileInfo fileInfo(m_file.fileName());
                QString fileName(fileInfo.fileName());

                QDataStream socketStream(socket);
                socketStream.setVersion(QDataStream::Qt_DefaultCompiledVersion);

                QByteArray header;
                header.prepend(QString("fileType:attachment,fileName:%1,fileSize:%2;").arg(fileName).arg(m_file.size()).toUtf8());
                header.resize(128);

                QByteArray byteArray = m_file.readAll();
                byteArray.prepend(header);

                socketStream << byteArray;
            }else
                QMessageBox::critical(this,"QTCPClient","Couldn't open the attachment!");
        }
        else
            QMessageBox::critical(this,"QTCPServer","Socket doesn't seem to be opened");
    }
    else
        QMessageBox::critical(this,"QTCPServer","Not connected");
}


void server::displayAttachment(QString filePath){

    QImage *image = new QImage(filePath);
    QLabel *label = new QLabel;
    QSize desiredSize(200, 200); // Set the desired size of the image
    QPixmap pixmap(QPixmap::fromImage(image->scaled(desiredSize, Qt::KeepAspectRatio, Qt::SmoothTransformation)));
    label->setPixmap(pixmap);
    QListWidgetItem *item = new QListWidgetItem;
    item->setSizeHint(pixmap.size()); // Set the size hint of the item to match the size of the pixmap
    ui->listWidget->addItem(item);
    ui->listWidget->setItemWidget(item, label);
}


void server::displayMessage(const QString& str1)
{
    QString str = str1;
    str.remove(0,8);

    qint64 secondsSinceEpoch = QDateTime::currentSecsSinceEpoch();
    QDateTime currentDateTime = QDateTime::fromSecsSinceEpoch(secondsSinceEpoch);
    QString time = currentDateTime.toString("hh:mm");


    QIcon icon(":/new/prefix1/bot_user.png");
    QPixmap pixmap = icon.pixmap(QSize(100, 100));
    QListWidgetItem* item = new QListWidgetItem();

    QFrame* frame = new QFrame;
    frame->setFrameStyle(QFrame::Box);
    frame->setLineWidth(1);
    frame->setFixedHeight(40);

    QVBoxLayout* layout = new QVBoxLayout(frame);
    QLabel* label = new QLabel;
    label->setText(str);
    layout->addWidget(label);


    item->setIcon(pixmap);
    item->setText("bot "+time);
    item->setSizeHint(QSize(110, 110));
    ui->listWidget->addItem(item);
    ui->listWidget->setItemWidget(item, frame);

}




void server::displayError(QAbstractSocket::SocketError socketError)
{
    switch (socketError) {
        case QAbstractSocket::RemoteHostClosedError:
        break;
        case QAbstractSocket::HostNotFoundError:
            QMessageBox::information(this, "QTCPServer", "The host was not found. Please check the host name and port settings.");
        break;
        case QAbstractSocket::ConnectionRefusedError:
            QMessageBox::information(this, "QTCPServer", "The connection was refused by the peer. Make sure QTCPServer is running, and check that the host name and port settings are correct.");
        break;
        default:
            QTcpSocket* socket = qobject_cast<QTcpSocket*>(sender());
            QMessageBox::information(this, "QTCPServer", QString("The following error occurred: %1.").arg(socket->errorString()));
        break;
    }
}

void server::refreshComboBox(){
    ui->comboBox_receiver->clear();
    ui->comboBox_receiver->addItem("Broadcast");
    foreach(QTcpSocket* socket, connection_set)
        ui->comboBox_receiver->addItem(QString::number(socket->socketDescriptor()));
}


void server::on_pushButton_sendAttachment_clicked()
{

        QString receiver = ui->comboBox_receiver->currentText();
        QString filePath = QFileDialog::getOpenFileName(this, ("Select an attachment"), QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation), ("File (*.json *.txt *.png *.jpg *.jpeg)"));


        QImage *image = new QImage(filePath);
        QLabel *label = new QLabel;
        QSize desiredSize(200, 200); // Set the desired size of the image
        QPixmap pixmap(QPixmap::fromImage(image->scaled(desiredSize, Qt::KeepAspectRatio, Qt::SmoothTransformation)));
        label->setPixmap(pixmap);
        QListWidgetItem *item = new QListWidgetItem;
        item->setSizeHint(pixmap.size()); // Set the size hint of the item to match the size of the pixmap
        ui->listWidget->addItem(item);
        ui->listWidget->setItemWidget(item, label);




        if(filePath.isEmpty()){
//            QMessageBox::critical(this,"QTCPClient","You haven't selected any attachment!");
            return;
        }
        if(receiver=="Broadcast")
        {
            foreach (QTcpSocket* socket,connection_set)
            {
                sendAttachment(socket, filePath);
            }
        }
        else
        {
            foreach (QTcpSocket* socket,connection_set)
            {
                if(socket->socketDescriptor() == receiver.toLongLong())
                {
                    sendAttachment(socket, filePath);
                    break;
                }
            }
        }
        ui->lineEdit->clear();
}

