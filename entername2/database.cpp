#include "database.h"

dataBase::dataBase()
{

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./database\\mainusersdata.db");

    if (!db.open()) {
        qDebug() << "Failed to open database:" << db.lastError().text();
    }
    q = QSqlQuery(db);
}

void dataBase::insert(const QString& column, const QString& info)
{
//    QSqlQuery p;
//    p.exec("INSERT INTO usersInfo('"+column+"') VALUES('"+info+"')");

//        if (p.lastError().isValid()) {
//            qDebug() << "Failed to insert name:" << p.lastError().text();
//        } else {
//            qDebug() << "Name inserted successfully.";
//        }

//    QSqlQuery q;

    QString x = "ttt";
    q.exec("UPDATE usersInfo SET '"+column+"' = '"+info+"' WHERE id = (SELECT MAX(id) FROM usersInfo) ");
//    q.exec("UPDATE usersInfo SET '"+column+"' = '"+info+"' WHERE id = '"+x+"' ");

   if (q.lastError().isValid()) {
       qDebug() << "Failed to insert info:" << q.lastError().text();
   } else {
       qDebug() << "info inserted successfully.";
   }
}

dataBase::~dataBase()
{
//    db.close();
}
