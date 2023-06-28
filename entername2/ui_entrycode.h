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
#include <QtWidgets/QHBoxLayout>
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
    QPushButton *pushButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *entrycode)
    {
        if (entrycode->objectName().isEmpty())
            entrycode->setObjectName(QString::fromUtf8("entrycode"));
        entrycode->resize(800, 600);
        centralwidget = new QWidget(entrycode);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(280, 350, 231, 71));
        QFont font;
        font.setPointSize(16);
        lineEdit->setFont(font);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(240, 30, 321, 281));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 190, 101, 41));
        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(60, 70, 211, 81));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        horizontalLayout->addWidget(label);

        label_4 = new QLabel(horizontalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        horizontalLayout->addWidget(label_4);

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
        groupBox->setTitle(QString());
        pushButton->setText(QApplication::translate("entrycode", "ok", nullptr));
        label->setText(QApplication::translate("entrycode", "code:", nullptr));
        label_4->setText(QApplication::translate("entrycode", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class entrycode: public Ui_entrycode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTRYCODE_H
