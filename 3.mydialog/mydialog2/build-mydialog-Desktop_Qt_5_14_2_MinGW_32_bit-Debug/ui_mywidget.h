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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_7;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_8;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName(QString::fromUtf8("MyWidget"));
        MyWidget->resize(569, 493);
        widget = new QWidget(MyWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(81, 0, 116, 501));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        verticalLayout->addWidget(pushButton_7);

        widget1 = new QWidget(MyWidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(330, 0, 121, 491));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(widget1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);

        pushButton_4 = new QPushButton(widget1);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout_2->addWidget(pushButton_4);

        pushButton_6 = new QPushButton(widget1);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        verticalLayout_2->addWidget(pushButton_6);

        pushButton_8 = new QPushButton(widget1);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        verticalLayout_2->addWidget(pushButton_8);


        retranslateUi(MyWidget);

        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QCoreApplication::translate("MyWidget", "MyWidget", nullptr));
        pushButton->setText(QCoreApplication::translate("MyWidget", "\351\242\234\350\211\262\345\257\271\350\257\235\346\241\206", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MyWidget", "\345\255\227\344\275\223\345\257\271\350\257\235\346\241\206", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MyWidget", "\346\266\210\346\201\257\345\257\271\350\257\235\346\241\206", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MyWidget", "\351\224\231\350\257\257\344\277\241\346\201\257\345\257\271\350\257\235\346\241\206", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MyWidget", "\346\226\207\344\273\266\345\257\271\350\257\235\346\241\206", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MyWidget", "\350\276\223\345\205\245\345\257\271\350\257\235\346\241\206", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MyWidget", "\350\277\233\345\272\246\345\257\271\350\257\235\346\241\206", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MyWidget", "\345\220\221\345\257\274\345\257\271\350\257\235\346\241\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
