#ifndef CLIENT_H
#define CLIENT_H

#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QHostAddress>
#include <QMessageBox>
#include <QMetaType>
#include <QString>
#include <QStandardPaths>
#include <QTcpSocket>

namespace Ui {
class client;
}

class client : public QMainWindow
{
    Q_OBJECT

signals:
    void newMessage(QString);

private slots:
    void readSocket();
    void discardSocket();
    void displayError(QAbstractSocket::SocketError socketError);

    void displayMessage(const QString& str);

    void on_pushButton_clicked();

public:
    explicit client(QWidget *parent = nullptr);
    ~client();

private:

    Ui::client *ui;
    QTcpSocket* socket;
};

#endif // CLIENT_H
