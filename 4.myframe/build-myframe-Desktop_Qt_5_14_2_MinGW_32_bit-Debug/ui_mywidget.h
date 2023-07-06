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
#include <QtWidgets/QFrame>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QFrame *frame;
    QLabel *label;
    QLCDNumber *lcdNumber;
    QListWidget *listWidget;
    QStackedWidget *stackedWidget_2;
    QWidget *page_3;
    QLabel *label_2;
    QWidget *page_4;
    QLabel *label_3;
    QToolBox *toolBox;
    QWidget *page;
    QToolBox *toolBox_2;
    QWidget *page_7;
    QWidget *page_5;
    QWidget *page_2;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName(QString::fromUtf8("MyWidget"));
        MyWidget->resize(800, 600);
        frame = new QFrame(MyWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(20, 10, 171, 81));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(5);
        frame->setMidLineWidth(10);
        label = new QLabel(MyWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 100, 131, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Raised);
        label->setLineWidth(1);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);
        lcdNumber = new QLCDNumber(MyWidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(20, 180, 161, 61));
        lcdNumber->setLineWidth(1);
        lcdNumber->setSmallDecimalPoint(false);
        lcdNumber->setDigitCount(5);
        lcdNumber->setSegmentStyle(QLCDNumber::Filled);
        lcdNumber->setProperty("value", QVariant(13.000000000000000));
        lcdNumber->setProperty("intValue", QVariant(13));
        listWidget = new QListWidget(MyWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(20, 250, 61, 81));
        stackedWidget_2 = new QStackedWidget(MyWidget);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(80, 250, 120, 81));
        stackedWidget_2->setFrameShape(QFrame::StyledPanel);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        label_2 = new QLabel(page_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 72, 15));
        stackedWidget_2->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        label_3 = new QLabel(page_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 72, 15));
        stackedWidget_2->addWidget(page_4);
        toolBox = new QToolBox(MyWidget);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setGeometry(QRect(250, 10, 85, 143));
        toolBox->setFrameShape(QFrame::Box);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 83, 54));
        toolBox_2 = new QToolBox(page);
        toolBox_2->setObjectName(QString::fromUtf8("toolBox_2"));
        toolBox_2->setGeometry(QRect(0, 0, 85, 141));
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        page_7->setGeometry(QRect(0, 0, 85, 112));
        toolBox_2->addItem(page_7, QString::fromUtf8("1"));
        toolBox->addItem(page, QString::fromUtf8("\345\245\275\345\217\213"));
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        toolBox->addItem(page_5, QString::fromUtf8("\351\273\221\345\220\215\345\215\225"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 83, 54));
        toolBox->addItem(page_2, QString::fromUtf8("\351\231\214\347\224\237\344\272\272"));

        retranslateUi(MyWidget);
        QObject::connect(listWidget, SIGNAL(currentRowChanged(int)), stackedWidget_2, SLOT(setCurrentIndex(int)));

        stackedWidget_2->setCurrentIndex(0);
        toolBox->setCurrentIndex(0);
        toolBox_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QCoreApplication::translate("MyWidget", "MyWidget", nullptr));
        label->setText(QCoreApplication::translate("MyWidget", "TextLabel", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MyWidget", "\347\254\254\344\270\200\351\241\265", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MyWidget", "\347\254\254\344\272\214\351\241\265", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        label_2->setText(QCoreApplication::translate("MyWidget", "\347\254\254\344\270\200\351\241\265", nullptr));
        label_3->setText(QCoreApplication::translate("MyWidget", "\347\254\254\344\272\214\351\241\265", nullptr));
        toolBox_2->setItemText(toolBox_2->indexOf(page_7), QCoreApplication::translate("MyWidget", "1", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QCoreApplication::translate("MyWidget", "\345\245\275\345\217\213", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_5), QCoreApplication::translate("MyWidget", "\351\273\221\345\220\215\345\215\225", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QCoreApplication::translate("MyWidget", "\351\231\214\347\224\237\344\272\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
