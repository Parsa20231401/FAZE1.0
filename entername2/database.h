#ifndef DATABASE_H
#define DATABASE_H

#include <QtSql>
#include "QSqlDatabase"
#include "QSqlQuery"
#include "QSqlDriver"
#include "QSqlQueryModel"
#include "ui_mainwindow.h"
#include <QMessageBox>

extern QString theusername;

class dataBase
{


public:
    dataBase();
    ~dataBase();
    void insertProfile(const QString& column, const QString& info);
    bool searchData(Ui::MainWindow* ui);
    bool insertNewuser(Ui::MainWindow* ui);

private:
    Ui::MainWindow* ui;
    QSqlQuery q, q2;
    QSqlDatabase db;
    QString userName;
};

#endif // DATABASE_H
