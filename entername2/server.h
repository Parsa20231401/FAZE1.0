#ifndef SERVER_H
#define SERVER_H

#include <QMainWindow>
#include <QSet>
#include <QStandardPaths>
#include <QTcpServer>
#include <QTcpSocket>
#include <QMessageBox>
#include <QMetaType>
#include <QFile>
#include <QFileDialog>

namespace Ui {
class server;
}

class server : public QMainWindow
{
    Q_OBJECT


signals:
    void newMessage(QString);

public:
    explicit server(QWidget *parent = nullptr);
    ~server();

private slots:
    void newConnection();
    void appendToSocketList(QTcpSocket* socket);

    void readSocket();
    void discardSocket();
    void displayError(QAbstractSocket::SocketError socketError);

    void displayMessage(const QString& str);
    void sendMessage(QTcpSocket* socket);
    void sendAttachment(QTcpSocket* socket, QString filePath);
    void refreshComboBox();

    void on_pushButton_clicked();

    void on_pushButton_sendAttachment_clicked();

private:
    Ui::server *ui;
    QTcpServer* m_server;
    QSet<QTcpSocket*> connection_set;
};

#endif // SERVER_H
