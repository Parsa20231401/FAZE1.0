/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_client
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QTextBrowser *textBrowser_receivedMessages;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *client)
    {
        if (client->objectName().isEmpty())
            client->setObjectName(QString::fromUtf8("client"));
        client->resize(735, 479);
        centralwidget = new QWidget(client);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(640, 400, 101, 31));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(0, 400, 641, 31));
        textBrowser_receivedMessages = new QTextBrowser(centralwidget);
        textBrowser_receivedMessages->setObjectName(QString::fromUtf8("textBrowser_receivedMessages"));
        textBrowser_receivedMessages->setGeometry(QRect(10, 10, 701, 371));
        client->setCentralWidget(centralwidget);
        menubar = new QMenuBar(client);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 735, 26));
        client->setMenuBar(menubar);
        statusbar = new QStatusBar(client);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        client->setStatusBar(statusbar);

        retranslateUi(client);

        QMetaObject::connectSlotsByName(client);
    } // setupUi

    void retranslateUi(QMainWindow *client)
    {
        client->setWindowTitle(QApplication::translate("client", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("client", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class client: public Ui_client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
