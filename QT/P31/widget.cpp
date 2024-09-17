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

void Widget::on_btn_readDT_clicked()
{
    QDateTime curDateTime = QDateTime::currentDateTime();
    ui->timeEdit->setTime(curDateTime.time());
    ui->EditTime->setText(curDateTime.toString("hh:mm:ss"));
    ui->dateEdit->setDate(curDateTime.date());
    ui->EditDate->setText(curDateTime.toString("yyyy-MM-dd"));
    ui->dateTimeEdit->setDateTime(curDateTime);
    ui->EditDateTime->setText(curDateTime.toString("yyyy-MM-dd hh:mm:ss"));
}


void Widget::on_btn_bug_time_clicked()
{
    QTime time(13,25,5);
    QString str =time.toString("HH:mm:ss");

    qDebug("str初始 time= %s",str.toLocal8Bit().data());

    QTime Tm2=time.addSecs(150);
    str=Tm2.toString("HH:mm:ss");
    qDebug("添加150秒后 time= %s",str.toLocal8Bit().data());

    Tm2 = QTime::currentTime();
    str= Tm2.toString("HH:mm:ss");
    qDebug("当前时间 time= %s",str.toLocal8Bit().data());
    qDebug("小时= %d",Tm2.hour());
    qDebug("分钟= %d",Tm2.minute());
    qDebug("秒数= %d",Tm2.second());
    qDebug("毫秒数= %d",Tm2.msec());


}


void Widget::on_btn_bug_date_clicked()
{
    QDate DT1(2021,7,6);
    QString str= DT1.toString("yyyy-MM-dd");
    qDebug("DT1= %s",str.toLocal8Bit().data());

    QDate DT2;
    DT2.setDate(2021,8,25);
    str= DT2.toString("yyyy-MM-dd");
    qDebug("DT2= %s",str.toLocal8Bit().data());
    qDebug("Days between DT2 and DT1= %d",DT2.daysTo(DT1)); //DT2与DT1之间相差的天数

    DT2= QDate::currentDate();
    str= DT2.toString("yyyy-MM-dd");
    qDebug("Current date= %s",str.toLocal8Bit().data());
    qDebug("Year= %d",  DT2.year());
    qDebug("Month= %d", DT2.month());
    qDebug("Day= %d",   DT2.day());
    qDebug("Day of week= %d", DT2.dayOfWeek());  //1表示星期一，7表示星期天
}


void Widget::on_btn_bug_dateTime_clicked()
{
    QDateTime  DT1= QDateTime::currentDateTime();    //系统当前日期时间
    QString str= DT1.toString("yyyy-MM-dd hh:mm:ss");
    qDebug("DT1= %s",str.toLocal8Bit().data());

    QDate dt= DT1.date();    //日期部分
    str= dt.toString("yyyy-MM-dd");
    qDebug("DT1.date()= %s",str.toLocal8Bit().data());

    QTime tm= DT1.time();    //时间部分
    str=tm.toString("hh:mm:ss zzz");
    qDebug("DT1.time()= %s",str.toLocal8Bit().data());

    qint64 MS= DT1.toSecsSinceEpoch();   //转换为秒数
    qDebug("DT1.toSecsSinceEpoch()= %lld",MS);

    MS += 120;
    DT1.setSecsSinceEpoch(MS);      //加120秒以后
    str= DT1.toString("yyyy-MM-dd hh:mm:ss");
    qDebug("DT1+120s= %s",str.toLocal8Bit().data());
}


void Widget::on_btn_setTime_clicked()
{
    QString str = ui->EditTime->text();
    str = str.trimmed();//除字符串首尾空白;
    if(!str.isEmpty()){
        QTime tm = QTime::fromString(str,"hh:mm:ss");
        ui->timeEdit->setTime(tm);
    }
}


void Widget::on_btn_setDate_clicked()
{
    QString str = ui->EditDate->text();

    str = str.trimmed();
    if(!str.isEmpty()){
        QDate date = QDate::fromString(str,"yyyy-MM-dd");
        ui->dateEdit->setDate(date);
    }
}


void Widget::on_btn_setDateTime_clicked()
{
    QString str = ui->EditDateTime->text();
    str = str.trimmed();
    qDebug("str:%s",str.toLocal8Bit().data());
    if(!str.isEmpty()){
        QDateTime date = QDateTime::fromString(str,"yyyy-MM-dd hh:mm:ss");
        qDebug("date:%s",str.toLocal8Bit().data());
        ui->dateTimeEdit->setDateTime(date);
    }
}


void Widget::on_calendarWidget_selectionChanged()
{
    QString str = ui->calendarWidget->selectedDate().toString("yyyy年M月d日");
    ui->lineEdit_4->setText(str);

}

