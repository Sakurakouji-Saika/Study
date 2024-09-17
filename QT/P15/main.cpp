 #include "mainwindow.h"

#include <QApplication>
#include <QPushButton>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QObject *btn =  new QPushButton;
    //使用 QObject 创建一个 QPushButton 实例：
    qDebug() << btn->metaObject()->className();
    //使用 Qt 的元对象系统打印 btn 的类名：

    //将 btn 安全地转换为 QPushButton 并打印其类名：
    QPushButton *pushbtn = qobject_cast<QPushButton*>(btn);
    qDebug() << pushbtn->metaObject()->className();


    //创建一个 QTimer 对象并检查其继承关系：
    QTimer* timer = new QTimer();
    qDebug() << timer->inherits("QTimer");
    qDebug() << timer->inherits("QObject");
    qDebug() << timer->inherits("QPushButton");

    //打印 btn 的直接父类的类名：
    qDebug() <<btn->metaObject()->superClass()->className();


    QPushButton *button = pushbtn->findChild<QPushButton *>("button1");


}
