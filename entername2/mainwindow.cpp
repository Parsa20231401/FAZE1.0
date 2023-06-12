#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "entrycode.h"
#include "stdio.h"
#include "server.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    ui->groupBox_3->hide();
    ui->lineEdit_4->setEchoMode(QLineEdit::Password);
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    ui->label_5->setText("<b>username:</b>");
    ui->label_2->setText("<b>enter youe information:</b>");
    ui->label_4->setText("<b>password:</b>");
    ui->label_15->setText("<b>username:</b>");
    ui->label_16->setText("<b>password:</b>");
    ui->label_14->setText("<b>welcome</b>");
    ui->label_21->setText("<b>email:</b>");
    ui->label_22->setText("<b>telephone number:</b>");
    ui->groupBox_4->hide();
    ui->pushButton_3->hide();
    ui->comboBox->addItem("egypt +20");
    ui->comboBox->addItem("south africa +27");
    ui->comboBox->addItem("france +33");
    ui->comboBox->addItem("netherlands +31");
    ui->comboBox->addItem("australia +43");
    ui->comboBox-> addItem("germany +49");
    ui->comboBox->addItem("japan +81");
    ui->comboBox->addItem("turkey +90");
    ui->comboBox->addItem("iraq +964");
    ui->comboBox->addItem("iran +98");
//    entrycode *p = new entrycode(this);

}

MainWindow::~MainWindow() {


    delete ui;
    delete c;

}



void MainWindow::on_pushButton_2_clicked() {
    ui->groupBox->hide();
    ui->groupBox_3->show();
    ui->groupBox_3->move(320, 50);

}

int r;

void MainWindow::on_pushButton_4_clicked() {
    r = rand() % 4;
    if (r == 0) {
        ui->label_11->setStyleSheet("image: url(:/new/prefix1/capcha1.jpg);");
    } else if (r == 1) {
        ui->label_11->setStyleSheet("image: url(:/new/prefix1/capcha2.png);");
    } else if (r == 2) {
        ui->label_11->setStyleSheet("image: url(:/new/prefix1/capcha3.png);");
    } else if (r == 3) {
        ui->label_11->setStyleSheet("image: url(:/new/prefix1/capcha4.jpg);");
    }
    ui->groupBox_4->show();
}

void MainWindow::on_pushButton_5_clicked() {

    server *c = new server(this);

    switch (r) {
            case 0:
                if (ui->lineEdit_5->text() == "433841") {
                    c->show();
                } else {
                    QMessageBox::information(this, "wrong", "please enter correct captcha", "ok");
                }
                break;
            case 1:
                if (ui->lineEdit_5->text() == "2W4M") {
                    c->show();
                } else {
                    QMessageBox::information(this, "wrong", "please enter correct captcha", "ok");
                }
                break;
            case 2:
                if (ui->lineEdit_5->text() == "Captcha") {
                    c->show();

                } else {
                    QMessageBox::information(this, "wrong", "please enter correct captcha", "ok");
                }
                break;
            case 3:
                if (ui->lineEdit_5->text() == "4SZXT") {
                    c->show();

                } else {
                    QMessageBox::information(this, "wrong", "please enter correct captcha", "ok");
                }
                break;
        }
}


void MainWindow::on_pushButton_6_clicked()
{
    ui->lineEdit_4->setEchoMode(QLineEdit::Normal);
    ui->pushButton_6->hide();
    ui->pushButton_3->move(275,101);
    ui->pushButton_3->show();
}

void MainWindow::on_lineEdit_textEdited(const QString &arg1)
{
   int len,i,sw=1;
   len=arg1.length();
   for(i=0;i<len&&sw;i++)
   {
       if(arg1[i]=="*"||arg1[i]=="&"||arg1[i]=="^"||arg1[i]=="%"||arg1[i]=="#"||arg1[i]=="$"||len<8)
        {sw=0;
        ui->label_19->setText("wrong");
        }
       if(sw)
       ui->label_19->setText("correct");
   }

}


void MainWindow::on_lineEdit_2_textEdited(const QString &arg1)
{
    int len,i,sw=1;
    len=arg1.length();
    for(i=0;i<len&&sw;i++)
    {
        if(arg1[i]<48||arg1[i]>57||len<8)
           {
            sw=0;
            ui->label_20->setText("wrong");
           }
         if(sw)
             ui->label_20->setText("correct");
    }
}


void MainWindow::on_lineEdit_3_textEdited(const QString &arg1)
{
    int len,i,sw=1;
    len=arg1.length();
    for(i=0;i<len&&sw;i++)
    {
        if(arg1[i]=="*"||arg1[i]=="&"||arg1[i]=="^"||arg1[i]=="%"||arg1[i]=="#"||arg1[i]=="$"||len<8)
         {sw=0;
         ui->label_27->setText("wrong");
         }
        if(sw)
        ui->label_27->setText("correct");
    }
}



void MainWindow::on_lineEdit_4_textEdited(const QString &arg1)
{
    int len,i,sw=1;
    len=arg1.length();
    for(i=0;i<len&&sw;i++)
    {
        if(arg1[i]<48||arg1[i]>57||len<8)
           {
            sw=0;
            ui->label_28->setText("wrong");
           }
         if(sw)
             ui->label_28->setText("correct");
    }
//     if(ui->label_27->text()=="wrong"||ui->label_28->text()=="wrong")
//         ui->pushButton_5->setEnabled(false);
}


void MainWindow::on_pushButton_3_clicked()
{
    ui->pushButton_3->hide();
    ui->pushButton_6->show();
    ui->lineEdit_4->setEchoMode(QLineEdit::Password);
}

