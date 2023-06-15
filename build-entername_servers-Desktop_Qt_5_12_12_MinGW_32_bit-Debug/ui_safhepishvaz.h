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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_safhePishvaz
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *safhePishvaz)
    {
        if (safhePishvaz->objectName().isEmpty())
            safhePishvaz->setObjectName(QString::fromUtf8("safhePishvaz"));
        safhePishvaz->resize(800, 600);
        centralwidget = new QWidget(safhePishvaz);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(289, 280, 141, 51));
        safhePishvaz->setCentralWidget(centralwidget);
        menubar = new QMenuBar(safhePishvaz);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        safhePishvaz->setMenuBar(menubar);
        statusbar = new QStatusBar(safhePishvaz);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        safhePishvaz->setStatusBar(statusbar);

        retranslateUi(safhePishvaz);

        QMetaObject::connectSlotsByName(safhePishvaz);
    } // setupUi

    void retranslateUi(QMainWindow *safhePishvaz)
    {
        safhePishvaz->setWindowTitle(QApplication::translate("safhePishvaz", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("safhePishvaz", "go", nullptr));
    } // retranslateUi

};

namespace Ui {
    class safhePishvaz: public Ui_safhePishvaz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAFHEPISHVAZ_H
