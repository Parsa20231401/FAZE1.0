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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_server
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *textBrowser_receivedMessages;
    QComboBox *comboBox_receiver;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *server)
    {
        if (server->objectName().isEmpty())
            server->setObjectName(QString::fromUtf8("server"));
        server->resize(889, 591);
        centralwidget = new QWidget(server);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(640, 480, 91, 31));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(0, 480, 641, 31));
        textBrowser_receivedMessages = new QLabel(centralwidget);
        textBrowser_receivedMessages->setObjectName(QString::fromUtf8("textBrowser_receivedMessages"));
        textBrowser_receivedMessages->setGeometry(QRect(0, 0, 731, 481));
        textBrowser_receivedMessages->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 0);"));
        comboBox_receiver = new QComboBox(centralwidget);
        comboBox_receiver->setObjectName(QString::fromUtf8("comboBox_receiver"));
        comboBox_receiver->setGeometry(QRect(480, 430, 181, 31));
        server->setCentralWidget(centralwidget);
        menubar = new QMenuBar(server);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 889, 26));
        server->setMenuBar(menubar);
        statusbar = new QStatusBar(server);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        server->setStatusBar(statusbar);

        retranslateUi(server);

        QMetaObject::connectSlotsByName(server);
    } // setupUi

    void retranslateUi(QMainWindow *server)
    {
        server->setWindowTitle(QApplication::translate("server", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("server", "PushButton", nullptr));
        textBrowser_receivedMessages->setText(QApplication::translate("server", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class server: public Ui_server {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_server_H