#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class mywidget; }
QT_END_NAMESPACE

class mywidget : public QMainWindow
{
    Q_OBJECT

public:
    mywidget(QWidget *parent = nullptr);
    ~mywidget();

private:
    Ui::mywidget *ui;
};
#endif // MYWIDGET_H
