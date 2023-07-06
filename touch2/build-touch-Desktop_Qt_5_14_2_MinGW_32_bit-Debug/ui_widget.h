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
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *button_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_4;
    QTextBrowser *textBrowser;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 170, 71, 41));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label->setTextFormat(Qt::AutoText);
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(230, 230, 91, 51));
        label_2->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(0, 0, 255);"));
        label_2->setTextFormat(Qt::AutoText);
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(230, 300, 91, 51));
        label_3->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(0, 0, 255);"));
        label_3->setTextFormat(Qt::AutoText);
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
        pushButton_2->setGeometry(QRect(310, 370, 111, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";"));
        pushButton_2->setAutoDefault(false);
        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(470, 370, 131, 51));
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";"));
        pushButton_3->setCheckable(true);
        pushButton_3->setAutoDefault(false);
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(350, 160, 111, 51));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_4->setFrameShape(QFrame::Box);
        label_4->setTextFormat(Qt::AutoText);
        label_4->setScaledContents(false);
        label_4->setAlignment(Qt::AlignCenter);
        label_4->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
        textBrowser = new QTextBrowser(Widget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(100, 110, 551, 351));
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 213, 213);"));
        label_5 = new QLabel(Widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(350, 230, 111, 51));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_5->setFrameShape(QFrame::Box);
        label_5->setTextFormat(Qt::AutoText);
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(Widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(470, 230, 41, 51));
        label_6->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(0, 0, 255);"));
        label_6->setTextFormat(Qt::AutoText);
        label_7 = new QLabel(Widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(470, 300, 31, 51));
        label_7->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(0, 0, 255);"));
        label_7->setTextFormat(Qt::AutoText);
        label_8 = new QLabel(Widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(350, 300, 111, 51));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_8->setFrameShape(QFrame::Box);
        label_8->setFrameShadow(QFrame::Plain);
        label_8->setTextFormat(Qt::AutoText);
        label_8->setScaledContents(true);
        label_8->setAlignment(Qt::AlignCenter);
        textBrowser->raise();
        label_3->raise();
        button_1->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        label_4->raise();
        label->raise();
        label_2->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
#if QT_CONFIG(shortcut)
#endif // QT_CONFIG(shortcut)

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\347\212\266\346\200\201\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\350\256\276\345\256\232\345\200\274\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\345\256\236\346\265\213\345\200\274\357\274\232", nullptr));
        button_1->setText(QCoreApplication::translate("Widget", "\345\274\200\345\247\213", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "\344\277\235\345\255\230", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "\347\201\257\345\205\211\345\274\200", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\345\205\263\351\227\255", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "39", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "\342\204\203", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "\342\204\203", nullptr));
        label_8->setText(QCoreApplication::translate("Widget", "39", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
