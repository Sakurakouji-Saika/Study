#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->horizontalSlider,&QSlider::valueChanged,this,&Widget::do_valueChanged);
    connect(ui->horizontalScrollBar,&QScrollBar::valueChanged,this,&Widget::do_valueChanged);
    connect(ui->dial,&QDial::valueChanged,this,&Widget::do_valueChanged);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::do_valueChanged(int value)
{
    ui->progressBar->setValue(value);

}

void Widget::on_checkBox_Visible_clicked(bool checked)
{
    ui->progressBar->setVisible(checked);
}


void Widget::on_checkBox_Inverted_clicked(bool checked)
{
    ui->progressBar->setInvertedAppearance(checked);
}


void Widget::on_radioButton_Value_clicked()
{
    ui->progressBar->setFormat("%v");
}


void Widget::on_radioButton_Percent_clicked()
{
    ui->progressBar->setFormat("%p%");
}

