#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "tperson.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

public:
    //创建2个对象
    TPerson *boy;
    TPerson *girl;

public slots:

    void do_ageChanged(int value);  //年龄数值变动处理函数
    void do_spinChanged(int arg1);  //spin组件变动处理函数


private slots:
    //使用QT IDE 创建的点击操作（槽）
    void on_btnBoyInc_clicked();
    void on_btnGirlInc_clicked();
    void on_btnClear_clicked();
    void on_btnClassInfo_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
