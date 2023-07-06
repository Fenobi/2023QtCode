#include "widget.h"
#include "ui_widget.h"
#include "QDebug"
#include "QFileDialog"
#include <QTime>

QString str;
int num = 0;
QString m_red_SheetStyle = "min-width:30px; min-height: 30px;max-width:30px; max-height: 30px;border-radius: 15px;  border:1px solid black;background:white";

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    tim = new QTimer(this);
    tim->setInterval(1000);//设置定时器时间
    connect(tim, SIGNAL(timeout()), this, SLOT(onTimeOut()));//设置定时器运行函数

    str = QString::number(num);

    ui->label->setStyleSheet(m_red_SheetStyle);
    ui->label_2->setStyleSheet(m_red_SheetStyle);
    ui->label_3->setStyleSheet(m_red_SheetStyle);
    ui->label_4->setStyleSheet(m_red_SheetStyle);
    ui->label_5->setStyleSheet(m_red_SheetStyle);
    ui->label_6->setStyleSheet(m_red_SheetStyle);
    ui->label_7->setStyleSheet(m_red_SheetStyle);
    ui->label_8->setStyleSheet(m_red_SheetStyle);


}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_button_1_clicked(bool checked)
{
    if(checked)
    {
        tim->start();//打开定时器
        m_red_SheetStyle = "min-width:30px; min-height: 30px;max-width:30px; max-height: 30px;border-radius: 15px;  border:1px solid black;background:red";
    }
    else
    {
        tim->stop();
        m_red_SheetStyle = "min-width:30px; min-height: 30px;max-width:30px; max-height: 30px;border-radius: 15px;  border:1px solid black;background:white";
        ui->label->setStyleSheet(m_red_SheetStyle);
        ui->label_2->setStyleSheet(m_red_SheetStyle);
        ui->label_3->setStyleSheet(m_red_SheetStyle);
        ui->label_4->setStyleSheet(m_red_SheetStyle);
        ui->label_5->setStyleSheet(m_red_SheetStyle);
        ui->label_6->setStyleSheet(m_red_SheetStyle);
        ui->label_7->setStyleSheet(m_red_SheetStyle);
        ui->label_8->setStyleSheet(m_red_SheetStyle);
    }
}

void Widget::on_pushButton_3_clicked(bool checked)
{
    if(checked)
    {
        m_red_SheetStyle = "min-width:30px; min-height: 30px;max-width:30px; max-height: 30px;border-radius: 15px;  border:1px solid black;background:red";

        ui->label->setStyleSheet(m_red_SheetStyle);
        ui->label_2->setStyleSheet(m_red_SheetStyle);
        ui->label_3->setStyleSheet(m_red_SheetStyle);
        ui->label_4->setStyleSheet(m_red_SheetStyle);
        ui->label_5->setStyleSheet(m_red_SheetStyle);
        ui->label_6->setStyleSheet(m_red_SheetStyle);
        ui->label_7->setStyleSheet(m_red_SheetStyle);
        ui->label_8->setStyleSheet(m_red_SheetStyle);
    }
}

void Widget::on_pushButton_2_clicked(bool checked)
{

}

void Widget::onTimeOut()
{
    //static int value = 0;
    if(num++>=8)
        num = 0;
    switch(num)
    {
    case 1:
        ui->label->setStyleSheet(m_red_SheetStyle);break;
    case 2:
        ui->label_2->setStyleSheet(m_red_SheetStyle);break;
    case 3:
        ui->label_3->setStyleSheet(m_red_SheetStyle);break;
    case 4:
        ui->label_4->setStyleSheet(m_red_SheetStyle);break;
    case 5:
        ui->label_5->setStyleSheet(m_red_SheetStyle);break;
    case 6:
        ui->label_6->setStyleSheet(m_red_SheetStyle);break;
    case 7:
        ui->label_7->setStyleSheet(m_red_SheetStyle);break;
    case 8:
        ui->label_8->setStyleSheet(m_red_SheetStyle);break;
    }



}
