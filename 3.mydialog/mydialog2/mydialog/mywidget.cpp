#include "mywidget.h"
#include "ui_mywidget.h"
#include <QDebug>
#include <QColorDialog>
#include <QFileDialog>
#include <QFontDialog>
#include <QInputDialog>
#include <QMessageBox>
#include <QProgressDialog>
#include <QErrorMessage>
#include <QWizard>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    errordlg = new QErrorMessage(this);
}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::on_pushButton_clicked()
{
    //getColor()//3个参数：设置初始颜色、指定父窗口、设置对话框标题；
    //返回值：QColor：颜色参数信息QColor(ARGB1,1,0,0),这四个值表示为：透明度（alpha）、红色（red）、绿色（green）、蓝色（blue）
    //数值范围：0.0~1.0，有效数字为6位。
    //另外：对于alpha来说，1.0表示完全不透明（默认），0.0（完全透明）
    //对于三基色红绿蓝的数值，还可以用0~255表示；其中0.0--0 1.0--255
//    QColor color = QColorDialog::getColor(Qt::red,this,tr("颜色对话框"));
    QColor color = QColorDialog::getColor(Qt::red,this,tr("颜色对话框"),
                                          QColorDialog::ShowAlphaChannel);//显示透明度选择
    qDebug()<<"color:"<<color;
}

void MyWidget::on_pushButton_2_clicked()
{
    //getOpenFileName()//4个参数：指定父窗口、设置对话框标题、指定默认打开的目录路径、设置文件类型过滤器
    //如果不指定文件过滤器，则默认选择所有类型的文件
    //
//    QString fileName = QFileDialog::getOpenFileName(this,tr("文件对话框"),
//                                                "D:",tr("图片文件(*.png *.jpg);;文本文件(*.txt)"));//注意加空格,不同类别用;;

    //如果要同时选择多个文件则使用getOpenFileNames()，类型：QStringList
    QStringList fileNames = QFileDialog::getOpenFileNames(this,tr("文件对话框"),
                                                    "F:",tr("图片文件(*.png *.jpg)"));
    qDebug()<<"fileNames:"<<fileNames;
    //另外：QFileDialog类还有：getSaveFileName();实现保存文件对话框和文件另存为对话框
    //                      getExistingDirectory();获取一个已存在的文件夹路径
}

void MyWidget::on_pushButton_3_clicked()
{
    //ok用于标记是否单击了ok按钮
    bool ok;
    QFont font = QFontDialog::getFont(&ok,this);
    //如果单击ok按钮，让“字体对话框”按钮使用新字体
    //如果电机Cancel按钮，输出信息
    if(ok) ui->pushButton_3->setFont(font);
    else qDebug()<<tr("没有选择字体!");
}

void MyWidget::on_pushButton_4_clicked()
{

    bool ok;
    //getText()//获取字符串
    //参数：指定父窗口、设置窗口标题、设置对话框中的标签显示文本、设置输入字符串的显示模式、设置输入框中的默认字符串和设置获取按下按钮信息的bool变量
    QString string = QInputDialog::getText(this,tr("输入字符串对话框"),
                                           tr("请输入用户名："),QLineEdit::Normal,tr("admin"),&ok);
    if(ok) qDebug()<<"string"<<string;

    //getInt()//获取整数
    //参数：100表示默认的数值、—1000表示可输入的最小值、1000表示可输入的最大值、10表示使用箭头按钮,数值每次变化10
    int value1 = QInputDialog::getInt(this,tr("请输入整数对话框"),
                                      tr("请输入-1000到1000之间的数值"),100,-1000,1000,10,&ok);
    if(ok) qDebug()<<"value1:"<<value1;

    //getDouble()//获取浮点数
    //参数：2表示小数的位数;
    int value2 = QInputDialog::getDouble(this,tr("请输入浮点数数对话框"),
                                      tr("请输入-1000到1000之间的数值"),0.00,-1000,1000,2,&ok);
    if(ok) qDebug()<<"value2:"<<value2;
    QStringList items;
    items<<tr("条目1")<<tr("条目2");

    //getItem()//获取条目，但需要先给它提供一些条目,例如这里定义的QStringList类型的items
    //其中，参数О表示默认显示列表中的第0个条目(0就是第一个)、参数 true 设置条目是否可以被更改, true就是可以被更改。
    //这里使用了静态函数,不过也可以自己定义对象,然后使用相关的函数进行设置。
    QString item = QInputDialog::getItem(this,tr("请输入条目对话框"),
                                      tr("请选择或输入一个条目"),items,0,true,&ok);
    if(ok) qDebug()<<"item:"<<item;
}

void MyWidget::on_pushButton_5_clicked()
{
    //四个不同类型的消息对话框，分别拥有不同的图标和提示音
    //参数：设置父窗口、标题栏、显示信息和拥有的按钮(QMessageBox类提供的标准按钮)
    //about()无返回值，aboutQt()显示现在使用的Qt版本等信息

    //问题对话框
    int ret1 = QMessageBox::question(this,tr("问题对话框"),
                                     tr("你了解Qt吗？"),QMessageBox::Yes,QMessageBox::No);
    if(ret1 == QMessageBox::Yes) qDebug()<<tr("问题！");

    //提示对话框
    int ret2 = QMessageBox::information(this,tr("提示对话框"),
                                        tr("这是Qt书籍！"),QMessageBox::Ok);
    if(ret2 == QMessageBox::Ok) qDebug()<<tr("提示！");

    //警告对话框
    int ret3 = QMessageBox::warning(this,tr("警告对话框"),
                                        tr("不能提前结束！"),QMessageBox::Abort);
    if(ret3 == QMessageBox::Abort) qDebug()<<tr("警告！");

    //错误对话框
    int ret4 = QMessageBox::critical(this,tr("严重错误对话框"),
                                        tr("发现一个严重错误！现在需要关闭所有文件！"),QMessageBox::YesAll);
    if(ret4 == QMessageBox::YesAll) qDebug()<<tr("错误");

    //关于对话框
    QMessageBox::about(this,tr("关于对话框"),
                       tr("yafeilinux致力于Qt及Qt Creator的普及工作！"));
}

void MyWidget::on_pushButton_6_clicked()
{
    //QProgressDialog类对象的构造函数参数：设置对话框的标签内容、取消按钮的显示文本、最小值、最大值、父窗口
    QProgressDialog dialog(tr("文件复制进度"),tr("取消"),0,100000,this);
    dialog.setWindowTitle(tr("进度对话框"));//设置窗口标题
    dialog.setWindowModality(Qt::WindowModal);//将对话框设置为模态
    dialog.show();
    int i=0;
    for(; i<=100000; ++i)
    {
        dialog.setValue(i);
        QCoreApplication::processEvents();//避免界面冻结
        if(dialog.wasCanceled()) break;//按下取消按钮则中断
    }
//    dialog.setValue(50000);
    if(i == 100001)
        qDebug()<<tr("复制结束！");
    else
        qDebug()<<tr("取消复制！");
}

void MyWidget::on_pushButton_7_clicked()
{
    errordlg->setWindowTitle(tr("错误信息对话框"));
    errordlg->showMessage(tr("这里是出错信息"));
}

QWizardPage *MyWidget::createPage1()
{
    QWizardPage *page = new QWizardPage;
    page->setTitle(tr("介绍"));
    return page;
}

QWizardPage *MyWidget::createPage2()
{
    QWizardPage *page = new QWizardPage;
    page->setTitle(tr("用户选择信息"));
    return page;
}

QWizardPage *MyWidget::createPage3()
{
    QWizardPage *page = new QWizardPage;
    page->setTitle(tr("结束"));
    return page;
}

void MyWidget::on_pushButton_8_clicked()
{
    QWizard wizard(this);
    wizard.setWindowTitle(tr("向导对话框"));
    //addPage()//添加页面，参数：QwizardPage类的指针
    wizard.addPage(createPage1());
    wizard.addPage(createPage2());
    wizard.addPage(createPage3());
    wizard.exec();
}
