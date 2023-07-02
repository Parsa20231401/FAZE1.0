#ifndef DISPLAYMESSAGEC_H
#define DISPLAYMESSAGEC_H

#include <QObject>
#include <QDateTime>
#include <QIcon>
#include <QLabel>
#include <QListWidgetItem>
#include <QPixmap>
#include <QVBoxLayout>

#include "ui_server.h"
#include "ui_client.h"

class displayMessagec : public QObject
{
    Q_OBJECT
public:
    displayMessagec(const QString& username);
    displayMessagec(Ui::server* ui, const QString& name);
    displayMessagec(Ui::client* uic, const QString& name);

    void messageDisplay(const QString& str);
    void attachmentDisplay(const QString& loc);
    QString getFilepath();
    QString getName();

private:
    Ui::server* ui;
    Ui::client* uic;
    QString name;
    QString filepath;
    bool isServer;

};

#endif // DISPLAYMESSAGEC_H
