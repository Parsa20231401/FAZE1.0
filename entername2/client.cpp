#include "client.h"
#include "ui_client.h"
#include <QFrame>
#include <QLabel>
#include <QVBoxLayout>
#include <QIcon>
#include <QPixmap>
#include <QDateTime>

client::client(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::client)
{
    ui->setupUi(this);
    socket = new QTcpSocket(this); //********* socket sakhte shod

        connect(this, &client::newMessage, this, &client::displayMessage);
        connect(socket, &QTcpSocket::readyRead, this, &client::readSocket);
        connect(socket, &QTcpSocket::disconnected, this, &client::discardSocket);

        socket->connectToHost(QHostAddress::LocalHost,8080); // ersal darkhast vase join b server

//        if(socket->waitForConnected())
//         QMessageBox::information(this,"Server Status" , "connected !");
//        else{
//            QMessageBox::critical(this,"QTCPClient", QString("The following error occurred: %1.").arg(socket->errorString()));
//            exit(EXIT_FAILURE);
//        }

}

client::~client()
{

    if(socket->isOpen())
            socket->close();

    delete ui;
}

void client::readSocket()
{
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

    if(fileType=="attachment"){
        QString fileName = header.split(",")[1].split(":")[1];
        QString ext = fileName.split(".")[1];
//        QString size = header.split(",")[2].split(":")[1].split(";")[0];

//        if (QMessageBox::Yes == QMessageBox::question(this, "QTCPServer", QString("You are receiving an attachment from sd:%1 of size: %2 bytes, called %3. Do you want to accept it?").arg(socket->socketDescriptor()).arg(size).arg(fileName)))
//        {
            QString filePath = QFileDialog::getSaveFileName(this, tr("Save File"), QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation)+"/"+fileName, QString("File (*.%1)").arg(ext));



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




            QFile file(filePath);
            if(file.open(QIODevice::WriteOnly)){
                file.write(buffer);
//                QString message = QString("INFO :: Attachment from sd:%1 successfully stored on disk under the path %2").arg(socket->socketDescriptor()).arg(QString(filePath));
//                emit newMessage(message);
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

void client::discardSocket()
{
    socket->deleteLater();
    socket=nullptr;

}

void client::displayError(QAbstractSocket::SocketError socketError)
{
    switch (socketError) {
        case QAbstractSocket::RemoteHostClosedError:
        break;
        case QAbstractSocket::HostNotFoundError:
            QMessageBox::information(this, "QTCPClient", "The host was not found. Please check the host name and port settings.");
        break;
        case QAbstractSocket::ConnectionRefusedError:
            QMessageBox::information(this, "QTCPClient", "The connection was refused by the peer. Make sure QTCPServer is running, and check that the host name and port settings are correct.");
        break;
        default:
            QMessageBox::information(this, "QTCPClient", QString("The following error occurred: %1.").arg(socket->errorString()));
        break;
    }
}

void client::on_pushButton_clicked()
{
    QString str = ui->lineEdit->text();
    if (str.length() < 1){
        return;
    }

//    QIcon icon(":/new/prefix1/bot_user.png");
//    QPixmap pixmap = icon.pixmap(QSize(100, 100));
//    QListWidgetItem* bot = new QListWidgetItem();

//    bot->setIcon(pixmap);
//    bot->setText("bot");
//    ui->listWidget->addItem(bot);

//    QListWidgetItem* message = new QListWidgetItem();
//    QFrame* frame = new QFrame;
//    frame->setFrameStyle(QFrame::Box);
//    frame->setLineWidth(1);
//    frame->setFixedHeight(40);

//    QVBoxLayout* layout = new QVBoxLayout(frame);
//    QLabel* label = new QLabel;
//    label->setText(str);
//    label->setAlignment(Qt::AlignLeft);
//    layout->addWidget(label);

//    ui->listWidget->addItem(message);
//    ui->listWidget->setItemWidget(message, frame);
//    ui->listWidget->setLayout(new QVBoxLayout());
//    ui->listWidget->setSpacing(10);

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
//    item->setTextAlignment(Qt::AlignBottom);
    ui->listWidget->addItem(item);
    ui->listWidget->setItemWidget(item, frame);



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

            socketStream << byteArray;

            ui->lineEdit->clear();
        }
        else
            QMessageBox::critical(this,"QTCPClient","Socket doesn't seem to be opened");
    }
    else
        QMessageBox::critical(this,"QTCPClient","Not connected");
}

void client::on_pushButton_sendAttachment_clicked()
{
    if(socket)
    {
        if(socket->isOpen())
        {
            QString filePath = QFileDialog::getOpenFileName(this, ("Select an attachment"), QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation), ("File (*.json *.txt *.png *.jpg *.jpeg)"));

            if(filePath.isEmpty()){
//                QMessageBox::critical(this,"QTCPClient","You haven't selected any attachment!");
                return;
         }


            QImage *image = new QImage(filePath);
            QLabel *label = new QLabel;
            QSize desiredSize(200, 200); // Set the desired size of the image
            QPixmap pixmap(QPixmap::fromImage(image->scaled(desiredSize, Qt::KeepAspectRatio, Qt::SmoothTransformation)));
            label->setPixmap(pixmap);
            QListWidgetItem *item = new QListWidgetItem;
            item->setSizeHint(pixmap.size()); // Set the size hint of the item to match the size of the pixmap
            ui->listWidget->addItem(item);
            ui->listWidget->setItemWidget(item, label);



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

            socketStream.setVersion(QDataStream::Qt_DefaultCompiledVersion);
            socketStream << byteArray;
            }
            else
                QMessageBox::critical(this,"QTCPClient","Attachment is not readable!");
        }
        else
            QMessageBox::critical(this,"QTCPClient","Socket doesn't seem to be opened");
    }
    else
        QMessageBox::critical(this,"QTCPClient","Not connected");
}

void client::displayMessage(const QString& str1)
{
    QString str = str1;
    str.remove(0,8);

    qint64 secondsSinceEpoch = QDateTime::currentSecsSinceEpoch();
    QDateTime currentDateTime = QDateTime::fromSecsSinceEpoch(secondsSinceEpoch);
    QString time = currentDateTime.toString("hh:mm");

    QIcon icon(":/new/prefix1/bot_user.png"); ////////////////// add profile from the database
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
}


