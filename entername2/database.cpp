#include "database.h"


dataBase::dataBase()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./database\\mainusersdata.db");

    if (!db.open()) {
        qDebug() << "Failed to open database:" << db.lastError().text();
    }
    q = QSqlQuery(db);
    q2 = QSqlQuery(db);
}

void dataBase::insertProfile(const QString& column, const QString& info)
{

    q.exec("UPDATE usersInfo SET '"+column+"' = '"+info+"' WHERE username = '"+theusername+"' ");

   if (q.lastError().isValid()) {
       qDebug() << "Failed to insert info:" << q.lastError().text() << theusername;
   } else {
       qDebug() << "info inserted successfully."<< theusername;
   }
}

bool dataBase::searchData(Ui::MainWindow* ui)
{

    QString username, password;

    username = ui->login_username->text();
    password = ui->login_password->text();

    q.exec("SELECT username FROM usersInfo WHERE username = '"+username+"'");
    if(q.first())
    {
        q2.exec("SELECT password FROM usersInfo WHERE password='"+password+"'");
        return q2.first();
    }
    else return false;
}

bool dataBase::insertNewuser(Ui::MainWindow* Ui)
{
    this->ui = Ui;
    QString username, password, email, phone, code;

    username = ui->signup_username->text();
    password = ui->password_username->text();
    email = ui->email->text();
    phone = ui->phone->text();
    code = ui->comboBox->currentText();

    q.exec("SELECT username FROM usersInfo WHERE username='"+username+"'");

    if(q.first()){
        return false;
    }
    else{
        q.exec("INSERT INTO usersInfo(username, password, email, phone, country_code)VALUES('"+username+"','"+password+"','"+email+"','"+phone+"','"+code+"') ");
        return true;
    }
}

QString dataBase::returnInfo(const QString& username, const QString& column)
{
    q.exec("SELECT "+column+"  FROM usersInfo WHERE username='"+username+"'");

    if(q.next()) {
        QString selectedValue = q.value(0).toString();
        qDebug() << "username:" << username << selectedValue;
        return selectedValue;
    }
    else {
        qDebug() << "No rows returned";
        if (column == "name")
            return "bot";
        else
            return ":/new/prefix1/images/bot_user.png";
    }
}

dataBase::~dataBase()
{
    db.close();
}

