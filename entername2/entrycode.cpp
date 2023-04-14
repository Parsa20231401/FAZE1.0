#include "entrycode.h"
#include "ui_entrycode.h"
#include "QMessageBox"

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
}

entrycode::~entrycode()
{
    delete ui;
}

//void entrycode::on_lineEdit_editingFinished()
//{
//    QString code = ui->lineEdit->text();

//    if (code == thelen){
//        QMessageBox::information(this,"That's correct","go to next faze");
//    }
//    else{
//        QMessageBox::information(this,"WRONG code","try again");
//    }
//}


void entrycode::on_pushButton_clicked()
{
    ui->groupBox->hide();
    ui->lineEdit->show();
}


void entrycode::on_lineEdit_returnPressed()
{
    QString code = ui->lineEdit->text();

    if (code == thelen){
        QMessageBox::information(this,"That's correct","go to next faze");
    }
    else{
        QMessageBox::information(this,"WRONG code","try again");
    }
}

