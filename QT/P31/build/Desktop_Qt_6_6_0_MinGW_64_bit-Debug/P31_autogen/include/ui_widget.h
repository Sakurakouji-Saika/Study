/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout_9;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_readDT;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QTimeEdit *timeEdit;
    QLineEdit *EditTime;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btn_bug_time;
    QPushButton *btn_setTime;
    QHBoxLayout *horizontalLayout_5;
    QDateEdit *dateEdit;
    QLineEdit *EditDate;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *btn_bug_date;
    QPushButton *btn_setDate;
    QHBoxLayout *horizontalLayout_7;
    QDateTimeEdit *dateTimeEdit;
    QLineEdit *EditDateTime;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *btn_bug_dateTime;
    QPushButton *btn_setDateTime;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_4;
    QCalendarWidget *calendarWidget;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(660, 265);
        horizontalLayout_9 = new QHBoxLayout(Widget);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        btn_readDT = new QPushButton(groupBox);
        btn_readDT->setObjectName("btn_readDT");

        horizontalLayout_2->addWidget(btn_readDT);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        timeEdit = new QTimeEdit(groupBox);
        timeEdit->setObjectName("timeEdit");

        horizontalLayout_3->addWidget(timeEdit);

        EditTime = new QLineEdit(groupBox);
        EditTime->setObjectName("EditTime");

        horizontalLayout_3->addWidget(EditTime);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        btn_bug_time = new QPushButton(groupBox);
        btn_bug_time->setObjectName("btn_bug_time");

        horizontalLayout_4->addWidget(btn_bug_time);

        btn_setTime = new QPushButton(groupBox);
        btn_setTime->setObjectName("btn_setTime");

        horizontalLayout_4->addWidget(btn_setTime);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName("dateEdit");

        horizontalLayout_5->addWidget(dateEdit);

        EditDate = new QLineEdit(groupBox);
        EditDate->setObjectName("EditDate");

        horizontalLayout_5->addWidget(EditDate);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        btn_bug_date = new QPushButton(groupBox);
        btn_bug_date->setObjectName("btn_bug_date");

        horizontalLayout_6->addWidget(btn_bug_date);

        btn_setDate = new QPushButton(groupBox);
        btn_setDate->setObjectName("btn_setDate");

        horizontalLayout_6->addWidget(btn_setDate);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        dateTimeEdit = new QDateTimeEdit(groupBox);
        dateTimeEdit->setObjectName("dateTimeEdit");

        horizontalLayout_7->addWidget(dateTimeEdit);

        EditDateTime = new QLineEdit(groupBox);
        EditDateTime->setObjectName("EditDateTime");

        horizontalLayout_7->addWidget(EditDateTime);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        btn_bug_dateTime = new QPushButton(groupBox);
        btn_bug_dateTime->setObjectName("btn_bug_dateTime");

        horizontalLayout_8->addWidget(btn_bug_dateTime);

        btn_setDateTime = new QPushButton(groupBox);
        btn_setDateTime->setObjectName("btn_setDateTime");

        horizontalLayout_8->addWidget(btn_setDateTime);


        verticalLayout->addLayout(horizontalLayout_8);


        horizontalLayout_9->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(groupBox_2);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit_4 = new QLineEdit(groupBox_2);
        lineEdit_4->setObjectName("lineEdit_4");

        horizontalLayout->addWidget(lineEdit_4);


        verticalLayout_2->addLayout(horizontalLayout);

        calendarWidget = new QCalendarWidget(groupBox_2);
        calendarWidget->setObjectName("calendarWidget");

        verticalLayout_2->addWidget(calendarWidget);


        horizontalLayout_9->addWidget(groupBox_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\346\227\245\346\234\237\346\227\266\351\227\264", nullptr));
        btn_readDT->setText(QCoreApplication::translate("Widget", "\350\257\273\345\217\226\345\275\223\345\211\215\346\227\245\346\234\237\346\227\266\351\227\264", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\345\255\227\347\254\246\344\270\262\346\230\276\347\244\272", nullptr));
        timeEdit->setDisplayFormat(QCoreApplication::translate("Widget", "H:mm:ss", nullptr));
        EditTime->setInputMask(QCoreApplication::translate("Widget", "99:99:99;_", nullptr));
        btn_bug_time->setText(QCoreApplication::translate("Widget", "qDebug--Time", nullptr));
        btn_setTime->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\346\227\266\351\227\264FromString", nullptr));
        EditDate->setInputMask(QCoreApplication::translate("Widget", "9999-99-99;_", nullptr));
        btn_bug_date->setText(QCoreApplication::translate("Widget", "qDebug--Date", nullptr));
        btn_setDate->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\346\227\245\346\234\237FromString", nullptr));
        dateTimeEdit->setDisplayFormat(QCoreApplication::translate("Widget", "yyyy/M/d H:mm:ss", nullptr));
        EditDateTime->setInputMask(QCoreApplication::translate("Widget", "9999-99-99 99:99:99", nullptr));
        btn_bug_dateTime->setText(QCoreApplication::translate("Widget", "qDebug--DateTime", nullptr));
        btn_setDateTime->setText(QCoreApplication::translate("Widget", "\346\227\266\351\227\264\346\227\245\346\234\237FromString", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\346\227\245\345\216\206\351\200\211\346\213\251", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\351\200\211\346\213\251\347\232\204\346\227\245\346\234\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
