#ifndef CHATPAGE3_H
#define CHATPAGE3_H

#include <QMainWindow>

namespace Ui {
class chatpage3;
}

class chatpage3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit chatpage3(QWidget *parent = nullptr);
    ~chatpage3();

private:
    Ui::chatpage3 *ui;
};

#endif // CHATPAGE3_H
