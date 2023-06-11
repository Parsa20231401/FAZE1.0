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

private:
    Ui::entrycode *ui;
};

#endif // ENTRYCODE_H
