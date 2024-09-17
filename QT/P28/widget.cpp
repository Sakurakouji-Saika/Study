#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->connect(ui->spinBox_number,&QSpinBox::valueChanged,this,&Widget::on_btn_totalPrice_clicked);
    this->connect(ui->doubleSpinBox_unit_price,&QDoubleSpinBox::valueChanged,this,&Widget::on_btn_totalPrice_clicked);
}

Widget::~Widget()
{
    delete ui;
}




void Widget::on_btn_totalPrice_clicked()
{
    int num = ui->spinBox_number->value();
    double unit_price = ui->doubleSpinBox_unit_price->value();
    double total_price = num* unit_price;
    qDebug("unit_price:%d  ,  unit_price:%lf  :  total_price:%lf",num,unit_price,total_price);
    ui->doubleSpinBox_total_price->setValue(total_price);
}


void Widget::on_spinBox_DEC_valueChanged(int arg1)
{
    ui->spinBox_BIN->setValue(arg1);
    ui->spinBox_HEX->setValue(arg1);
}

