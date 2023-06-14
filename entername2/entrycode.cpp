#include "entrycode.h"
#include "ui_entrycode.h"
#include "QMessageBox"
#include "server.h"
#include "client.h"

QString thelen;

entrycode::entrycode(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::entrycode)
{
    ui->setupUi(this);
    int n;
    n = rand()%9000+1000;
    thelen = QString::number(n);
    ui->label_4->setText(thelen);

    ui->lineEdit->hide();
    ui->pushButton_2->hide();
}

entrycode::~entrycode()
{
    delete ui;
}


void entrycode::on_pushButton_clicked()
{
    ui->groupBox->hide();
    ui->lineEdit->show();
    ui->pushButton_2->show();
}


//void entrycode::on_lineEdit_returnPressed()
//{
//    QString code = ui->lineEdit->text();

//    server *serverPage = new server(this);

//    if (code == thelen){
//        serverPage->show();
//    }
//    else{
//        QMessageBox::information(this,"WRONG code","try again");
//    }
//}


//void entrycode::on_pushButton_2_toggled(bool checked)
//{
//    QString code = ui->lineEdit->text();

//    server *serverPage = new server(this);
//    client *clientPage = new client(this);

//    if (code == thelen)
//    {
//        if (checked == true)
//            serverPage->show();
//        else
//            clientPage->show();
//    }
//    else{
//        QMessageBox::information(this,"WRONG code","try again");
//    }
//}



//void entrycode::on_pushButton_2_clicked()
//{
//    QString code = ui->lineEdit->text();

////    ui->pushButton_2->setCheckable(true)
//    server *serverPage = new server(this);
////    client *clientPage = new client(this);

//    if (code == thelen)
//    {
////        if (checked == true)
//            serverPage->show();
////        else
////            clientPage->show();
//    }
//    else{
//        QMessageBox::information(this,"WRONG code","try again");
//    }
//}


void entrycode::on_pushButton_2_toggled(bool checked)
{
    QString code = ui->lineEdit->text();

   server *serverPage = new server(this);
   client *clientPage = new client(this);

   if (code == thelen)
   {
       if (checked){
           serverPage->show();
       }
       else {
           clientPage->show();
       }
   }
   else{
       QMessageBox::information(this,"WRONG code","try again");
   }
}


void entrycode::on_pushButton_3_toggled(bool checked)
{
    if (checked){
        ui->pushButton_2->setText("it workes");
    }
    else
    {
        ui->pushButton_2->setText("it still workes");
    }
}

