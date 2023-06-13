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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_entrycode
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *entrycode)
    {
        if (entrycode->objectName().isEmpty())
            entrycode->setObjectName(QString::fromUtf8("entrycode"));
        entrycode->resize(800, 600);
        centralwidget = new QWidget(entrycode);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(210, 60, 391, 181));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 70, 111, 31));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(180, 60, 101, 41));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 130, 80, 25));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(260, 320, 241, 81));
        entrycode->setCentralWidget(centralwidget);
        menubar = new QMenuBar(entrycode);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        entrycode->setMenuBar(menubar);
        statusbar = new QStatusBar(entrycode);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        entrycode->setStatusBar(statusbar);

        retranslateUi(entrycode);

        QMetaObject::connectSlotsByName(entrycode);
    } // setupUi

    void retranslateUi(QMainWindow *entrycode)
    {
        entrycode->setWindowTitle(QApplication::translate("entrycode", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("entrycode", "GroupBox", nullptr));
        label_3->setText(QApplication::translate("entrycode", "security code:", nullptr));
        label_4->setText(QApplication::translate("entrycode", "TextLabel", nullptr));
        pushButton->setText(QApplication::translate("entrycode", "ok", nullptr));
        lineEdit->setText(QApplication::translate("entrycode", "enter the code", nullptr));
    } // retranslateUi

};

namespace Ui {
    class entrycode: public Ui_entrycode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTRYCODE_H
