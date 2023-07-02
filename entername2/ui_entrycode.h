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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_entrycode
{
public:
    QWidget *centralwidget;
    QLineEdit *codeInput;
    QGroupBox *groupBox;
    QPushButton *ok_pushButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *code_label;
    QLabel *textcode_label;

    void setupUi(QMainWindow *entrycode)
    {
        if (entrycode->objectName().isEmpty())
            entrycode->setObjectName(QString::fromUtf8("entrycode"));
        entrycode->resize(414, 405);
        centralwidget = new QWidget(entrycode);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        codeInput = new QLineEdit(centralwidget);
        codeInput->setObjectName(QString::fromUtf8("codeInput"));
        codeInput->setGeometry(QRect(90, 310, 231, 71));
        QFont font;
        font.setPointSize(16);
        codeInput->setFont(font);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 10, 321, 281));
        ok_pushButton = new QPushButton(groupBox);
        ok_pushButton->setObjectName(QString::fromUtf8("ok_pushButton"));
        ok_pushButton->setGeometry(QRect(110, 190, 101, 41));
        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(60, 70, 215, 81));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        code_label = new QLabel(horizontalLayoutWidget);
        code_label->setObjectName(QString::fromUtf8("code_label"));
        code_label->setFont(font);

        horizontalLayout->addWidget(code_label);

        textcode_label = new QLabel(horizontalLayoutWidget);
        textcode_label->setObjectName(QString::fromUtf8("textcode_label"));
        textcode_label->setFont(font);

        horizontalLayout->addWidget(textcode_label);

        entrycode->setCentralWidget(centralwidget);

        retranslateUi(entrycode);

        QMetaObject::connectSlotsByName(entrycode);
    } // setupUi

    void retranslateUi(QMainWindow *entrycode)
    {
        entrycode->setWindowTitle(QApplication::translate("entrycode", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        ok_pushButton->setText(QApplication::translate("entrycode", "ok", nullptr));
        code_label->setText(QApplication::translate("entrycode", "code:", nullptr));
        textcode_label->setText(QApplication::translate("entrycode", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class entrycode: public Ui_entrycode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTRYCODE_H
