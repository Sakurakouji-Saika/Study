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
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QSpinBox *spinBox_number;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox_unit_price;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_total_price;
    QPushButton *btn_totalPrice;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QSpinBox *spinBox_DEC;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QSpinBox *spinBox_BIN;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QSpinBox *spinBox_HEX;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(357, 368);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        horizontalLayout_5->addWidget(label);

        spinBox_number = new QSpinBox(groupBox);
        spinBox_number->setObjectName("spinBox_number");
        spinBox_number->setValue(4);

        horizontalLayout_5->addWidget(spinBox_number);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        horizontalLayout_5->addWidget(label_2);

        doubleSpinBox_unit_price = new QDoubleSpinBox(groupBox);
        doubleSpinBox_unit_price->setObjectName("doubleSpinBox_unit_price");
        doubleSpinBox_unit_price->setValue(12.500000000000000);

        horizontalLayout_5->addWidget(doubleSpinBox_unit_price);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 3);
        horizontalLayout_5->setStretch(2, 1);
        horizontalLayout_5->setStretch(3, 3);

        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        horizontalLayout_4->addWidget(label_3);

        doubleSpinBox_total_price = new QDoubleSpinBox(groupBox);
        doubleSpinBox_total_price->setObjectName("doubleSpinBox_total_price");
        doubleSpinBox_total_price->setValue(0.000000000000000);

        horizontalLayout_4->addWidget(doubleSpinBox_total_price);

        btn_totalPrice = new QPushButton(groupBox);
        btn_totalPrice->setObjectName("btn_totalPrice");

        horizontalLayout_4->addWidget(btn_totalPrice);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 3);
        horizontalLayout_4->setStretch(2, 3);

        verticalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        spinBox_DEC = new QSpinBox(groupBox_2);
        spinBox_DEC->setObjectName("spinBox_DEC");

        horizontalLayout->addWidget(spinBox_DEC);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 5);

        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");

        horizontalLayout_2->addWidget(label_5);

        spinBox_BIN = new QSpinBox(groupBox_2);
        spinBox_BIN->setObjectName("spinBox_BIN");

        horizontalLayout_2->addWidget(spinBox_BIN);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 5);

        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");

        horizontalLayout_3->addWidget(label_6);

        spinBox_HEX = new QSpinBox(groupBox_2);
        spinBox_HEX->setObjectName("spinBox_HEX");

        horizontalLayout_3->addWidget(spinBox_HEX);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 5);

        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout->addWidget(groupBox_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\346\225\260\345\200\274\350\276\223\345\205\245\350\276\223\345\207\272", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\225\260\351\207\217", nullptr));
        spinBox_number->setSuffix(QCoreApplication::translate("Widget", " kg", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\345\215\225\344\273\267", nullptr));
        doubleSpinBox_unit_price->setPrefix(QCoreApplication::translate("Widget", "$ ", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\346\200\273\344\273\267", nullptr));
        doubleSpinBox_total_price->setPrefix(QCoreApplication::translate("Widget", "$ ", nullptr));
        btn_totalPrice->setText(QCoreApplication::translate("Widget", "\350\256\241\347\256\227", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\350\277\233\345\210\266\350\275\254\346\215\242", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\345\215\201\350\277\233\345\210\266", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "\344\272\214\350\277\233\345\210\266", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "\345\215\201\345\205\255\350\277\233\345\210\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
