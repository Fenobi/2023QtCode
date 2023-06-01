#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QWizard>

QT_BEGIN_NAMESPACE
namespace Ui { class MyWidget; }
QT_END_NAMESPACE

class QErrorMessage;

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    MyWidget(QWidget *parent = nullptr);
    ~MyWidget();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::MyWidget *ui;
    QErrorMessage *errordlg;
    //这里声明了3个返回值为QWizardPage类的指针函数，用来生成3个向导页面
    QWizardPage *createPage1();
    QWizardPage *createPage2();
    QWizardPage *createPage3();

};
#endif // MYWIDGET_H
