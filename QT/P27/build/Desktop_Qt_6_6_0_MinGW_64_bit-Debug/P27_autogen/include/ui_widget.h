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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_number;
    QLabel *label_2;
    QLineEdit *lineEdit_UnitPrice;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_TotalPrice;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnDebug;
    QPushButton *btnTotalPrice;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_DEC;
    QPushButton *btnDEC;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_BIN;
    QPushButton *btnBIN;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEdit_HEX;
    QPushButton *btnHEX;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(307, 334);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit_number = new QLineEdit(groupBox);
        lineEdit_number->setObjectName("lineEdit_number");

        horizontalLayout->addWidget(lineEdit_number);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        lineEdit_UnitPrice = new QLineEdit(groupBox);
        lineEdit_UnitPrice->setObjectName("lineEdit_UnitPrice");

        horizontalLayout->addWidget(lineEdit_UnitPrice);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        lineEdit_TotalPrice = new QLineEdit(groupBox);
        lineEdit_TotalPrice->setObjectName("lineEdit_TotalPrice");

        horizontalLayout_2->addWidget(lineEdit_TotalPrice);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        btnDebug = new QPushButton(groupBox);
        btnDebug->setObjectName("btnDebug");

        horizontalLayout_3->addWidget(btnDebug);

        btnTotalPrice = new QPushButton(groupBox);
        btnTotalPrice->setObjectName("btnTotalPrice");

        horizontalLayout_3->addWidget(btnTotalPrice);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        lineEdit_DEC = new QLineEdit(groupBox_2);
        lineEdit_DEC->setObjectName("lineEdit_DEC");

        horizontalLayout_4->addWidget(lineEdit_DEC);


        horizontalLayout_7->addLayout(horizontalLayout_4);

        btnDEC = new QPushButton(groupBox_2);
        btnDEC->setObjectName("btnDEC");

        horizontalLayout_7->addWidget(btnDEC);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);

        lineEdit_BIN = new QLineEdit(groupBox_2);
        lineEdit_BIN->setObjectName("lineEdit_BIN");

        horizontalLayout_5->addWidget(lineEdit_BIN);


        horizontalLayout_8->addLayout(horizontalLayout_5);

        btnBIN = new QPushButton(groupBox_2);
        btnBIN->setObjectName("btnBIN");

        horizontalLayout_8->addWidget(btnBIN);


        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");

        horizontalLayout_6->addWidget(label_6);

        lineEdit_HEX = new QLineEdit(groupBox_2);
        lineEdit_HEX->setObjectName("lineEdit_HEX");

        horizontalLayout_6->addWidget(lineEdit_HEX);


        horizontalLayout_9->addLayout(horizontalLayout_6);

        btnHEX = new QPushButton(groupBox_2);
        btnHEX->setObjectName("btnHEX");

        horizontalLayout_9->addWidget(btnHEX);


        verticalLayout_3->addLayout(horizontalLayout_9);


        verticalLayout->addWidget(groupBox_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\346\225\260\345\200\274\347\232\204\350\276\223\345\205\245\345\222\214\350\276\223\345\207\272", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\225\260\351\207\217\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\345\215\225\344\273\267\357\274\232", nullptr));
        lineEdit_UnitPrice->setText(QString());
        label_3->setText(QCoreApplication::translate("Widget", "\346\200\273\344\273\267\357\274\232", nullptr));
        lineEdit_TotalPrice->setText(QString());
        btnDebug->setText(QCoreApplication::translate("Widget", "qDebug\357\274\210\357\274\211\346\265\213\350\257\225", nullptr));
        btnTotalPrice->setText(QCoreApplication::translate("Widget", "\350\256\241\347\256\227\346\200\273\344\273\267", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\350\277\233\345\210\266\350\275\254\346\215\242", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\345\215\201\350\277\233\345\210\266\357\274\232", nullptr));
        btnDEC->setText(QCoreApplication::translate("Widget", "DEC-->\345\205\266\344\273\226\350\277\233\345\210\266", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "\344\272\214\350\277\233\345\210\266\357\274\232", nullptr));
        btnBIN->setText(QCoreApplication::translate("Widget", "BIN-->\345\205\266\344\273\226\350\277\233\345\210\266", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "\345\215\201\345\205\255\350\277\233\345\210\266", nullptr));
        btnHEX->setText(QCoreApplication::translate("Widget", "HEX-->\345\205\266\344\273\226\350\277\233\345\210\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
