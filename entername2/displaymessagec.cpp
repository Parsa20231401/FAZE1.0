#include "displaymessagec.h"
#include <QFrame>
#include <QLabel>
#include <QVBoxLayout>
#include <QIcon>
#include <QPixmap>
#include <QDateTime>
#include <QListWidgetItem>
#include "database.h"

displayMessagec::displayMessagec(const QString& username)
{
    dataBase d;
    filepath = d.returnInfo(username, "profile_loc");
    this->name = d.returnInfo(username, "name");
}

displayMessagec::displayMessagec(Ui::server* ui, const QString& username) : ui(ui)
{
    isServer = true;
    dataBase d;
    filepath = d.returnInfo(username, "profile_loc");
    this->name = d.returnInfo(username, "name");
}

displayMessagec::displayMessagec(Ui::client* ui, const QString& username) : uic(ui)
{
    isServer = false;
    dataBase d;
    filepath = d.returnInfo(username, "profile_loc");
    this->name = d.returnInfo(username, "name");
}


void displayMessagec::messageDisplay(const QString& str){

    qint64 secondsSinceEpoch = QDateTime::currentSecsSinceEpoch();
    QDateTime currentDateTime = QDateTime::fromSecsSinceEpoch(secondsSinceEpoch);
    QString time = currentDateTime.toString("hh:mm");

    QIcon icon(filepath);
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
    item->setText(name+' '+time);
    item->setSizeHint(QSize(110, 110));

    if (isServer == true){
       ui->listWidget->addItem(item);
       ui->listWidget->setItemWidget(item, frame);
    }
    else {
        uic->listWidget->addItem(item);
        uic->listWidget->setItemWidget(item, frame);
    }
}

void displayMessagec::attachmentDisplay(const QString& imageLoc)
{
    QImage *image = new QImage(imageLoc);
    QLabel *label = new QLabel;
    QSize desiredSize(200, 200);
    QPixmap pixmap(QPixmap::fromImage(image->scaled(desiredSize, Qt::KeepAspectRatio, Qt::SmoothTransformation)));
    label->setPixmap(pixmap);
    QListWidgetItem *item = new QListWidgetItem;
    item->setSizeHint(pixmap.size());
    if (isServer == true){
       ui->listWidget->addItem(item);
       ui->listWidget->setItemWidget(item, label);
       ui->listWidget->setSpacing(10);
    }
    else {
        uic->listWidget->addItem(item);
        uic->listWidget->setItemWidget(item, label);
        uic->listWidget->setSpacing(10);
    }
}

QString displayMessagec::getFilepath()
{
    return filepath;
}
QString displayMessagec::getName()
{
    return name;
}

