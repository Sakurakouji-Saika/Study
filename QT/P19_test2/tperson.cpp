#include "tperson.h"

TPerson::TPerson(QString name,QObject *parent)
    : QObject{parent},m_name{name}
{
    setObjectName(name);
}


TPerson::~TPerson()
{
    qDebug("TPerson消失");
}

int TPerson::getAge()
{
    return m_age;
}

void TPerson::SetAge(int AgeValue)
{
    if(AgeValue!=m_age){
        m_age=AgeValue;
        emit ageChanged(m_age);
        //emit 发送更改年龄的信号
    }
}

void TPerson::IncAge()
{
    ++m_age;
    emit ageChanged(m_age);
    //处理TPerson 按钮的增加一岁功能
}
