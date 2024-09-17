#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnClear_clicked()
{
    ui->plainTextEdit->clear();
}


void MainWindow::on_btnGetChars_clicked()
{
    QString str = ui->editStr->text();
    //获取字符串
    if(str.isEmpty()){
        //判断是否为空
        return;
    }

    for(qint16 i=0;i<str.size();i++){
        QChar ch = str.at(i);
        char16_t uniCode = ch.unicode();

        QString chStr(ch);
        QString info = chStr+QString::asprintf("\t,Unicode编码=0x%x",uniCode);
        ui->plainTextEdit->appendPlainText(info);
    }
}


void MainWindow::on_btnCharJudge_clicked()
{
    QString str = ui->editChar->text();
    if(str.isEmpty()){
        //判断是否为空
        return;
    }

    QChar ch = str[0];
    char16_t uniCode = ch.unicode();
    QString info = str[0]+QString::asprintf("\t,Unicode编码=0x%x",uniCode);
    ui->plainTextEdit->appendPlainText(info);

    ui->chkDigit->setChecked(ch.isDigit());  //是否位数字
    ui->chkLetter->setChecked(ch.isLetter());//判断字母
    ui->chkLetterOrNumer->setChecked(ch.isLetterOrNumber());//判断字母与数字
    ui->chkUpper->setChecked(ch.isUpper());//判断是否为大写
    ui->chkLower->setChecked(ch.isLower());//判断是否为小写
    ui->chkMark->setChecked(ch.isMark());//判断是否为符号
    ui->chkSpace->setChecked(ch.isSpace());//判断是否空额
    ui->chkSymbol->setChecked(ch.isSymbol());//判断是否为符号
    ui->chkPunct->setChecked(ch.isPunct());//是否为标点符号

}


void MainWindow::on_btnConvLatin1_clicked()
{
    QString str = "Dimple";
    ui->plainTextEdit->appendPlainText(str);
    QChar chp = QChar('p');

    str[0]=chp;
    ui->plainTextEdit->appendPlainText("\n"+str);
}


void MainWindow::on_btnConvUTF16_clicked()
{
    QString str = "Hello,北极";
    ui->plainTextEdit->appendPlainText(str);

    QString qd="青岛";
    str[6]=qd.at(0);
    str[7]=qd.at(1);

    // str[6]=QChar(0x9752);
    // str[7]=QChar(0x9752);
    ui->plainTextEdit->appendPlainText("\n"+str);
}


void MainWindow::on_btnCompare_clicked()
{
    QString HuStr = "河to湖";
    QChar He = QChar::fromUcs2(HuStr[0].unicode());
    QChar Hu= QChar(HuStr[3].unicode());
    QString str ="他们来自河南或者河北";
    ui->plainTextEdit->appendPlainText(str);
    for(int i =0;i<str.size();i++){
        if(str.at(i)==He){
            str[i]=Hu;
        }
    }
    ui->plainTextEdit->appendPlainText("\n"+str);
}

