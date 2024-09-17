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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_left;
    QPushButton *btn_center;
    QPushButton *btn_right;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnFont_Bold;
    QPushButton *btnFont_italic;
    QPushButton *btnFont_UnderLine;
    QFrame *line;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBox_Readonly;
    QCheckBox *checkBox_Enabled;
    QCheckBox *checkBox_ClearButton;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButton_Black;
    QRadioButton *radioButton_Red;
    QRadioButton *radioButton_Blue;
    QLineEdit *lineEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(311, 276);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName("verticalLayout");
        groupBox_4 = new QGroupBox(Widget);
        groupBox_4->setObjectName("groupBox_4");
        horizontalLayout = new QHBoxLayout(groupBox_4);
        horizontalLayout->setObjectName("horizontalLayout");
        btn_left = new QPushButton(groupBox_4);
        btn_left->setObjectName("btn_left");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/C:/Users/Moe/Desktop/sample4_5/images/508.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btn_left->setIcon(icon);
        btn_left->setCheckable(true);
        btn_left->setChecked(true);
        btn_left->setAutoExclusive(true);
        btn_left->setFlat(true);

        horizontalLayout->addWidget(btn_left);

        btn_center = new QPushButton(groupBox_4);
        btn_center->setObjectName("btn_center");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/C:/Users/Moe/Desktop/sample4_5/images/510.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btn_center->setIcon(icon1);
        btn_center->setCheckable(true);
        btn_center->setAutoExclusive(true);
        btn_center->setFlat(true);

        horizontalLayout->addWidget(btn_center);

        btn_right = new QPushButton(groupBox_4);
        btn_right->setObjectName("btn_right");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/C:/Users/Moe/Desktop/sample4_5/images/512.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btn_right->setIcon(icon2);
        btn_right->setCheckable(true);
        btn_right->setAutoExclusive(true);
        btn_right->setFlat(true);

        horizontalLayout->addWidget(btn_right);


        verticalLayout->addWidget(groupBox_4);

        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName("groupBox_3");
        horizontalLayout_2 = new QHBoxLayout(groupBox_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        btnFont_Bold = new QPushButton(groupBox_3);
        btnFont_Bold->setObjectName("btnFont_Bold");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/C:/Users/Moe/Desktop/sample4_5/images/500.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnFont_Bold->setIcon(icon3);
        btnFont_Bold->setCheckable(true);
        btnFont_Bold->setChecked(true);
        btnFont_Bold->setAutoExclusive(true);
        btnFont_Bold->setFlat(false);

        horizontalLayout_2->addWidget(btnFont_Bold);

        btnFont_italic = new QPushButton(groupBox_3);
        btnFont_italic->setObjectName("btnFont_italic");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/C:/Users/Moe/Desktop/sample4_5/images/502.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnFont_italic->setIcon(icon4);
        btnFont_italic->setCheckable(true);
        btnFont_italic->setAutoExclusive(true);
        btnFont_italic->setFlat(false);

        horizontalLayout_2->addWidget(btnFont_italic);

        btnFont_UnderLine = new QPushButton(groupBox_3);
        btnFont_UnderLine->setObjectName("btnFont_UnderLine");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/C:/Users/Moe/Desktop/sample4_5/images/504.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnFont_UnderLine->setIcon(icon5);
        btnFont_UnderLine->setCheckable(true);
        btnFont_UnderLine->setAutoExclusive(true);
        btnFont_UnderLine->setFlat(false);

        horizontalLayout_2->addWidget(btnFont_UnderLine);


        verticalLayout->addWidget(groupBox_3);

        line = new QFrame(Widget);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        checkBox_Readonly = new QCheckBox(groupBox);
        checkBox_Readonly->setObjectName("checkBox_Readonly");
        checkBox_Readonly->setAutoExclusive(false);

        horizontalLayout_3->addWidget(checkBox_Readonly);

        checkBox_Enabled = new QCheckBox(groupBox);
        checkBox_Enabled->setObjectName("checkBox_Enabled");
        checkBox_Enabled->setChecked(true);
        checkBox_Enabled->setAutoExclusive(true);

        horizontalLayout_3->addWidget(checkBox_Enabled);

        checkBox_ClearButton = new QCheckBox(groupBox);
        checkBox_ClearButton->setObjectName("checkBox_ClearButton");
        checkBox_ClearButton->setAutoExclusive(false);

        horizontalLayout_3->addWidget(checkBox_ClearButton);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName("groupBox_2");
        horizontalLayout_4 = new QHBoxLayout(groupBox_2);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        radioButton_Black = new QRadioButton(groupBox_2);
        radioButton_Black->setObjectName("radioButton_Black");
        radioButton_Black->setChecked(true);

        horizontalLayout_4->addWidget(radioButton_Black);

        radioButton_Red = new QRadioButton(groupBox_2);
        radioButton_Red->setObjectName("radioButton_Red");

        horizontalLayout_4->addWidget(radioButton_Red);

        radioButton_Blue = new QRadioButton(groupBox_2);
        radioButton_Blue->setObjectName("radioButton_Blue");

        horizontalLayout_4->addWidget(radioButton_Blue);


        verticalLayout->addWidget(groupBox_2);

        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName("lineEdit");
        QFont font;
        font.setPointSize(10);
        lineEdit->setFont(font);

        verticalLayout->addWidget(lineEdit);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox_4->setTitle(QString());
        btn_left->setText(QCoreApplication::translate("Widget", "\345\261\205\345\267\246", nullptr));
        btn_center->setText(QCoreApplication::translate("Widget", "\345\261\205\344\270\255", nullptr));
        btn_right->setText(QCoreApplication::translate("Widget", "\345\261\205\345\217\263", nullptr));
        groupBox_3->setTitle(QString());
        btnFont_Bold->setText(QCoreApplication::translate("Widget", "\347\262\227\344\275\223", nullptr));
        btnFont_italic->setText(QCoreApplication::translate("Widget", "\346\226\234\344\275\223", nullptr));
        btnFont_UnderLine->setText(QCoreApplication::translate("Widget", "\344\270\213\345\210\222\347\272\277", nullptr));
        groupBox->setTitle(QString());
        checkBox_Readonly->setText(QCoreApplication::translate("Widget", "Readonly", nullptr));
        checkBox_Enabled->setText(QCoreApplication::translate("Widget", "Enabled", nullptr));
        checkBox_ClearButton->setText(QCoreApplication::translate("Widget", "ClearButton", nullptr));
        groupBox_2->setTitle(QString());
        radioButton_Black->setText(QCoreApplication::translate("Widget", "Black", nullptr));
        radioButton_Red->setText(QCoreApplication::translate("Widget", "Red", nullptr));
        radioButton_Blue->setText(QCoreApplication::translate("Widget", "Blue", nullptr));
        lineEdit->setText(QCoreApplication::translate("Widget", "\346\265\213\350\257\225\347\224\250\347\232\204\346\226\207\346\234\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
