/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *editStr;
    QPushButton *btnGetChars;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLineEdit *editChar;
    QPushButton *btnCharJudge;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnConvLatin1;
    QPushButton *btnConvUTF16;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnCompare;
    QPushButton *btnClear;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_6;
    QPlainTextEdit *plainTextEdit;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout;
    QCheckBox *chkDigit;
    QCheckBox *chkLetter;
    QCheckBox *chkLetterOrNumer;
    QCheckBox *chkUpper;
    QCheckBox *chkLower;
    QCheckBox *chkMark;
    QCheckBox *chkSpace;
    QCheckBox *chkSymbol;
    QCheckBox *chkPunct;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(404, 494);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        horizontalLayout_4->addWidget(label);

        editStr = new QLineEdit(groupBox);
        editStr->setObjectName("editStr");

        horizontalLayout_4->addWidget(editStr);

        btnGetChars = new QPushButton(groupBox);
        btnGetChars->setObjectName("btnGetChars");

        horizontalLayout_4->addWidget(btnGetChars);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        horizontalLayout_5->addWidget(label_2);

        editChar = new QLineEdit(groupBox);
        editChar->setObjectName("editChar");

        horizontalLayout_5->addWidget(editChar);

        btnCharJudge = new QPushButton(groupBox);
        btnCharJudge->setObjectName("btnCharJudge");

        horizontalLayout_5->addWidget(btnCharJudge);


        verticalLayout_4->addLayout(horizontalLayout_5);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        btnConvLatin1 = new QPushButton(groupBox_2);
        btnConvLatin1->setObjectName("btnConvLatin1");

        horizontalLayout_2->addWidget(btnConvLatin1);

        btnConvUTF16 = new QPushButton(groupBox_2);
        btnConvUTF16->setObjectName("btnConvUTF16");

        horizontalLayout_2->addWidget(btnConvUTF16);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        btnCompare = new QPushButton(groupBox_2);
        btnCompare->setObjectName("btnCompare");

        horizontalLayout_3->addWidget(btnCompare);

        btnClear = new QPushButton(groupBox_2);
        btnClear->setObjectName("btnClear");

        horizontalLayout_3->addWidget(btnClear);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout_2->addWidget(groupBox_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        horizontalLayout_6 = new QHBoxLayout(groupBox_3);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        plainTextEdit = new QPlainTextEdit(groupBox_3);
        plainTextEdit->setObjectName("plainTextEdit");

        horizontalLayout_6->addWidget(plainTextEdit);


        horizontalLayout->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName("groupBox_4");
        verticalLayout = new QVBoxLayout(groupBox_4);
        verticalLayout->setObjectName("verticalLayout");
        chkDigit = new QCheckBox(groupBox_4);
        chkDigit->setObjectName("chkDigit");

        verticalLayout->addWidget(chkDigit);

        chkLetter = new QCheckBox(groupBox_4);
        chkLetter->setObjectName("chkLetter");

        verticalLayout->addWidget(chkLetter);

        chkLetterOrNumer = new QCheckBox(groupBox_4);
        chkLetterOrNumer->setObjectName("chkLetterOrNumer");

        verticalLayout->addWidget(chkLetterOrNumer);

        chkUpper = new QCheckBox(groupBox_4);
        chkUpper->setObjectName("chkUpper");

        verticalLayout->addWidget(chkUpper);

        chkLower = new QCheckBox(groupBox_4);
        chkLower->setObjectName("chkLower");

        verticalLayout->addWidget(chkLower);

        chkMark = new QCheckBox(groupBox_4);
        chkMark->setObjectName("chkMark");

        verticalLayout->addWidget(chkMark);

        chkSpace = new QCheckBox(groupBox_4);
        chkSpace->setObjectName("chkSpace");

        verticalLayout->addWidget(chkSpace);

        chkSymbol = new QCheckBox(groupBox_4);
        chkSymbol->setObjectName("chkSymbol");

        verticalLayout->addWidget(chkSymbol);

        chkPunct = new QCheckBox(groupBox_4);
        chkPunct->setObjectName("chkPunct");

        verticalLayout->addWidget(chkPunct);


        horizontalLayout->addWidget(groupBox_4);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 404, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWindow", "      \350\276\223\345\205\245\345\255\227\347\254\246\344\270\262", nullptr));
        btnGetChars->setText(QCoreApplication::translate("MainWindow", "\346\257\217\344\270\252\345\255\227\347\254\246\347\232\204Unicode", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\345\215\225\344\270\252\345\255\227\347\254\246\344\270\262", nullptr));
        btnCharJudge->setText(QCoreApplication::translate("MainWindow", "\345\215\225\344\270\252\345\255\227\347\254\246\347\211\271\346\200\247\345\210\244\346\226\255   ", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\345\205\266\344\273\226\346\265\213\350\257\225\345\222\214\345\212\237\350\203\275", nullptr));
        btnConvLatin1->setText(QCoreApplication::translate("MainWindow", "\344\270\216Latin1\347\232\204\350\275\254\346\215\242", nullptr));
        btnConvUTF16->setText(QCoreApplication::translate("MainWindow", "\344\270\216UTF-16\347\232\204\350\275\254\346\215\242", nullptr));
        btnCompare->setText(QCoreApplication::translate("MainWindow", "QChar\346\257\224\350\276\203\345\222\214\346\233\277\346\215\242", nullptr));
        btnClear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\347\273\223\346\236\234", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "QChar\347\211\271\346\225\210\345\210\244\346\226\255", nullptr));
        chkDigit->setText(QCoreApplication::translate("MainWindow", "isDigit", nullptr));
        chkLetter->setText(QCoreApplication::translate("MainWindow", "isLetter", nullptr));
        chkLetterOrNumer->setText(QCoreApplication::translate("MainWindow", "isLetterOrNumer", nullptr));
        chkUpper->setText(QCoreApplication::translate("MainWindow", "isUpper", nullptr));
        chkLower->setText(QCoreApplication::translate("MainWindow", "isLower", nullptr));
        chkMark->setText(QCoreApplication::translate("MainWindow", "isMark", nullptr));
        chkSpace->setText(QCoreApplication::translate("MainWindow", "isSpace", nullptr));
        chkSymbol->setText(QCoreApplication::translate("MainWindow", "isSymbol", nullptr));
        chkPunct->setText(QCoreApplication::translate("MainWindow", "isPunct", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
