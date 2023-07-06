#include "mywidget.h"
#include "ui_mywidget.h"
#include <QDebug>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyWidget)
{
    ui->setupUi(this);
}

MyWidget::~MyWidget()
{
    delete ui;
}


void MyWidget::on_lineEdit_2_returnPressed()
{
    ui->lineEdit_3->setFocus();//让lineEdit3获得焦点
    qDebug() << ui->lineEdit_2->text();//输入lineEdit2的内容
    qDebug() << ui->lineEdit_2->displayText();//输入lineEdit2显示的内容
}
