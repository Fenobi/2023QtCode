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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QPushButton *showChildButton;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName(QString::fromUtf8("MyWidget"));
        MyWidget->resize(511, 420);
        showChildButton = new QPushButton(MyWidget);
        showChildButton->setObjectName(QString::fromUtf8("showChildButton"));
        showChildButton->setGeometry(QRect(200, 170, 93, 28));
        label = new QLabel(MyWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 651, 31));
        pushButton = new QPushButton(MyWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(260, 340, 93, 28));
        pushButton_2 = new QPushButton(MyWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(380, 340, 93, 28));

        retranslateUi(MyWidget);
        QObject::connect(pushButton_2, SIGNAL(clicked()), MyWidget, SLOT(close()));

        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QCoreApplication::translate("MyWidget", "MyWidget", nullptr));
        showChildButton->setText(QCoreApplication::translate("MyWidget", "\346\230\276\347\244\272\345\255\220\347\252\227\345\217\243", nullptr));
        label->setText(QCoreApplication::translate("MyWidget", "\346\210\221\346\230\257\344\270\273\347\225\214\351\235\242", nullptr));
        pushButton->setText(QCoreApplication::translate("MyWidget", "\351\207\215\346\226\260\347\231\273\345\275\225", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MyWidget", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
