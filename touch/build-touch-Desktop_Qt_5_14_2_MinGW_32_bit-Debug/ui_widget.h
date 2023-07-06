/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *button_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QTextBrowser *textBrowser;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        button_1 = new QPushButton(Widget);
        button_1->setObjectName(QString::fromUtf8("button_1"));
        button_1->setGeometry(QRect(140, 370, 121, 51));
        button_1->setStyleSheet(QString::fromUtf8("\n"
"font: 16pt \"\351\273\221\344\275\223\";"));
        button_1->setCheckable(true);
        button_1->setAutoExclusive(true);
        button_1->setAutoDefault(false);
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(330, 370, 111, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";"));
        pushButton_2->setAutoDefault(false);
        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(500, 370, 131, 51));
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";"));
        pushButton_3->setCheckable(true);
        pushButton_3->setAutoDefault(false);
        textBrowser = new QTextBrowser(Widget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(83, 140, 651, 351));
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 213, 213);"));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(193, 210, 16, 16));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(240, 210, 16, 17));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(287, 210, 16, 17));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(335, 210, 16, 17));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        label_5 = new QLabel(Widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(382, 210, 16, 17));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        label_6 = new QLabel(Widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(429, 210, 16, 17));
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        label_7 = new QLabel(Widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(476, 210, 16, 17));
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        label_8 = new QLabel(Widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(524, 210, 16, 17));
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        textBrowser->raise();
        button_1->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        button_1->setText(QCoreApplication::translate("Widget", "\345\274\200\345\247\213", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "\346\255\243\346\265\201\346\260\264", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "\351\200\206\346\265\201\346\260\264", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
