#include "database.h"

dataBase::dataBase()
{

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./database\\mainusersdata.db");

    if (!db.open()) {
        qDebug() << "Failed to open database:" << db.lastError().text();
    }
}

void dataBase::insert(const QString& column, const QString& info)
{
    QSqlQuery p;
    p.exec("INSERT INTO usersInfo('"+column+"') VALUES('"+info+"')");

}

dataBase::~dataBase()
{
//    database.close();
}
