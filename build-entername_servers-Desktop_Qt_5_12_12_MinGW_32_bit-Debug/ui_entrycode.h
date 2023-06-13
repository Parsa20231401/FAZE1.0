/********************************************************************************
** Form generated from reading UI file 'entrycode.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTRYCODE_H
#define UI_ENTRYCODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_entrycode
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *entrycode)
    {
        if (entrycode->objectName().isEmpty())
            entrycode->setObjectName(QString::fromUtf8("entrycode"));
        entrycode->resize(800, 600);
        menubar = new QMenuBar(entrycode);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        entrycode->setMenuBar(menubar);
        centralwidget = new QWidget(entrycode);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        entrycode->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(entrycode);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        entrycode->setStatusBar(statusbar);

        retranslateUi(entrycode);

        QMetaObject::connectSlotsByName(entrycode);
    } // setupUi

    void retranslateUi(QMainWindow *entrycode)
    {
        entrycode->setWindowTitle(QApplication::translate("entrycode", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class entrycode: public Ui_entrycode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTRYCODE_H
