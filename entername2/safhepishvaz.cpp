#include "safhepishvaz.h"
#include "ui_safhepishvaz.h"
#include "mainwindow.h"


safhePishvaz::safhePishvaz(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::safhePishvaz)
{
    ui->setupUi(this);
}

safhePishvaz::~safhePishvaz()
{
    delete ui;
}

void safhePishvaz::on_pushButton_clicked()
{
    MainWindow *safe2 = new MainWindow;
    safe2->show();
    hide();
}

