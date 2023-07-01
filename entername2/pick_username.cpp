#include "pick_username.h"
#include "ui_pick_username.h"
#include "server.h"
#include "client.h"
#include <QPixmap>

#include "QSqlDatabase"
#include "QSqlQuery"
#include "QSqlDriver"
#include "QSqlQueryModel"
#include <QSqlError>

#include "database.h"



pick_username::pick_username(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::pick_username)
{
    ui->setupUi(this);
//    QSqlDatabase database;
//    database = QSqlDatabase::addDatabase("QSQLITE");
//    database.setDatabaseName("./database\\mainusersdata.db");
//    database.open();
}

pick_username::~pick_username()
{
    delete ui;
}

void pick_username::on_continue_button_clicked()
{
//    QSqlQuery q;
    QString username = ui->lineEdit->text();
//    QString column = "username";

//    q.exec("INSERT INTO usersInfo('"+column+"') VALUES('"+username+"')");

    dataBase d;
    d.insert("username", username);

//    if (q.lastError().isValid()) {
//        qDebug() << "Failed to insert name:" << q.lastError().text();
//    } else {
//        qDebug() << "Name inserted successfully.";
//    }

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

    dataBase d;
//    qDebug() << "database made ...........";
    d.insert("profile_loc", filePath);

//    QSqlQuery q;
//    q.exec("INSERT INTO usersInfo(profile_loc) VALUES('"+filePath+"')");

//    if (q.lastError().isValid()) {
//        qDebug() << "Failed to insert filepath:" << q.lastError().text();
//    } else {
//        qDebug() << "filepath inserted successfully.";
//    }


//    QSqlDatabase database;
//    database = QSqlDatabase::addDatabase("QSQLITE");
//    database.setDatabaseName("./database\\mainusersdata.db");
//    database.open();

//        QSqlQuery q;
//        q.exec("INSERT INTO usersInfo(profile_loc) VALUES('"+filePath+"')");

}

