/********************************************************************************
** Form generated from reading UI file 'debug.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBUG_H
#define UI_DEBUG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_debug
{
public:

    void setupUi(QWidget *debug)
    {
        if (debug->objectName().isEmpty())
            debug->setObjectName(QString::fromUtf8("debug"));
        debug->resize(800, 600);

        retranslateUi(debug);

        QMetaObject::connectSlotsByName(debug);
    } // setupUi

    void retranslateUi(QWidget *debug)
    {
        debug->setWindowTitle(QCoreApplication::translate("debug", "debug", nullptr));
    } // retranslateUi

};

namespace Ui {
    class debug: public Ui_debug {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBUG_H
