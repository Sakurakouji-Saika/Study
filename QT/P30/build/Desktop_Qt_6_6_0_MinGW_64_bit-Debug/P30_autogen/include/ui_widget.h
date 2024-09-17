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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QDial *dial;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSlider *horizontalSlider;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QScrollBar *horizontalScrollBar;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QProgressBar *progressBar;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBox_Visible;
    QCheckBox *checkBox_Inverted;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButton_Percent;
    QRadioButton *radioButton_Value;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(360, 402);
        verticalLayout_2 = new QVBoxLayout(Widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        dial = new QDial(groupBox);
        dial->setObjectName("dial");

        verticalLayout->addWidget(dial);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        horizontalSlider = new QSlider(groupBox);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setMaximum(100);
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        horizontalScrollBar = new QScrollBar(groupBox);
        horizontalScrollBar->setObjectName("horizontalScrollBar");
        horizontalScrollBar->setMaximum(100);
        horizontalScrollBar->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout->addWidget(horizontalScrollBar);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 7);

        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        progressBar = new QProgressBar(groupBox_2);
        progressBar->setObjectName("progressBar");
        progressBar->setValue(24);

        verticalLayout_3->addWidget(progressBar);

        frame = new QFrame(groupBox_2);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        checkBox_Visible = new QCheckBox(frame);
        checkBox_Visible->setObjectName("checkBox_Visible");
        checkBox_Visible->setChecked(true);
        checkBox_Visible->setAutoExclusive(false);

        horizontalLayout_3->addWidget(checkBox_Visible);

        checkBox_Inverted = new QCheckBox(frame);
        checkBox_Inverted->setObjectName("checkBox_Inverted");
        checkBox_Inverted->setChecked(false);
        checkBox_Inverted->setAutoExclusive(false);

        horizontalLayout_3->addWidget(checkBox_Inverted);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        radioButton_Percent = new QRadioButton(frame);
        radioButton_Percent->setObjectName("radioButton_Percent");

        horizontalLayout_4->addWidget(radioButton_Percent);

        radioButton_Value = new QRadioButton(frame);
        radioButton_Value->setObjectName("radioButton_Value");

        horizontalLayout_4->addWidget(radioButton_Value);


        verticalLayout_4->addLayout(horizontalLayout_4);


        verticalLayout_3->addWidget(frame);


        verticalLayout_2->addWidget(groupBox_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\346\273\221\345\212\250\350\276\223\345\205\245", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\273\221\345\212\250\346\235\241", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\345\215\267\346\273\232\346\235\241", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\350\277\233\345\272\246\346\235\241 | ProgressBar\346\230\276\347\244\272\345\222\214\350\256\276\347\275\256", nullptr));
        checkBox_Visible->setText(QCoreApplication::translate("Widget", "textVisible", nullptr));
        checkBox_Inverted->setText(QCoreApplication::translate("Widget", "InvertedAppearance", nullptr));
        radioButton_Percent->setText(QCoreApplication::translate("Widget", "\346\230\276\347\244\272\346\240\274\345\274\217--\347\231\276\345\210\206\346\257\224", nullptr));
        radioButton_Value->setText(QCoreApplication::translate("Widget", "\346\230\276\347\244\272\346\240\274\345\274\217--\345\275\223\345\211\215\346\240\274\345\274\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
