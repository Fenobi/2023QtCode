#include "mywidget.h"
#include "ui_mywidget.h"
#include <QDialog>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyWidget)
{
    ui->setupUi(this);

//    QDialog dialog(this);
//    dialog.show();//此时窗口会一闪而过：函数中定义的变量 函数执行结束会自动释放

//    QDialog *dialog=new QDialog(this);//开辟内存空间
//    dialog->show();
    //模态对话框
//    QDialog dialog(this);
//    dialog.exec();//使用exec：只有当对话框关闭时才会返回
    //同上:模态对话框
    QDialog *dialog=new QDialog(this);
    dialog->setModal(true);
    dialog->show();

}

MyWidget::~MyWidget()
{
    delete ui;
}

