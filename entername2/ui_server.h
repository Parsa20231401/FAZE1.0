/********************************************************************************
** Form generated from reading UI file 'server.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVER_H
#define UI_SERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chatpage
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QComboBox *comboBox_receiver;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *chatpage)
    {
        if (chatpage->objectName().isEmpty())
            chatpage->setObjectName(QString::fromUtf8("chatpage"));
        chatpage->resize(889, 591);
        centralwidget = new QWidget(chatpage);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(640, 480, 91, 31));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(0, 480, 641, 31));
        comboBox_receiver = new QComboBox(centralwidget);
        comboBox_receiver->setObjectName(QString::fromUtf8("comboBox_receiver"));
        comboBox_receiver->setGeometry(QRect(480, 430, 181, 31));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(50, 120, 501, 261));
        chatpage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(chatpage);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 889, 25));
        chatpage->setMenuBar(menubar);
        statusbar = new QStatusBar(chatpage);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        chatpage->setStatusBar(statusbar);

        retranslateUi(chatpage);

        QMetaObject::connectSlotsByName(chatpage);
    } // setupUi

    void retranslateUi(QMainWindow *chatpage)
    {
        chatpage->setWindowTitle(QApplication::translate("chatpage", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("chatpage", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chatpage: public Ui_chatpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVER_H
