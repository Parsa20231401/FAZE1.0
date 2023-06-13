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
    QLineEdit *lineEdit;
    QGroupBox *groupBox;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *entrycode)
    {
        if (entrycode->objectName().isEmpty())
            entrycode->setObjectName(QString::fromUtf8("entrycode"));
        entrycode->resize(942, 633);
        centralwidget = new QWidget(entrycode);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(290, 300, 201, 81));
        QFont font;
        font.setPointSize(18);
        lineEdit->setFont(font);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setEnabled(true);
        groupBox->setGeometry(QRect(230, 80, 311, 161));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 60, 121, 31));
        QFont font1;
        font1.setPointSize(10);
        label_3->setFont(font1);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(150, 40, 141, 61));
        QFont font2;
        font2.setPointSize(12);
        label_4->setFont(font2);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 120, 91, 31));
        pushButton->setFont(font1);
        entrycode->setCentralWidget(centralwidget);
        menubar = new QMenuBar(entrycode);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 942, 26));
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
        lineEdit->setPlaceholderText(QApplication::translate("entrycode", "enter the code", nullptr));
        groupBox->setTitle(QString());
        label_3->setText(QApplication::translate("entrycode", "security code:", nullptr));
        label_4->setText(QString());
        pushButton->setText(QApplication::translate("entrycode", "ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class entrycode: public Ui_entrycode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTRYCODE_H
