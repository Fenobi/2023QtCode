#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "QDebug"
#include "QFileDialog"
#include <QMessageBox>
#include "ui_widget.h"
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);

    ~Widget();

private slots:
    void on_button_1_clicked(bool checked);

    void on_pushButton_3_clicked(bool checked);

    void on_pushButton_2_clicked(bool checked);

public slots:
    void onTimeOut();

private:
    Ui::Widget *ui;
    QTimer *tim;
};
#endif // WIDGET_H
