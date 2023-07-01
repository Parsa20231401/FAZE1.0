#ifndef DATABASE_H
#define DATABASE_H

#include <QObject>
#include <QtSql>
#include "QSqlDatabase"
#include "QSqlQuery"
#include "QSqlDriver"
#include "QSqlQueryModel"


class dataBase
{


public:
    dataBase();
    ~dataBase();
    void insert(const QString& column, const QString& info);

private:
    QSqlQuery q;
    QSqlDatabase db;
};

#endif // DATABASE_H
