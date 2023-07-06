#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include "QSerialPort" //串口访问
#include "QSerialPortInfo" //串口端口信息访问
#include <QDebug>
#include <QMessageBox>
#include <QTimer>
#include <QFileDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class MyWidget; }
QT_END_NAMESPACE

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    MyWidget(QWidget *parent = nullptr);
    ~MyWidget();
    void Init();
private slots:
    void on_pushButton_3_clicked();

    void Read_Data();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked(bool checked);

    void onTimeOut();
    void on_pushButton_6_clicked();

private:
    Ui::MyWidget *ui;
    QSerialPort SerialPort;
    QTimer *tim;
};
#endif // MYWIDGET_H
