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
class chatpage;
}

class chatpage : public QMainWindow
{
    Q_OBJECT


signals:
    void newMessage(QString);

public:
    explicit chatpage(QWidget *parent = nullptr);
    ~chatpage();

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

private:
    Ui::chatpage *ui;
    QTcpServer* m_server;
    QSet<QTcpSocket*> connection_set;
};

#endif // SERVER_H
