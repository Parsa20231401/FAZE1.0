#ifndef SAFHEPISHVAZ_H
#define SAFHEPISHVAZ_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class safhePishvaz; }
QT_END_NAMESPACE

class safhePishvaz : public QMainWindow
{
    Q_OBJECT

public:
    explicit safhePishvaz(QWidget *parent = nullptr);
    ~safhePishvaz();

private slots:
    void on_pushButton_clicked();

private:
    Ui::safhePishvaz *ui;
};

#endif // SAFHEPISHVAZ_H
