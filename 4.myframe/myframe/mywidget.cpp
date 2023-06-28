#include "mywidget.h"
#include "ui_mywidget.h"
#include <QPixmap>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    ui->label->setPixmap(QPixmap("D:\1994514.png"));
}

MyWidget::~MyWidget()
{
    delete ui;
}

