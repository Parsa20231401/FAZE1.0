#include "displaymessagec.h"
#include <QFrame>
#include <QLabel>
#include <QVBoxLayout>
#include <QIcon>
#include <QPixmap>
#include <QDateTime>
#include <QListWidgetItem>

displayMessagec::displayMessagec(Ui::server* ui, const QString& name) : ui(ui), name(name)
{
    SorC = true;
}
displayMessagec::displayMessagec(Ui::client* ui, const QString& name) : uic(ui), name(name)
{
    SorC = false;
}


void displayMessagec::messageDisplay(const QString& str){

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
    item->setText(name+' '+time);
    item->setSizeHint(QSize(110, 110));

    if (SorC == true){
       ui->listWidget->addItem(item);
       ui->listWidget->setItemWidget(item, frame);
    }
    else {
        uic->listWidget->addItem(item);
        uic->listWidget->setItemWidget(item, frame);
    }
}

void displayMessagec::attachmentDisplay()
{
    QImage *image = new QImage(name); // name is the file path in this function
    QLabel *label = new QLabel;
    QSize desiredSize(200, 200);
    QPixmap pixmap(QPixmap::fromImage(image->scaled(desiredSize, Qt::KeepAspectRatio, Qt::SmoothTransformation)));
    label->setPixmap(pixmap);
    QListWidgetItem *item = new QListWidgetItem;
    item->setSizeHint(pixmap.size());
    if (SorC == true){
       ui->listWidget->addItem(item);
       ui->listWidget->setItemWidget(item, label);
       ui->listWidget->setSpacing(20);
    }
    else {
        uic->listWidget->addItem(item);
        uic->listWidget->setItemWidget(item, label);
        uic->listWidget->setSpacing(20);
    }

}



