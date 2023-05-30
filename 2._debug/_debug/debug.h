#ifndef DEBUG_H
#define DEBUG_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class debug; }
QT_END_NAMESPACE

class debug : public QWidget
{
    Q_OBJECT

public:
    debug(QWidget *parent = nullptr);
    ~debug();

private:
    Ui::debug *ui;
};
#endif // DEBUG_H
