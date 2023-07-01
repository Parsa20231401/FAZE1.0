#include "pick_username.h"
#include "ui_pick_username.h"
#include "server.h"
#include "client.h"
#include <QPixmap>

#include "QSqlDatabase"
#include "QSqlQuery"
#include "QSqlDriver"
#include "QSqlQueryModel"

pick_username::pick_username(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::pick_username)
{
    ui->setupUi(this);
    QSqlDatabase database;
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("./database\\usersinfo.db");
    database.open();
}

pick_username::~pick_username()
{
    delete ui;
}

void pick_username::on_pushButton_clicked()
{
    server *serverPage = new server(this);
    serverPage->show();
    client *clientPage = new client(this);
    clientPage->show();
    hide();
}


void pick_username::on_addProfile_clicked()
{
    QString filePath = QFileDialog::getOpenFileName(this, ("Select an attachment"), QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation), ("File (*.png *.jpg *.jpeg)"));
    QPixmap image(filePath);

    ui->profile->setPixmap(image);



}

