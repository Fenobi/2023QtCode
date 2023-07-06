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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QLineEdit *lineEdit_1;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName(QString::fromUtf8("MyWidget"));
        MyWidget->setWindowModality(Qt::WindowModal);
        MyWidget->resize(571, 355);
        lineEdit_1 = new QLineEdit(MyWidget);
        lineEdit_1->setObjectName(QString::fromUtf8("lineEdit_1"));
        lineEdit_1->setGeometry(QRect(250, 60, 171, 21));
        lineEdit_1->setEchoMode(QLineEdit::Password);
        lineEdit_2 = new QLineEdit(MyWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(250, 110, 171, 21));
        lineEdit_2->setEchoMode(QLineEdit::Normal);
        lineEdit_3 = new QLineEdit(MyWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(250, 160, 171, 21));
        lineEdit_4 = new QLineEdit(MyWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(250, 210, 171, 21));
        label = new QLabel(MyWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(141, 64, 75, 16));
        label_2 = new QLabel(MyWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(141, 114, 75, 16));
        label_3 = new QLabel(MyWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(141, 164, 75, 16));
        label_4 = new QLabel(MyWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(141, 214, 75, 16));

        retranslateUi(MyWidget);

        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QCoreApplication::translate("MyWidget", "MyWidget", nullptr));
        lineEdit_2->setInputMask(QCoreApplication::translate("MyWidget", ">AA-90-bb-!aa\\#H;*", nullptr));
        label->setText(QCoreApplication::translate("MyWidget", "\346\230\276\347\244\272\346\250\241\345\274\217\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("MyWidget", "\350\276\223\345\205\245\346\216\251\347\240\201\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("MyWidget", "\350\276\223\345\205\245\351\252\214\350\257\201\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("MyWidget", "\350\207\252\345\212\250\345\256\214\346\210\220\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
