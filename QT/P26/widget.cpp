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

void Widget::on_btnFrontBack_clicked()
{
    ui->plainTextEdit->appendPlainText(".front() 与 .back()函数测试");
    QString str = ui->comboBoxStr1->currentText();  //当前文本
    ui->plainTextEdit->appendPlainText(str);
    ui->plainTextEdit->appendPlainText("front="+QString(str.front()));
    ui->plainTextEdit->appendPlainText("back="+QString(str.back()));
}


void Widget::on_btnClear_clicked()
{
    ui->plainTextEdit->clear();
}


void Widget::on_btnLeftRight_clicked()
{
    ui->plainTextEdit->appendPlainText(".Left() 与 .Right()函数测试");
    QString str = ui->comboBoxStr1->currentText();  //当前文本
    ui->plainTextEdit->appendPlainText(str);
    ui->plainTextEdit->appendPlainText("left(从左到右9个字符)="+QString(str.left(9)));
    ui->plainTextEdit->appendPlainText("right(从右到左5个字符)="+QString(str.right(5)));
}


void Widget::on_btnFirstLast_clicked()
{
    ui->plainTextEdit->appendPlainText(".first() 与 .last()函数测试");
    QString str1 = ui->comboBoxStr1->currentText();
    QString str2 = ui->comboBoxStr2->currentText();
    ui->plainTextEdit->appendPlainText("str1:"+str1);
    ui->plainTextEdit->appendPlainText("str2:"+str2);
    int N= str1.lastIndexOf(str2);

    QString strFirst= str1.first(N+1);
    QString strLast = str1.last(str1.size()-N-1);
    QString strMid = str1.mid(N+1);
    //.first() 和 .last() ,mid()函数来截取字符串的部分


    ui->plainTextEdit->appendPlainText("路径名称："+strFirst);
    ui->plainTextEdit->appendPlainText("文件名称："+strLast);
    ui->plainTextEdit->appendPlainText("Mid:文件名称："+strMid);
}


void Widget::on_btnSection_clicked()
{
    ui->plainTextEdit->appendPlainText("Section() 函数测试");

    QString str1 = ui->comboBoxStr1->currentText();
    QString str2 = ui->comboBoxStr2->currentText();

    int N=ui->spinBox->value();

    QString strSection = str1.section(str2,N,N);
    //section() 函数根据分隔符 str2，将字符串 str1 分割成多个部分，并返回从第 N 部分到第 N 部分的子字符串。
    ui->plainTextEdit->appendPlainText(strSection);

}


void Widget::on_btnIsNullIsEmpty_clicked()
{
    ui->plainTextEdit->appendPlainText("IsNull和IsEmpty函数测试：");
    QString str1,str2="";
    ui->plainTextEdit->appendPlainText("QString str1,str2="";");
    QString str = "Str1_IsNull()=";
    //isNull检查字符串是否为 null（未被初始化）
    if(str1.isNull()){
        str+="true";
    }else{
        str+="flase";
    }
    ui->plainTextEdit->appendPlainText(str);

    str = "Str2_isEmpty()=";

    //检查字符串是否为空（即长度为 0）。

    str2.isEmpty()?str+="true":str+="flase";
    ui->plainTextEdit->appendPlainText(str);


}


void Widget::on_btnSize_clicked()
{
    ui->plainTextEdit->appendPlainText("resize函数测试：");

    QString str;
    str.resize(5,'0');
    ui->plainTextEdit->appendPlainText("str="+str);

    QString tstr = "你好";
    QChar tc = tstr[0];
    str.resize(10,tc);
     ui->plainTextEdit->appendPlainText("str="+str);

}


void Widget::on_btnSizeLength_clicked()
{
    ui->plainTextEdit->appendPlainText("Size() 与Length()函数测试");
    QString str = ui->comboBoxStr1->currentText();
    ui->plainTextEdit->appendPlainText(QString::asprintf("size:%lld",str.size()));
    ui->plainTextEdit->appendPlainText(QString::asprintf("length:%lld",str.length()));

}


void Widget::on_btnFill_clicked()
{
    ui->plainTextEdit->appendPlainText("fill()函数测试");
    //在 Qt 中，fill() 是 QVector、QByteArray、QString 等容器类的一个方法，用于将容器中的所有元素填充为指定的值。fill() 方法常用于快速初始化或重置容器。

    QString str = "Hello";
    str.fill('X');
    ui->plainTextEdit->appendPlainText(str);
    str.fill('A',2);
    ui->plainTextEdit->appendPlainText(str);
    str.fill(QChar(0x54c8),3);
    ui->plainTextEdit->appendPlainText(str);

}


void Widget::on_btnTrimmed_clicked()
{
    ui->plainTextEdit->appendPlainText("trimmed / simplified 函数测试");
    QString str1 =ui->comboBoxStr1->currentText();

    ui->plainTextEdit->appendPlainText("str1= "+str1);

    QString str2 = str1.trimmed();
    ui->plainTextEdit->appendPlainText("str2_trimmed()= "+str2);

    str2 = str1.simplified();
    ui->plainTextEdit->appendPlainText("str2_simplified()= "+str2);

}


void Widget::on_btnInsert_clicked()
{
     ui->plainTextEdit->appendPlainText("insert 函数测试");
    QString str1 = "It isn't great";
     ui->plainTextEdit->appendPlainText(str1);

    int N= str1.lastIndexOf(" ");
     str1.insert(N,"n't");
    ui->plainTextEdit->appendPlainText(str1);
}


void Widget::on_btnRemove_clicked()
{
    //移除特定的字符
    ui->plainTextEdit->appendPlainText("移除特定的字符");
    ui->plainTextEdit->appendPlainText("目前字符串：你们，他们，我们");
    QString str = "你们，他们，我们";
    QString reStr = "们";
    QChar qct= reStr[0];
    str.remove(qct);
    ui->plainTextEdit->appendPlainText(str);


    ui->plainTextEdit->appendPlainText("------------------------\n");

    //移除右侧N个字符串
    ui->plainTextEdit->appendPlainText("移除右侧N个字符串");
    str = "G:\\Qt6Book\\QtSamples\\qw.cpp";
    ui->plainTextEdit->appendPlainText(str);

    int N = str.lastIndexOf("\\");
    str.remove(N+1,20);
    ui->plainTextEdit->appendPlainText(str);

}


void Widget::on_btnReplace_clicked()
{
    //替换指定的字符
    ui->plainTextEdit->appendPlainText("replace,替换指定的字符");
    QString str = "Gooooogle";

    ui->plainTextEdit->appendPlainText(str);

    str.replace('o','e');
    ui->plainTextEdit->appendPlainText(str);

    //替换字符串
    ui->plainTextEdit->appendPlainText("replace,替换字符");
    str = "It is great";
    int N = str.lastIndexOf(" ");
    ui->plainTextEdit->appendPlainText(str);

    QString subStr = "wonderful";
    str.replace(N+1,subStr.size(),subStr);
    ui->plainTextEdit->appendPlainText(str);

    str.replace(N+1,subStr.size(),"OK!");
    qDebug(str.toLocal8Bit().data());
    ui->plainTextEdit->appendPlainText(str);










}

