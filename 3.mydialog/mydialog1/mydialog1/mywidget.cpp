#include "mywidget.h"
#include "ui_mywidget.h"
#include <QDialog>
#include "mydialog.h"

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyWidget)
{
    ui->setupUi(this);
//    connect(ui->showChildButton,&QPushButton::clicked,this,&MyWidget::showChildDialog);
}

void MyWidget::on_showChildButton_clicked()
{
    QDialog *dialog=new QDialog(this);//注意要加QDialog头文件

    dialog->show();
}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::on_pushButton_clicked()
{
    //先关闭主界面，其实它是隐藏起来了，并没有真正退出。然后新建MyDialog对象
    close();
    MyDialog dlg;
    //如果按下“重新登录”按钮。则再次显示主界面
    if(dlg.exec() == QDialog::Accepted)
        show();
}
