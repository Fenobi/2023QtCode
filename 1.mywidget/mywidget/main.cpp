#include "mywidget.h"
#include <QtWidgets>
#include <QApplication>

int main(int argc, char *argv[])
{
    //更多窗口类型可以在示例：Window Flag中看到
    QApplication a(argc, argv);
    //新建QWidget类对象
    QWidget* widget=new QWidget();
    //QWidget* widget=new QWidget(0,Qt::Dialog);
    //QWidget* widget=new QWidget(0,Qt::Dialog | Qt::FramelessWindowHint);//FramelessWindowHint：产生无边框窗口
    //设置窗口标题
    widget->setWindowTitle(QObject::tr("我是widget"));

    //新建QLabel对象
    QLabel* label=new QLabel();
    //QLabel* label=new QLabel(0,Qt::SplashScreen);
    //QLabel* label=new QLabel(0,Qt::SplashScreen | Qt::WindowStaysOnTopHint);//WindowStaysOnTopHint：使窗口停留在最上面
    label->setWindowTitle(QObject::tr("我是label"));

    //设置要显示的信息
    label->setText(QObject::tr("label:我是个窗口"));

    //改变部件大小，以便可以显示完整内容
    label->resize(180,20);

    //label2指定了父窗口为widget，所以不是窗口
    QLabel* label2=new QLabel(widget);
    label2->setText(QObject::tr("label2:我不是独立窗口，只是widget的子部件"));
    label2->resize(250,20);

    //在屏幕上显示出来
    label->show();
    widget->show();

    int ret=a.exec();
    delete label;
    delete widget;
//    mywidget w;
//    w.show();
    return ret;
}
