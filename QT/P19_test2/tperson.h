#ifndef TPERSON_H
#define TPERSON_H

#include <QObject>

class TPerson : public QObject
{
    //宏定义
    Q_OBJECT
    Q_CLASSINFO("author","作者昵称");
    Q_CLASSINFO("所属","公司/学校/政府");
    Q_CLASSINFO("version","1.0.0");
    Q_PROPERTY(int getAge READ getAge WRITE SetAge NOTIFY ageChanged)
    Q_PROPERTY(QString name MEMBER m_name)
    Q_PROPERTY(int score MEMBER m_score)
    //宏定义

public:
    explicit TPerson(QString name,QObject *parent = nullptr);
    ~TPerson();

private:
    //类有的私有成员变量
    int m_age = 0;
    int m_score = 0;
    QString m_name = "默认昵称";

public:
    //操作函数
    int getAge();
    void SetAge(int AgeValue);
    void IncAge();  //信号

signals:
    void ageChanged(int AgeValue);
    //信号
};

#endif // TPERSON_H
