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
class chatpage2;
}

class chatpage2 : public QMainWindow
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
    explicit chatpage2(QWidget *parent = nullptr);
    ~chatpage2();

private:

    Ui::chatpage2 *ui;
    QTcpSocket* socket;
};

#endif // CLIENT_H
