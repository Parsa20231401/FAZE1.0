/********************************************************************************
** Form generated from reading UI file 'safhepishvaz.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAFHEPISHVAZ_H
#define UI_SAFHEPISHVAZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_safhePishvaz
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QLabel *label;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *safhePishvaz)
    {
        if (safhePishvaz->objectName().isEmpty())
            safhePishvaz->setObjectName(QString::fromUtf8("safhePishvaz"));
        safhePishvaz->resize(800, 600);
        centralwidget = new QWidget(safhePishvaz);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(110, 50, 541, 461));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(190, 360, 141, 71));
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(70, 200, 401, 81));
        textEdit->setFrameShape(QFrame::NoFrame);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 40, 351, 121));
        label->setStyleSheet(QString::fromUtf8("image: url(:/new/prefixxx/black tel logo.png);"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(110, 290, 331, 21));
        lineEdit->setFrame(false);
        safhePishvaz->setCentralWidget(centralwidget);
        menubar = new QMenuBar(safhePishvaz);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        safhePishvaz->setMenuBar(menubar);
        statusbar = new QStatusBar(safhePishvaz);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        safhePishvaz->setStatusBar(statusbar);

        retranslateUi(safhePishvaz);

        QMetaObject::connectSlotsByName(safhePishvaz);
    } // setupUi

    void retranslateUi(QMainWindow *safhePishvaz)
    {
        safhePishvaz->setWindowTitle(QApplication::translate("safhePishvaz", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("safhePishvaz", "GroupBox", nullptr));
        pushButton->setText(QApplication::translate("safhePishvaz", "Let's Start", nullptr));
        textEdit->setHtml(QApplication::translate("safhePishvaz", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Welcome To Our Sperior Version Of Telegram</span></p></body></html>", nullptr));
        label->setText(QString());
        lineEdit->setText(QApplication::translate("safhePishvaz", "It was made by collaboration of Maryam and Parsa", nullptr));
    } // retranslateUi

};

namespace Ui {
    class safhePishvaz: public Ui_safhePishvaz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAFHEPISHVAZ_H
