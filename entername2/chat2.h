#ifndef CHAT2_H
#define CHAT2_H

#include <QMainWindow>

namespace Ui {
class chat2;
}

class chat2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit chat2(QWidget *parent = nullptr);
    ~chat2();

private slots:


    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::chat2 *ui;
};

#endif // CHAT2_H
