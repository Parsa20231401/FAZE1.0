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

class displayMessagec : public QObject
{
    Q_OBJECT
public:
    displayMessagec(Ui::server* ui, const QString& name);

    void messageDisplay(const QString& str);

private:
    Ui::server* ui;
    QString name;

};

#endif // DISPLAYMESSAGEC_H
