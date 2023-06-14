#ifndef ENTRYCODE_H
#define ENTRYCODE_H

#include <QMainWindow>

namespace Ui {
class entrycode;
}

class entrycode : public QMainWindow
{
    Q_OBJECT

public:
    explicit entrycode(QWidget *parent = nullptr);
    ~entrycode();

private slots:

    void on_pushButton_clicked();

//    void on_lineEdit_returnPressed();

//    void on_pushButton_2_clicked();

    void on_pushButton_2_toggled(bool checked);

    void on_pushButton_3_toggled(bool checked);

private:
    Ui::entrycode *ui;
};

#endif // ENTRYCODE_H
