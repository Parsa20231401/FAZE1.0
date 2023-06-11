#include "chatpage2.h"
#include "ui_chatpage2.h"

chatpage2::chatpage2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::chatpage2)
{
    ui->setupUi(this);
    socket = new QTcpSocket(this); //********* socket sakhte shod

        connect(this, &chatpage2::newMessage, this, &chatpage2::displayMessage);
        connect(socket, &QTcpSocket::readyRead, this, &chatpage2::readSocket);
        connect(socket, &QTcpSocket::disconnected, this, &chatpage2::discardSocket);
//        connect(socket, &QAbstractSocket::errorOccurred, this, &chatpage2::displayError);

        socket->connectToHost(QHostAddress::LocalHost,8080); // ersal darkhast vase join b server

        if(socket->waitForConnected())
           QMessageBox::information(this,"Server Status" , "connected !");
        else{
            QMessageBox::critical(this,"QTCPClient", QString("The following error occurred: %1.").arg(socket->errorString()));
            exit(EXIT_FAILURE);
        }

}

chatpage2::~chatpage2()
{

    if(socket->isOpen())
            socket->close();

    delete ui;
}

void chatpage2::readSocket()
{
    QByteArray buffer;

    QDataStream socketStream(socket);
    socketStream.setVersion(QDataStream::Qt_DefaultCompiledVersion);

    socketStream.startTransaction();
    socketStream >> buffer;

    if(!socketStream.commitTransaction())
    {
        QString message = QString("%1 :: Waiting for more data to come..").arg(socket->socketDescriptor());
        emit newMessage(message);
        return;
    }

    QString header = buffer.mid(0,128);
    QString fileType = header.split(",")[0].split(":")[1];

    buffer = buffer.mid(128);

    if(fileType=="attachment"){
        QString fileName = header.split(",")[1].split(":")[1];
        QString ext = fileName.split(".")[1];
        QString size = header.split(",")[2].split(":")[1].split(";")[0];

        if (QMessageBox::Yes == QMessageBox::question(this, "QTCPServer", QString("You are receiving an attachment from sd:%1 of size: %2 bytes, called %3. Do you want to accept it?").arg(socket->socketDescriptor()).arg(size).arg(fileName)))
        {
            QString filePath = QFileDialog::getSaveFileName(this, tr("Save File"), QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation)+"/"+fileName, QString("File (*.%1)").arg(ext));

            QFile file(filePath);
            if(file.open(QIODevice::WriteOnly)){
                file.write(buffer);
                QString message = QString("INFO :: Attachment from sd:%1 successfully stored on disk under the path %2").arg(socket->socketDescriptor()).arg(QString(filePath));
                emit newMessage(message);
            }else
                QMessageBox::critical(this,"QTCPServer", "An error occurred while trying to write the attachment.");
        }else{
            QString message = QString("INFO :: Attachment from sd:%1 discarded").arg(socket->socketDescriptor());
            emit newMessage(message);
        }
    }else if(fileType=="message"){
        QString message = QString("%1 :: %2").arg(socket->socketDescriptor()).arg(QString::fromStdString(buffer.toStdString()));
        emit newMessage(message);
    }
}

void chatpage2::discardSocket()
{
    socket->deleteLater();
    socket=nullptr;

//    ui->statusBar->showMessage("Disconnected!");
}

void chatpage2::displayError(QAbstractSocket::SocketError socketError)
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

void chatpage2::on_pushButton_clicked()
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

            socketStream << byteArray;

            ui->lineEdit->clear();
        }
        else
            QMessageBox::critical(this,"QTCPClient","Socket doesn't seem to be opened");
    }
    else
        QMessageBox::critical(this,"QTCPClient","Not connected");
}

//void chatpage2::on_pushButton_sendAttachment_clicked()
//{
//    if(socket)
//    {
//        if(socket->isOpen())
//        {
//            QString filePath = QFileDialog::getOpenFileName(this, ("Select an attachment"), QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation), ("File (*.json *.txt *.png *.jpg *.jpeg)"));

//            if(filePath.isEmpty()){
//                QMessageBox::critical(this,"QTCPClient","You haven't selected any attachment!");
//                return;
//            }

//            QFile m_file(filePath);
//            if(m_file.open(QIODevice::ReadOnly)){

//                QFileInfo fileInfo(m_file.fileName());
//                QString fileName(fileInfo.fileName());

//                QDataStream socketStream(socket);
//                socketStream.setVersion(QDataStream::Qt_DefaultCompiledVersion);

//                QByteArray header;
//                header.prepend(QString("fileType:attachment,fileName:%1,fileSize:%2;").arg(fileName).arg(m_file.size()).toUtf8());
//                header.resize(128);

//                QByteArray byteArray = m_file.readAll();
//                byteArray.prepend(header);

//                socketStream.setVersion(QDataStream::Qt_DefaultCompiledVersion);
//                socketStream << byteArray;
//            }else
//                QMessageBox::critical(this,"QTCPClient","Attachment is not readable!");
//        }
//        else
//            QMessageBox::critical(this,"QTCPClient","Socket doesn't seem to be opened");
//    }
//    else
//        QMessageBox::critical(this,"QTCPClient","Not connected");
//}

void chatpage2::displayMessage(const QString& str)
{
    ui->textBrowser_receivedMessages->append(str);
}


