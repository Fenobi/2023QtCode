#include "widget.h"
#include "ui_widget.h"
#include "QDebug"
#include "QFileDialog"

QString str;
int num = 0;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    tim = new QTimer(this);
    tim->setInterval(1000);//设置定时器时间
    connect(tim, SIGNAL(timeout()), this, SLOT(onTimeOut()));//设置定时器运行函数
    tim->start();//打开定时器
    str = QString::number(num);
    ui->label_8->setText(str);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_button_1_clicked(bool checked)
{
    if(checked)
    {
        qDebug()<<tr("ok");
        ui->label_4->setText("打开");
    }
    else
    {
        qDebug()<<tr("no");
        ui->label_4->setText("关闭");
    }
}

void Widget::on_pushButton_3_clicked(bool checked)
{
    if(checked)
    {
        qDebug()<<tr("灯光开");
    }
    else
    {
        qDebug()<<tr("灯光关");
    }
}

void Widget::on_pushButton_2_clicked()
{
    QString Save_path = "实际值:";
    Save_path += ui->label_8->text();
    QString DefaultFile = "C:/Users/Kenobi/Desktop/1.txt";
    QFileInfo info(DefaultFile);
    bool ok = info.isFile();
    if (!ok)
    {
        //如果文件不存在，则创建并打开该文件
        //初始化时加载文件路径
        QString fileName = QFileDialog::getSaveFileName(this,Save_path,"",tr("Curve TagName Files (*.txt)"));
        QFile file(fileName);
        //以读写的方式打开文件，成功返回true，失败返回false
        file.open(QIODevice::ReadWrite);
        file.write(Save_path.toUtf8());
        file.close();
    }
    else
    {
        QFile file(DefaultFile);
        file.open(QIODevice::ReadWrite);
        file.write(Save_path.toUtf8());
        file.close();
    }
}

void Widget::onTimeOut()
{
    //static int value = 0;
    str = QString::number(num++);
    ui->label_8->setText(str);
}
