/********************************************************************************
** Form generated from reading UI file 'safhepishvaz.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAFHEPISHVAZ_H
#define UI_SAFHEPISHVAZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_safhePishvaz
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QMainWindow *safhePishvaz)
    {
        if (safhePishvaz->objectName().isEmpty())
            safhePishvaz->setObjectName(QString::fromUtf8("safhePishvaz"));
        safhePishvaz->resize(538, 521);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(safhePishvaz->sizePolicy().hasHeightForWidth());
        safhePishvaz->setSizePolicy(sizePolicy);
        safhePishvaz->setMinimumSize(QSize(538, 521));
        safhePishvaz->setMaximumSize(QSize(538, 521));
        centralwidget = new QWidget(safhePishvaz);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 0, 541, 521));
        QFont font;
        font.setPointSize(16);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix10/logo.png);\n"
"background-color: rgb(170, 255, 127);\n"
""));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 450, 411, 51));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 0);"));
        safhePishvaz->setCentralWidget(centralwidget);

        retranslateUi(safhePishvaz);

        QMetaObject::connectSlotsByName(safhePishvaz);
    } // setupUi

    void retranslateUi(QMainWindow *safhePishvaz)
    {
        safhePishvaz->setWindowTitle(QApplication::translate("safhePishvaz", "MainWindow", nullptr));
        pushButton->setText(QString());
        label->setText(QApplication::translate("safhePishvaz", "welcome to my version of telegram", nullptr));
    } // retranslateUi

};

namespace Ui {
    class safhePishvaz: public Ui_safhePishvaz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAFHEPISHVAZ_H
