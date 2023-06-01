#include "mywidget.h"
#include <QApplication>
#include "mydialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWidget w;
    MyDialog dialog;
    if(dialog.exec() == QDialog::Accepted)//判断dialog执行结果
    {
        //如果按下“进入主菜单”，则显示主界面
        w.show();
        return a.exec();
    }
    else
    {
        return 0;
    }
}
