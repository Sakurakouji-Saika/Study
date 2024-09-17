#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btnTotalPrice_clicked()
{
    bool ok;
    quint32 number = ui->lineEdit_number->text().toInt();
    qreal unitPrice = ui->lineEdit_UnitPrice->text().toDouble();

    qreal totalPrice = number*unitPrice;

    QString str =  QString::number(totalPrice,'f',2);
    //number(数值,’类型‘,小数点保留)


    //QString str;
    //str.setNum(value, 'f', 2);
    //将浮点数转换为字符串并赋值给 str;
    //setNum这是一个成员函数，用于将数值转换为字符串并赋值给现有的 QString 对象。

    ui->lineEdit_TotalPrice->setText(str);


}


void Widget::on_btnDebug_clicked()
{
    qDebug("PI=%f",3.1415926);
    QString str =  QString::number(3.1415926,'f',10);
    qDebug("PI=%s",str.toLocal8Bit().data());


}


void Widget::on_btnDEC_clicked()
{
    quint32 number = ui->lineEdit_DEC->text().toInt();
    ui->lineEdit_BIN->setText(QString::number(number,2));
    ui->lineEdit_HEX->setText(QString::number(number,16));

}


void Widget::on_btnBIN_clicked()
{
    bool ok;
    quint32 value = ui->lineEdit_BIN->text().toInt(&ok,2);
    //第一个参数是看有没有转换成功，第二个参数是进制
    if(!ok)return;
    ui->lineEdit_DEC->setText(QString::number(value,10));
    ui->lineEdit_HEX->setText(QString::number(value,16));
}


void Widget::on_btnHEX_clicked()
{
    bool ok;
    quint32 value = ui->lineEdit_HEX->text().toInt(&ok,16);
    //第一个参数是看有没有转换成功，第二个参数是进制
    if(!ok)return;
    ui->lineEdit_DEC->setText(QString::number(value,10));
    ui->lineEdit_BIN->setText(QString::number(value,2));
}

