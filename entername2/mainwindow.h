#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "entrycode.h"
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QMetaType>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

   void on_pushButton_5_clicked();

   void on_pushButton_6_clicked();

   void on_lineEdit_textEdited(const QString &arg1);

   void on_lineEdit_2_textEdited(const QString &arg1);

   void on_lineEdit_3_textEdited(const QString &arg1);

   void on_lineEdit_4_textEdited(const QString &arg1);

   void on_pushButton_3_clicked();


private:
    Ui::MainWindow *ui;
    entrycode *c;

};
#endif // MAINWINDOW_H
