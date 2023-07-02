#include "entrycode.h"
#include "ui_entrycode.h"
#include "QMessageBox"
#include "pick_username.h"

QString thelen;

entrycode::entrycode(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::entrycode)
{
    ui->setupUi(this);
    int n;
    n = rand()%9000+1000;
    thelen = QString::number(n);
    ui->textcode_label->setText(thelen);

    ui->codeInput->hide();
}

entrycode::~entrycode()
{
    delete ui;
}

void entrycode::on_ok_pushButton_clicked()
{
    ui->groupBox->hide();
    ui->codeInput->show();
}

void entrycode::on_codeInput_returnPressed()
{
    QString code = ui->codeInput->text();

    if (code == thelen)
    {
        pick_username *usernamePage = new pick_username(this);
        usernamePage->show();
        hide();
    }
    else{
        QMessageBox::information(this,"WRONG code","try again");
    }
}




