/********************************************************************************
** Form generated from reading UI file 'chat2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT2_H
#define UI_CHAT2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chat2
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *chat2)
    {
        if (chat2->objectName().isEmpty())
            chat2->setObjectName(QString::fromUtf8("chat2"));
        chat2->resize(406, 466);
        centralwidget = new QWidget(chat2);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 351, 81));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout_3->addWidget(pushButton_3);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_3->addWidget(pushButton_2);

        chat2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(chat2);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 406, 26));
        chat2->setMenuBar(menubar);
        statusbar = new QStatusBar(chat2);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        chat2->setStatusBar(statusbar);

        retranslateUi(chat2);

        QMetaObject::connectSlotsByName(chat2);
    } // setupUi

    void retranslateUi(QMainWindow *chat2)
    {
        chat2->setWindowTitle(QApplication::translate("chat2", "MainWindow", nullptr));
        pushButton_3->setText(QApplication::translate("chat2", "PushButton", nullptr));
        pushButton->setText(QApplication::translate("chat2", "PushButton", nullptr));
        pushButton_2->setText(QApplication::translate("chat2", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chat2: public Ui_chat2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT2_H
