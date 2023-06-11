/********************************************************************************
** Form generated from reading UI file 'chatpage3.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATPAGE3_H
#define UI_CHATPAGE3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chatpage3
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *chatpage3)
    {
        if (chatpage3->objectName().isEmpty())
            chatpage3->setObjectName(QString::fromUtf8("chatpage3"));
        chatpage3->resize(800, 600);
        menubar = new QMenuBar(chatpage3);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        chatpage3->setMenuBar(menubar);
        centralwidget = new QWidget(chatpage3);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        chatpage3->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(chatpage3);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        chatpage3->setStatusBar(statusbar);

        retranslateUi(chatpage3);

        QMetaObject::connectSlotsByName(chatpage3);
    } // setupUi

    void retranslateUi(QMainWindow *chatpage3)
    {
        chatpage3->setWindowTitle(QApplication::translate("chatpage3", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chatpage3: public Ui_chatpage3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATPAGE3_H
