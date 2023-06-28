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

void safhePishvaz::on_welcomeButton_clicked()
{
    MainWindow *loginPage = new MainWindow;
    loginPage->show();
    hide();
}

