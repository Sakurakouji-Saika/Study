#include "widget.h"
#include "./ui_widget.h"
#include <QMetaProperty>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    boy = new TPerson("小明",this);
    girl = new TPerson("小红",this);
    //创建对象


    boy->setProperty("sex","boy");
    boy->setProperty("score",70);
    girl->setProperty("sex","girl");
    //设置类属性
    boy->SetAge(10);
    girl->SetAge(10);
    //设置类成员变量


    ui->spinBoy->setProperty("isBoy",true);
    ui->spinGirl->setProperty("isBoy",false);
    //设置设置类属性

    connect(boy,SIGNAL(ageChanged(int)),this,SLOT(do_ageChanged(int)));
    connect(girl,SIGNAL(ageChanged(int)),this,SLOT(do_ageChanged(int)));
    //将TPerson类的成员变量与年龄信号变动与处理相关函数相连接

    connect(ui->spinBoy,SIGNAL(valueChanged(int)),this,SLOT(do_spinChanged(int)));
    connect(ui->spinGirl,SIGNAL(valueChanged(int)),this,SLOT(do_spinChanged(int)));
    //spinBox 组件更改数值，触发年龄相关函数do_spinChanged

    connect(boy,SIGNAL(ageChanged(int)),ui->spinBoy,SLOT(do_ageChanged(int)));
    connect(girl,SIGNAL(ageChanged(int)),ui->spinGirl,SLOT(do_ageChanged(int)));
    //将spinBox 与 TPerson相关联

}

Widget::~Widget()
{
    delete ui;
}

void Widget::do_ageChanged(int value)
{
    QObject *obj = sender();  // 获取发送信号的对象
    TPerson *tperson = qobject_cast<TPerson*>(obj);

    if (tperson == boy) {
        qDebug() << "来自小明的信号";
    } else if (tperson == girl) {
        qDebug() << "来自小红的信号";
    } else {
        qDebug() << "未知对象的信号";
    }



    QString str=QString("年龄=%1,性别=%2,姓名=%3")
                      .arg(value)
                      .arg(tperson ? tperson->property("sex").toString() : "未知")
                      .arg(tperson ? tperson->property("name").toString() : "未知");

    ui->plainTextEdit->appendPlainText(str);
}

void Widget::do_spinChanged(int arg1)
{
   QSpinBox *spinBox =  qobject_cast<QSpinBox*>(sender());

   //方法二
   // if (spinBox == ui->spinBoy) {
   //     boy->SetAge(arg1);
   // } else if (spinBox == ui->spinGirl) {
   //     girl->SetAge(arg1);
   // } else {
   //     qWarning() << "Unexpected spinBox sender.";
   // }



   //简单的，注意是spinBox！
   if(spinBox->property("isBoy").toBool()){
       boy->SetAge(arg1);
   }else{
       girl->SetAge(arg1);
   }

}


void Widget::on_btnBoyInc_clicked()
{
    boy->IncAge();

}


void Widget::on_btnGirlInc_clicked()
{
    girl->IncAge();
}


void Widget::on_btnClear_clicked()
{
    ui->plainTextEdit->clear();

}


void Widget::on_btnClassInfo_clicked()
{

    const QMetaObject *meta = boy->metaObject();
    ui->plainTextEdit->appendPlainText(
        QString("类名称：%1\n").arg(meta->className()));

    ui->plainTextEdit->appendPlainText("属性:");
    for(int i = meta->propertyOffset();i<meta->propertyCount();i++){
        const char * propName = meta->property(i).name();
        QString propValue =boy->property(propName).toString();
        ui->plainTextEdit->appendPlainText(
            QString("属性名称=%1,属性值=%2")
                .arg(propName)
                .arg(propValue));
    }

    ui->plainTextEdit->appendPlainText("\n类信息(classInfo):");
    for(int i = meta->classInfoOffset();i<meta->classInfoCount();i++){
        QMetaClassInfo classInfo = meta->classInfo(i);
        ui->plainTextEdit->appendPlainText(
            QString("Name=%1,Value=%2")
                .arg(classInfo.name())
                .arg(classInfo.value())
            );
    }


}

