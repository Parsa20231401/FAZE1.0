/********************************************************************************
** Form generated from reading UI file 'pick_username.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICK_USERNAME_H
#define UI_PICK_USERNAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pick_username
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *continue_button;
    QLabel *profile;
    QPushButton *addProfile;
    QMenuBar *menubar;

    void setupUi(QMainWindow *pick_username)
    {
        if (pick_username->objectName().isEmpty())
            pick_username->setObjectName(QString::fromUtf8("pick_username"));
        pick_username->resize(800, 600);
        centralwidget = new QWidget(pick_username);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(320, 200, 371, 141));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(horizontalLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(lineEdit);

        continue_button = new QPushButton(centralwidget);
        continue_button->setObjectName(QString::fromUtf8("continue_button"));
        continue_button->setGeometry(QRect(310, 380, 171, 51));
        continue_button->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);"));
        profile = new QLabel(centralwidget);
        profile->setObjectName(QString::fromUtf8("profile"));
        profile->setGeometry(QRect(90, 140, 191, 201));
        profile->setStyleSheet(QString::fromUtf8("\n"
"border-image: url(:/new/prefix1/images/mode-portrait.png);"));
        profile->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/mode-portrait.png")));
        profile->setScaledContents(true);
        addProfile = new QPushButton(centralwidget);
        addProfile->setObjectName(QString::fromUtf8("addProfile"));
        addProfile->setGeometry(QRect(160, 340, 51, 51));
        addProfile->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/images/square-plus.png);"));
        pick_username->setCentralWidget(centralwidget);
        menubar = new QMenuBar(pick_username);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        pick_username->setMenuBar(menubar);

        retranslateUi(pick_username);

        QMetaObject::connectSlotsByName(pick_username);
    } // setupUi

    void retranslateUi(QMainWindow *pick_username)
    {
        pick_username->setWindowTitle(QApplication::translate("pick_username", "MainWindow", nullptr));
        label->setText(QApplication::translate("pick_username", "pick a name: ", nullptr));
        continue_button->setText(QApplication::translate("pick_username", "continue", nullptr));
        profile->setText(QString());
        addProfile->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class pick_username: public Ui_pick_username {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICK_USERNAME_H
