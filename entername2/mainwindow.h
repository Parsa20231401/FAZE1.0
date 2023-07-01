#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QMetaType>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_signup_button_clicked();



    void on_pushButton_4_clicked();

   void on_capchaEnterd_button_clicked();

   void on_see_button_clicked();

   void on_login_username_textEdited(const QString &arg1);

   void on_login_password_textEdited(const QString &arg1);

   void on_signup_username_textEdited(const QString &arg1);

   void on_password_username_textEdited(const QString &arg1);

   void on_unsee_button_clicked();

   void on_login_Button_clicked();

   void on_shortcutButton1_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
