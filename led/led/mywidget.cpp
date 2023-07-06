#include "mywidget.h"
#include "ui_mywidget.h"

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    tim = new QTimer(this);
    tim->setInterval(500);//设置定时器时间
    connect(tim, SIGNAL(timeout()), this, SLOT(onTimeOut()));//设置定时器运行函数

    //查找可用的串口
    foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        QSerialPort SerialPort;
        SerialPort.setPort(info);
        if(SerialPort.open(QIODevice::ReadWrite))
        {
            ui->comboBox->addItem(SerialPort.portName());
            SerialPort.close();
        }
    }
        //设置波特率下拉菜单默认显示第三项
        ui->comboBox_2->setCurrentIndex(3);
        //关闭发送按钮的使能
        ui->pushButton_3->setEnabled(false);
        Init();
        qDebug() << tr("界面设定成功！");

    }

MyWidget::~MyWidget()
{
    delete ui;
}

//发送数据
void MyWidget::on_pushButton_3_clicked()
{
    QByteArray Data_1;
    //获取输入窗口sendData的数据
    QString Data = ui->textEdit_2->toPlainText();

    Data_1 = QByteArray::fromHex (Data.toLatin1().data());//按十六进制编码发送
    // 写入发送缓存区
    SerialPort.write(Data_1);
}

//读取接收到的数据
//void MyWidget::Read_Data()
//{
//    QByteArray buf;
//    buf = SerialPort.readAll();
//    if(!buf.isEmpty())
//    {
//        QString str = ui->textEdit->toPlainText();
//        str += tr(buf);
//        ui->textEdit->clear();
//        ui->textEdit->append(str);
//    }
//    buf.clear();
//}

void MyWidget::on_pushButton_clicked()
{
    // 打开串口
        if(ui->pushButton->text() == "打开串口")
        {
            // 设置串口号
            SerialPort.setPortName(ui->comboBox->currentText());
            // 打开串口
            if(SerialPort.open(QIODevice::ReadWrite))
            {
                // 设置波特率
                SerialPort.setBaudRate(ui->comboBox_2->currentText().toInt());
                //设置数据位数
                switch(ui->comboBox_3->currentIndex())
                {
                case 5: SerialPort.setDataBits(QSerialPort::Data5); break;
                case 6: SerialPort.setDataBits(QSerialPort::Data6); break;
                case 7: SerialPort.setDataBits(QSerialPort::Data7); break;
                case 8: SerialPort.setDataBits(QSerialPort::Data8); break;
                default: break;
                }
                // 设置校验位
                //SerialPort->setParity(QSerialPort::NoParity);
                //设置奇偶校验
                switch(ui->comboBox_4->currentIndex())
                {
                case 0: SerialPort.setParity(QSerialPort::NoParity); break;
                case 1: SerialPort.setParity(QSerialPort::OddParity); break;
                case 2: SerialPort.setParity(QSerialPort::EvenParity); break;
                default: break;
                }
                // 设置流控制
                SerialPort.setFlowControl(QSerialPort::NoFlowControl);
                //设置停止位
                switch(ui->comboBox_5->currentIndex())
                {
                case 1: SerialPort.setStopBits(QSerialPort::OneStop); break;
                case 2: SerialPort.setStopBits(QSerialPort::TwoStop); break;
                default: break;
                }
            }
            //打开串口
            else
            {
                QMessageBox::about(NULL, "提示", "串口无法打开\r\n不存在或已被占用");
                return;
            }
            ui->pushButton->setText("关闭串口");
            //下拉菜单控件使能
            ui->comboBox->setEnabled(false);
            ui->comboBox_2->setEnabled(false);
            ui->comboBox_3->setEnabled(false);
            ui->comboBox_4->setEnabled(false);
            ui->comboBox_5->setEnabled(false);
            //搜索串口按键使能
            ui->pushButton_4->setEnabled(false);
            //发送按键使能
            ui->pushButton_3->setEnabled(true);
        }
        // 关闭串口
        else
        {
            SerialPort.close();
            ui->pushButton->setText("打开串口");
            //下拉按键使能
            ui->comboBox->setEnabled(true);
            ui->comboBox_2->setEnabled(true);
            ui->comboBox_3->setEnabled(true);
            ui->comboBox_4->setEnabled(true);
            ui->comboBox_5->setEnabled(true);
            //搜索串口按键使能
            ui->pushButton_4->setEnabled(true);
            //发送按键使能
            ui->pushButton_3->setEnabled(false);
        }
}

void MyWidget::on_pushButton_4_clicked()
{
    ui->comboBox->clear();
        //通过QSerialPortInfo查找可用串口
        foreach(const QSerialPortInfo &info,QSerialPortInfo::availablePorts())
        {   //在portBox中显示可用串口
            ui->comboBox->addItem(info.portName());
        }
}

void MyWidget::Init()
{
    //读取串口信息
    foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        // 自动读取串口号添加到端口portBox中
        QSerialPort serial;
        serial.setPort(info);
        if(serial.open(QIODevice::ReadWrite))
        {
            ui->comboBox->addItem(info.portName());
            serial.close();
        }
    }
    QStringList baudList;   //波特率
    QStringList parityList; //校验位
    QStringList dataBitsList;   //数据位
    QStringList stopBitsList;   //停止位
    // 波特率    //波特率默认选择下拉第三项：9600
    baudList<<"1200"<<"2400"<<"4800"<<"9600"
           <<"14400"<<"19200"<<"38400"<<"56000"
          <<"57600"<<"115200";
    ui->comboBox_2->addItems(baudList);
    ui->comboBox_2->setCurrentIndex(9);
    // 校验      //校验默认选择无
    parityList<<"无"<<"奇"<<"偶";
    ui->comboBox_4->addItems(parityList);
    ui->comboBox_4->setCurrentIndex(0);
    // 数据位      //数据位默认选择8位
    dataBitsList<<"5"<<"6"<<"7"<<"8";
    ui->comboBox_3->addItems(dataBitsList);
    ui->comboBox_3->setCurrentIndex(3);
    // 停止位      //停止位默认选择1位
    stopBitsList<<"1"<<"2";
    ui->comboBox_5->addItems(stopBitsList);
    ui->comboBox_5->setCurrentIndex(0);
}

void MyWidget::Read_Data()
{
    QString buffer_1;
    //从缓冲区中读取数据
    QByteArray buffer = SerialPort.readAll();
    if(!buffer.isEmpty())//如果非空说明有数据接收
    {
        if(ui->checkBox_2->isChecked() || ui->checkBox->isChecked())
        {
            if(ui->checkBox_2->isChecked())
            {
                //转换成16进制大写
                QString str=buffer.toHex().data();
                str=str.toUpper();
                //一个16进制占4位，8位为一字节，所以每两位16进制空一格
                for(int i=0;i<str.length();i+=2)
                {
                    QString str_1 = str.mid (i,2);
                    buffer_1 += str_1;
                    buffer_1 += " ";
                    qDebug()<<buffer_1;
                }
            }
            else
            {
                ui->checkBox->setEnabled(true);
            }

            if(ui->checkBox->isChecked())
            {
                //查看字符
                QString str=buffer.data();
                str=str.toUpper()+" ";
                buffer_1 = str;
            }
            else
            {
                ui->checkBox_2->setEnabled(true);
            }
        }


        //读取之前显示数据
        QString receive = ui->textBrowser->toPlainText();
        //清空显示
        ui->textBrowser->clear();
        receive += QString(buffer_1);
        ui->textBrowser->append(receive);
        buffer.clear();
    }
}

void MyWidget::on_pushButton_5_clicked(bool checked)
{
    if(checked)
        tim->start();
    else
        tim->stop();
}
void MyWidget::onTimeOut()
{
    Read_Data();
}

void MyWidget::on_pushButton_6_clicked()
{
    QString Save_path = ui->textBrowser->toPlainText();
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
