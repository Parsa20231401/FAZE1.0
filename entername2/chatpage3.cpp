#include "chatpage3.h"
#include "ui_chatpage3.h"

chatpage3::chatpage3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::chatpage3)
{
    ui->setupUi(this);
}

chatpage3::~chatpage3()
{
    delete ui;
}
