#include "safhepishvaz.h"
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile stylesheetfile("./stylesheets//Irrorater.qss");
    stylesheetfile.open(QFile::ReadOnly);
    QString stylesheet = QLatin1String(stylesheetfile.readAll());
    a.setStyleSheet(stylesheet);

    safhePishvaz w;
    w.show();
    return a.exec();
}
