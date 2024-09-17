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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QFrame *frame;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *btnFrontBack;
    QPushButton *btnFirstLast;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btnLeftRight;
    QPushButton *btnSection;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *btnIsNullIsEmpty;
    QPushButton *btnSizeLength;
    QVBoxLayout *verticalLayout_4;
    QPushButton *btnSize;
    QPushButton *btnFill;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QPushButton *btnTrimmed;
    QPushButton *btnRemove;
    QVBoxLayout *verticalLayout_6;
    QPushButton *btnInsert;
    QPushButton *btnReplace;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_11;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QComboBox *comboBoxStr1;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QComboBox *comboBoxStr2;
    QLabel *label_3;
    QSpinBox *spinBox;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_9;
    QPushButton *btnClear;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(703, 397);
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setObjectName("horizontalLayout");
        splitter = new QSplitter(Widget);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Orientation::Horizontal);
        frame = new QFrame(splitter);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Plain);
        frame->setLineWidth(1);
        verticalLayout_7 = new QVBoxLayout(frame);
        verticalLayout_7->setObjectName("verticalLayout_7");
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName("groupBox");
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        btnFrontBack = new QPushButton(groupBox);
        btnFrontBack->setObjectName("btnFrontBack");

        verticalLayout->addWidget(btnFrontBack);

        btnFirstLast = new QPushButton(groupBox);
        btnFirstLast->setObjectName("btnFirstLast");

        verticalLayout->addWidget(btnFirstLast);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        btnLeftRight = new QPushButton(groupBox);
        btnLeftRight->setObjectName("btnLeftRight");

        verticalLayout_2->addWidget(btnLeftRight);

        btnSection = new QPushButton(groupBox);
        btnSection->setObjectName("btnSection");

        verticalLayout_2->addWidget(btnSection);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_7->addWidget(groupBox);

        groupBox_2 = new QGroupBox(frame);
        groupBox_2->setObjectName("groupBox_2");
        horizontalLayout_3 = new QHBoxLayout(groupBox_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        btnIsNullIsEmpty = new QPushButton(groupBox_2);
        btnIsNullIsEmpty->setObjectName("btnIsNullIsEmpty");

        verticalLayout_3->addWidget(btnIsNullIsEmpty);

        btnSizeLength = new QPushButton(groupBox_2);
        btnSizeLength->setObjectName("btnSizeLength");

        verticalLayout_3->addWidget(btnSizeLength);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        btnSize = new QPushButton(groupBox_2);
        btnSize->setObjectName("btnSize");

        verticalLayout_4->addWidget(btnSize);

        btnFill = new QPushButton(groupBox_2);
        btnFill->setObjectName("btnFill");

        verticalLayout_4->addWidget(btnFill);


        horizontalLayout_3->addLayout(verticalLayout_4);


        verticalLayout_7->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(frame);
        groupBox_3->setObjectName("groupBox_3");
        horizontalLayout_4 = new QHBoxLayout(groupBox_3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        btnTrimmed = new QPushButton(groupBox_3);
        btnTrimmed->setObjectName("btnTrimmed");

        verticalLayout_5->addWidget(btnTrimmed);

        btnRemove = new QPushButton(groupBox_3);
        btnRemove->setObjectName("btnRemove");

        verticalLayout_5->addWidget(btnRemove);


        horizontalLayout_4->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        btnInsert = new QPushButton(groupBox_3);
        btnInsert->setObjectName("btnInsert");

        verticalLayout_6->addWidget(btnInsert);

        btnReplace = new QPushButton(groupBox_3);
        btnReplace->setObjectName("btnReplace");

        verticalLayout_6->addWidget(btnReplace);


        horizontalLayout_4->addLayout(verticalLayout_6);


        verticalLayout_7->addWidget(groupBox_3);

        splitter->addWidget(frame);
        frame_2 = new QFrame(splitter);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Plain);
        frame_2->setLineWidth(1);
        horizontalLayout_8 = new QHBoxLayout(frame_2);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName("verticalLayout_11");
        groupBox_4 = new QGroupBox(frame_2);
        groupBox_4->setObjectName("groupBox_4");
        verticalLayout_8 = new QVBoxLayout(groupBox_4);
        verticalLayout_8->setObjectName("verticalLayout_8");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label = new QLabel(groupBox_4);
        label->setObjectName("label");
        label->setMinimumSize(QSize(0, 0));

        horizontalLayout_6->addWidget(label);

        comboBoxStr1 = new QComboBox(groupBox_4);
        comboBoxStr1->addItem(QString());
        comboBoxStr1->addItem(QString());
        comboBoxStr1->addItem(QString());
        comboBoxStr1->addItem(QString());
        comboBoxStr1->setObjectName("comboBoxStr1");
        comboBoxStr1->setMinimumSize(QSize(0, 0));
        comboBoxStr1->setLayoutDirection(Qt::LayoutDirection::LeftToRight);

        horizontalLayout_6->addWidget(comboBoxStr1);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 4);

        verticalLayout_8->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName("label_2");

        horizontalLayout_5->addWidget(label_2);

        comboBoxStr2 = new QComboBox(groupBox_4);
        comboBoxStr2->addItem(QString());
        comboBoxStr2->addItem(QString());
        comboBoxStr2->setObjectName("comboBoxStr2");
        comboBoxStr2->setMinimumSize(QSize(100, 0));

        horizontalLayout_5->addWidget(comboBoxStr2);

        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName("label_3");

        horizontalLayout_5->addWidget(label_3);

        spinBox = new QSpinBox(groupBox_4);
        spinBox->setObjectName("spinBox");

        horizontalLayout_5->addWidget(spinBox);


        verticalLayout_8->addLayout(horizontalLayout_5);


        verticalLayout_11->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(frame_2);
        groupBox_5->setObjectName("groupBox_5");
        horizontalLayout_7 = new QHBoxLayout(groupBox_5);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        btnClear = new QPushButton(groupBox_5);
        btnClear->setObjectName("btnClear");

        verticalLayout_9->addWidget(btnClear);

        plainTextEdit = new QPlainTextEdit(groupBox_5);
        plainTextEdit->setObjectName("plainTextEdit");

        verticalLayout_9->addWidget(plainTextEdit);


        horizontalLayout_7->addLayout(verticalLayout_9);


        verticalLayout_11->addWidget(groupBox_5);


        horizontalLayout_8->addLayout(verticalLayout_11);

        splitter->addWidget(frame_2);

        horizontalLayout->addWidget(splitter);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "QString\347\211\271\346\200\247Demo", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\345\255\227\347\254\246\344\270\262\346\210\252\345\217\226", nullptr));
        btnFrontBack->setText(QCoreApplication::translate("Widget", "front / back", nullptr));
        btnFirstLast->setText(QCoreApplication::translate("Widget", "first / last", nullptr));
        btnLeftRight->setText(QCoreApplication::translate("Widget", "left / right", nullptr));
        btnSection->setText(QCoreApplication::translate("Widget", "section *", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\345\255\230\345\202\250\347\233\270\345\205\263", nullptr));
        btnIsNullIsEmpty->setText(QCoreApplication::translate("Widget", "isNull / isEmpty", nullptr));
        btnSizeLength->setText(QCoreApplication::translate("Widget", "size / length", nullptr));
        btnSize->setText(QCoreApplication::translate("Widget", "resize", nullptr));
        btnFill->setText(QCoreApplication::translate("Widget", "fill", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Widget", "\350\275\254\346\215\242\344\270\216\344\277\256\346\224\271", nullptr));
        btnTrimmed->setText(QCoreApplication::translate("Widget", "trimmed / simplified", nullptr));
        btnRemove->setText(QCoreApplication::translate("Widget", "remove", nullptr));
        btnInsert->setText(QCoreApplication::translate("Widget", "insert", nullptr));
        btnReplace->setText(QCoreApplication::translate("Widget", "replace", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Widget", "\350\276\223\345\205\245", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\345\255\227\347\254\246\344\270\2621\357\274\232", nullptr));
        comboBoxStr1->setItemText(0, QCoreApplication::translate("Widget", "D:\\Users\\Moe\\AppData\\Local", nullptr));
        comboBoxStr1->setItemText(1, QCoreApplication::translate("Widget", "G:\\Qt6Book\\QtSamples", nullptr));
        comboBoxStr1->setItemText(2, QCoreApplication::translate("Widget", "D:\\Users\\Moe\\AppData\\Local\\Programs\\ApiPost7\\ffmpeg.dll", nullptr));
        comboBoxStr1->setItemText(3, QCoreApplication::translate("Widget", "Replaced str1.first(N+1) with str1.left(N+1) to get the first part of the string", nullptr));

        label_2->setText(QCoreApplication::translate("Widget", "\345\255\227\347\254\246\344\270\2622\357\274\232", nullptr));
        comboBoxStr2->setItemText(0, QCoreApplication::translate("Widget", "\\", nullptr));
        comboBoxStr2->setItemText(1, QCoreApplication::translate("Widget", "Qt", nullptr));

        label_3->setText(QCoreApplication::translate("Widget", "\345\217\202\346\225\260\357\274\232", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("Widget", "\347\273\223\346\236\234\346\230\276\347\244\272", nullptr));
        btnClear->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\346\226\207\346\234\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
