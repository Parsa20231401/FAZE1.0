#include "entrycode.h"
#include "ui_entrycode.h"

entrycode::entrycode(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::entrycode)
{
    ui->setupUi(this);
}

entrycode::~entrycode()
{
    delete ui;
}
