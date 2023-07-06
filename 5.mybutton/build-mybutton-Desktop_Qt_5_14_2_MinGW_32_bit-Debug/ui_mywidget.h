/********************************************************************************
** Form generated from reading UI file 'mywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIDGET_H
#define UI_MYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QGroupBox *groupBox;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QGroupBox *groupBox_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName(QString::fromUtf8("MyWidget"));
        MyWidget->resize(800, 600);
        pushButton_1 = new QPushButton(MyWidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(30, 30, 111, 28));
        pushButton_1->setCheckable(true);
        pushButton_1->setChecked(false);
        pushButton_2 = new QPushButton(MyWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 70, 111, 28));
        pushButton_2->setFlat(true);
        pushButton_3 = new QPushButton(MyWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 110, 111, 28));
        groupBox = new QGroupBox(MyWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(170, 30, 131, 81));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(0, 20, 91, 19));
        checkBox->setTristate(true);
        checkBox_2 = new QCheckBox(groupBox);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(0, 40, 91, 19));
        checkBox_2->setTristate(true);
        checkBox_3 = new QCheckBox(groupBox);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(0, 60, 91, 19));
        checkBox_3->setTristate(true);
        groupBox_2 = new QGroupBox(MyWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(310, 30, 120, 80));
        radioButton = new QRadioButton(groupBox_2);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(0, 20, 115, 19));
        radioButton_2 = new QRadioButton(groupBox_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(0, 40, 115, 19));
        radioButton_3 = new QRadioButton(groupBox_2);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(0, 60, 115, 19));

        retranslateUi(MyWidget);

        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QCoreApplication::translate("MyWidget", "MyWidget", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MyWidget", "PushButton1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MyWidget", "PushButton2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MyWidget", "PushButton3", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MyWidget", "\345\244\215\351\200\211\346\241\206", nullptr));
        checkBox->setText(QCoreApplication::translate("MyWidget", "\350\267\221\346\255\245", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MyWidget", "\350\270\242\347\220\203", nullptr));
        checkBox_3->setText(QCoreApplication::translate("MyWidget", "\346\270\270\346\263\263", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MyWidget", "\345\215\225\351\200\211\346\241\206", nullptr));
        radioButton->setText(QCoreApplication::translate("MyWidget", "\345\276\210\345\245\275", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MyWidget", "\344\270\200\350\210\254", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MyWidget", "\344\270\215\345\245\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
