#include "mywidget.h"
#include "ui_mywidget.h"
#include <QDebug>
#include <QMenu>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    ui->pushButton_1->setText(tr("你好"));
    ui->pushButton_2->setText(tr("帮助(&H)")); //&H:指定Alt+H快捷键
    ui->pushButton_3->setIcon(QIcon("../mybutton/images/preview.jpg"));
    ui->pushButton_3->setText(tr("z&oom"));
    QMenu *menu = new QMenu(this);
    menu->addAction(QIcon("../mybutton/images/preview.jpg"),tr("放大"));
    ui->pushButton_3->setMenu(menu);

}

MyWidget::~MyWidget()
{
    delete ui;
}


void MyWidget::on_pushButton1_toggled(bool checked)
{
    qDebug() << tr("按钮是否按下：") << checked;
}
