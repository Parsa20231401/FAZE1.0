#include "pick_username.h"
#include "ui_pick_username.h"

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
