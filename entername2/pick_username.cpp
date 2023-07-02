#include "pick_username.h"
#include "ui_pick_username.h"
#include "server.h"
#include "client.h"
#include "database.h"

pick_username::pick_username(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::pick_username)
{
    ui->setupUi(this);
}

pick_username::~pick_username()
{
    delete ui;
}

void pick_username::on_continue_button_clicked()
{
    QString name = ui->lineEdit->text();

    dataBase d;
    d.insertProfile("name", name);

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
    d.insertProfile("profile_loc", filePath);
}

