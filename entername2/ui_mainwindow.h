/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QLabel *label_12;
    QGroupBox *groupBox_2;
    QLabel *label_13;
    QPushButton *pushButton_2;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLabel *label_19;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QLabel *label_20;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_7;
    QLabel *label_8;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_25;
    QLabel *label_26;
    QGroupBox *groupBox_3;
    QLabel *label_17;
    QPushButton *pushButton_4;
    QLabel *label_18;
    QLabel *label_11;
    QPushButton *pushButton_3;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_3;
    QLabel *label_15;
    QLineEdit *lineEdit_3;
    QLabel *label_27;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_6;
    QLabel *label_28;
    QLabel *label_21;
    QLineEdit *lineEdit_6;
    QLabel *label_22;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *comboBox;
    QLineEdit *lineEdit_7;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_23;
    QLabel *label_24;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_9;
    QLabel *label_10;
    QGroupBox *groupBox_4;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton_5;
    QPushButton *shortcutButton1;
    QComboBox *comboBox_receiver;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1583, 936);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 127);\n"
"\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(170, 80, 581, 401));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 151, 21));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 161, 31));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 100, 55, 16));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 220, 93, 28));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(200, 280, 121, 16));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(120, 260, 281, 71));
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(30, 30, 111, 16));
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 20, 91, 41));
        formLayoutWidget = new QWidget(groupBox);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 50, 221, 111));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_19 = new QLabel(formLayoutWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        label_19->setFrameShape(QFrame::Box);

        formLayout->setWidget(1, QFormLayout::FieldRole, label_19);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        lineEdit_2 = new QLineEdit(formLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_2);

        label_20 = new QLabel(formLayoutWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        label_20->setFrameShape(QFrame::Box);

        formLayout->setWidget(3, QFormLayout::FieldRole, label_20);

        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(240, 40, 321, 41));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        verticalLayout_2->addWidget(label_8);

        verticalLayoutWidget_2 = new QWidget(groupBox);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(240, 100, 321, 41));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_25 = new QLabel(verticalLayoutWidget_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        verticalLayout_3->addWidget(label_25);

        label_26 = new QLabel(verticalLayoutWidget_2);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        verticalLayout_3->addWidget(label_26);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(820, 80, 721, 401));
        groupBox_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_17 = new QLabel(groupBox_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(260, 100, 55, 16));
        pushButton_4 = new QPushButton(groupBox_3);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(330, 330, 121, 31));
        label_18 = new QLabel(groupBox_3);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(280, 240, 55, 16));
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(300, 250, 161, 61));
        label_11->setFrameShape(QFrame::Box);
        pushButton_3 = new QPushButton(groupBox_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(580, 210, 41, 28));
        pushButton_3->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/cheshm2.jpg);"));
        formLayoutWidget_2 = new QWidget(groupBox_3);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(30, 30, 291, 203));
        formLayout_3 = new QFormLayout(formLayoutWidget_2);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(formLayoutWidget_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_15);

        lineEdit_3 = new QLineEdit(formLayoutWidget_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, lineEdit_3);

        label_27 = new QLabel(formLayoutWidget_2);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        label_27->setFrameShape(QFrame::Box);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, label_27);

        label_16 = new QLabel(formLayoutWidget_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_16);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lineEdit_4 = new QLineEdit(formLayoutWidget_2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        horizontalLayout_3->addWidget(lineEdit_4);

        pushButton_6 = new QPushButton(formLayoutWidget_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/cheshm1.jpg);"));

        horizontalLayout_3->addWidget(pushButton_6);


        formLayout_3->setLayout(2, QFormLayout::FieldRole, horizontalLayout_3);

        label_28 = new QLabel(formLayoutWidget_2);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        label_28->setFrameShape(QFrame::Box);

        formLayout_3->setWidget(3, QFormLayout::FieldRole, label_28);

        label_21 = new QLabel(formLayoutWidget_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        formLayout_3->setWidget(4, QFormLayout::LabelRole, label_21);

        lineEdit_6 = new QLineEdit(formLayoutWidget_2);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        formLayout_3->setWidget(4, QFormLayout::FieldRole, lineEdit_6);

        label_22 = new QLabel(formLayoutWidget_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        formLayout_3->setWidget(5, QFormLayout::LabelRole, label_22);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        comboBox = new QComboBox(formLayoutWidget_2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_5->addWidget(comboBox);

        lineEdit_7 = new QLineEdit(formLayoutWidget_2);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        horizontalLayout_5->addWidget(lineEdit_7);


        formLayout_3->setLayout(5, QFormLayout::FieldRole, horizontalLayout_5);

        verticalLayoutWidget_3 = new QWidget(groupBox_3);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(330, 20, 331, 41));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_23 = new QLabel(verticalLayoutWidget_3);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        verticalLayout_4->addWidget(label_23);

        label_24 = new QLabel(verticalLayoutWidget_3);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        verticalLayout_4->addWidget(label_24);

        verticalLayoutWidget_4 = new QWidget(groupBox_3);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(330, 90, 321, 41));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(verticalLayoutWidget_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        verticalLayout_5->addWidget(label_9);

        label_10 = new QLabel(verticalLayoutWidget_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        verticalLayout_5->addWidget(label_10);

        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(420, 490, 371, 271));
        groupBox_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_5 = new QLineEdit(groupBox_4);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(120, 100, 131, 41));
        pushButton_5 = new QPushButton(groupBox_4);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setEnabled(true);
        pushButton_5->setGeometry(QRect(140, 170, 93, 28));
        shortcutButton1 = new QPushButton(centralwidget);
        shortcutButton1->setObjectName(QString::fromUtf8("shortcutButton1"));
        shortcutButton1->setGeometry(QRect(850, 540, 261, 71));
        QFont font;
        font.setPointSize(12);
        shortcutButton1->setFont(font);
        shortcutButton1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        comboBox_receiver = new QComboBox(centralwidget);
        comboBox_receiver->setObjectName(QString::fromUtf8("comboBox_receiver"));
        comboBox_receiver->setGeometry(QRect(590, 10, 131, 22));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1583, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        label->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "enter youe information:", nullptr));
        label_3->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "log in", nullptr));
        label_12->setText(QString());
        groupBox_2->setTitle(QString());
        label_13->setText(QApplication::translate("MainWindow", "not a member?", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "sign up", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "username:", nullptr));
        lineEdit->setText(QString());
        label_19->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "password:", nullptr));
        label_20->setText(QString());
        label_7->setText(QApplication::translate("MainWindow", "rule1:you can not use(*&^%#$)", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "rule2:your username should have atleast 8 characters", nullptr));
        label_25->setText(QApplication::translate("MainWindow", "rule1:you just have to use numbers", nullptr));
        label_26->setText(QApplication::translate("MainWindow", "rule2:your password should have atleast 8 characters", nullptr));
        groupBox_3->setTitle(QString());
        label_17->setText(QString());
        pushButton_4->setText(QApplication::translate("MainWindow", "CREATE CAPCHA", nullptr));
        label_18->setText(QString());
        label_11->setText(QString());
        pushButton_3->setText(QString());
        label_15->setText(QApplication::translate("MainWindow", "username:", nullptr));
        label_27->setText(QString());
        label_16->setText(QApplication::translate("MainWindow", "password:", nullptr));
        pushButton_6->setText(QString());
        label_28->setText(QString());
        label_21->setText(QApplication::translate("MainWindow", "email:", nullptr));
        label_22->setText(QApplication::translate("MainWindow", "phone number:", nullptr));
        label_23->setText(QApplication::translate("MainWindow", "rule1:you can not use(*&^%#$)", nullptr));
        label_24->setText(QApplication::translate("MainWindow", "rule2:your username should have atleast 8 characters", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "rule1:you just have to use numbers", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "rule2:your password should have atleast 8 characters", nullptr));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "enter the capcha", nullptr));
        lineEdit_5->setPlaceholderText(QApplication::translate("MainWindow", "write here", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "go", nullptr));
        shortcutButton1->setText(QApplication::translate("MainWindow", "temporary button", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
