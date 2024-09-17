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

void Widget::on_btn_left_clicked()
{
    ui->lineEdit->setAlignment(Qt::AlignLeft);
}


void Widget::on_btn_center_clicked()
{
    ui->lineEdit->setAlignment(Qt::AlignCenter);
}


void Widget::on_btn_right_clicked()
{
    ui->lineEdit->setAlignment(Qt::AlignRight);
}


void Widget::on_btnFont_Bold_clicked(bool checked)
{
    QFont font = ui->lineEdit->font();
    font.setBold(checked);
    ui->lineEdit->setFont(font);
}


void Widget::on_btnFont_italic_clicked(bool checked)
{
    QFont font = ui->lineEdit->font();
    font.setItalic(checked);
    ui->lineEdit->setFont(font);
}




void Widget::on_btnFont_UnderLine_clicked(bool checked)
{
    QFont font = ui->lineEdit->font();
    font.setUnderline(checked);
    ui->lineEdit->setFont(font);
}



void Widget::on_checkBox_Readonly_clicked(bool checked)
{
    ui->lineEdit->setReadOnly(checked);
}



void Widget::on_checkBox_Enabled_clicked(bool checked)
{
    ui->lineEdit->setEnabled(checked);
}


void Widget::on_checkBox_ClearButton_clicked(bool checked)
{
     ui->lineEdit->setClearButtonEnabled(checked);
}


void Widget::on_radioButton_Black_clicked(bool checked)
{
    QPalette  palette = ui->lineEdit->palette();
    palette.setColor(QPalette::Text,Qt::black);
    ui->lineEdit->setPalette(palette);
}


void Widget::on_radioButton_Red_clicked(bool checked)
{
    QPalette  palette = ui->lineEdit->palette();
    palette.setColor(QPalette::Text,Qt::red);
    ui->lineEdit->setPalette(palette);
}


void Widget::on_radioButton_Blue_clicked(bool checked)
{
    QPalette  palette = ui->lineEdit->palette();
    palette.setColor(QPalette::Text,Qt::blue);
    ui->lineEdit->setPalette(palette);
}

