/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *result;
    QPushButton *delBtn;
    QPushButton *reversBtn;
    QPushButton *procentBtn;
    QPushButton *divisBtn;
    QPushButton *btn7;
    QPushButton *btn8;
    QPushButton *btn9;
    QPushButton *multBtn;
    QPushButton *btn4;
    QPushButton *btn5;
    QPushButton *btn6;
    QPushButton *minusBtn;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *plusBtn;
    QPushButton *btn0;
    QPushButton *commaBtn;
    QPushButton *equalsBtn;
    QComboBox *comboBox;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(290, 435);
        MainWindow->setMinimumSize(QSize(290, 420));
        MainWindow->setStyleSheet(QString::fromUtf8("border-radius: 7px; \n"
"background-color: rgb(76, 76, 76);\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        result = new QLabel(centralwidget);
        result->setObjectName("result");
        result->setMinimumSize(QSize(267, 61));
        result->setMaximumSize(QSize(200000, 80));
        QFont font;
        font.setPointSize(28);
        result->setFont(font);
        result->setStyleSheet(QString::fromUtf8("background-color: rgb(76, 76, 76);\n"
"color: rgb(255, 255, 255)"));

        gridLayout->addWidget(result, 1, 0, 1, 4);

        delBtn = new QPushButton(centralwidget);
        delBtn->setObjectName("delBtn");
        delBtn->setMinimumSize(QSize(70, 60));
        delBtn->setMaximumSize(QSize(16777215, 16777215));
        delBtn->setFont(font);
        delBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(224, 224, 224);\n"
"color: rgb(0, 0, 0);\n"
"margin: 3px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:  rgb(118, 118, 118);\n"
"}"));

        gridLayout->addWidget(delBtn, 2, 0, 1, 1);

        reversBtn = new QPushButton(centralwidget);
        reversBtn->setObjectName("reversBtn");
        reversBtn->setMinimumSize(QSize(70, 60));
        reversBtn->setFont(font);
        reversBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(224, 224, 224);\n"
"color: rgb(0, 0, 0);\n"
"margin: 3px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:  rgb(118, 118, 118);\n"
"}"));

        gridLayout->addWidget(reversBtn, 2, 1, 1, 1);

        procentBtn = new QPushButton(centralwidget);
        procentBtn->setObjectName("procentBtn");
        procentBtn->setMinimumSize(QSize(70, 60));
        procentBtn->setFont(font);
        procentBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(224, 224, 224);\n"
"color: rgb(0, 0, 0);\n"
"margin: 3px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:  rgb(118, 118, 118);\n"
"}"));

        gridLayout->addWidget(procentBtn, 2, 2, 1, 1);

        divisBtn = new QPushButton(centralwidget);
        divisBtn->setObjectName("divisBtn");
        divisBtn->setMinimumSize(QSize(70, 60));
        divisBtn->setFont(font);
        divisBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(246, 147, 51);\n"
"color: rgb(255, 255, 255);\n"
"margin: 3px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:  rgb(118, 118, 118);\n"
"}"));

        gridLayout->addWidget(divisBtn, 2, 3, 1, 1);

        btn7 = new QPushButton(centralwidget);
        btn7->setObjectName("btn7");
        btn7->setMinimumSize(QSize(70, 60));
        btn7->setFont(font);
        btn7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(224, 224, 224);\n"
"color: rgb(0, 0, 0);\n"
"margin: 3px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:  rgb(118, 118, 118);\n"
"}"));

        gridLayout->addWidget(btn7, 3, 0, 1, 1);

        btn8 = new QPushButton(centralwidget);
        btn8->setObjectName("btn8");
        btn8->setMinimumSize(QSize(70, 60));
        btn8->setFont(font);
        btn8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(224, 224, 224);\n"
"color: rgb(0, 0, 0);\n"
"margin: 3px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:  rgb(118, 118, 118);\n"
"}"));

        gridLayout->addWidget(btn8, 3, 1, 1, 1);

        btn9 = new QPushButton(centralwidget);
        btn9->setObjectName("btn9");
        btn9->setMinimumSize(QSize(70, 60));
        btn9->setFont(font);
        btn9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(224, 224, 224);\n"
"color: rgb(0, 0, 0);\n"
"margin: 3px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:  rgb(118, 118, 118);\n"
"}"));

        gridLayout->addWidget(btn9, 3, 2, 1, 1);

        multBtn = new QPushButton(centralwidget);
        multBtn->setObjectName("multBtn");
        multBtn->setMinimumSize(QSize(70, 60));
        multBtn->setFont(font);
        multBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(246, 147, 51);\n"
"color: rgb(255, 255, 255);\n"
"margin: 3px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:  rgb(118, 118, 118);\n"
"}"));

        gridLayout->addWidget(multBtn, 3, 3, 1, 1);

        btn4 = new QPushButton(centralwidget);
        btn4->setObjectName("btn4");
        btn4->setMinimumSize(QSize(70, 60));
        btn4->setFont(font);
        btn4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(224, 224, 224);\n"
"color: rgb(0, 0, 0);\n"
"margin: 3px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:  rgb(118, 118, 118);\n"
"}"));

        gridLayout->addWidget(btn4, 4, 0, 1, 1);

        btn5 = new QPushButton(centralwidget);
        btn5->setObjectName("btn5");
        btn5->setMinimumSize(QSize(70, 60));
        btn5->setFont(font);
        btn5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(224, 224, 224);\n"
"color: rgb(0, 0, 0);\n"
"margin: 3px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:  rgb(118, 118, 118);\n"
"}"));

        gridLayout->addWidget(btn5, 4, 1, 1, 1);

        btn6 = new QPushButton(centralwidget);
        btn6->setObjectName("btn6");
        btn6->setMinimumSize(QSize(70, 60));
        btn6->setFont(font);
        btn6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(224, 224, 224);\n"
"color: rgb(0, 0, 0);\n"
"margin: 3px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:  rgb(118, 118, 118);\n"
"}"));

        gridLayout->addWidget(btn6, 4, 2, 1, 1);

        minusBtn = new QPushButton(centralwidget);
        minusBtn->setObjectName("minusBtn");
        minusBtn->setMinimumSize(QSize(70, 60));
        minusBtn->setFont(font);
        minusBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(246, 147, 51);\n"
"color: rgb(255, 255, 255);\n"
"margin: 3px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:  rgb(118, 118, 118);\n"
"}"));

        gridLayout->addWidget(minusBtn, 4, 3, 1, 1);

        btn1 = new QPushButton(centralwidget);
        btn1->setObjectName("btn1");
        btn1->setMinimumSize(QSize(70, 60));
        btn1->setFont(font);
        btn1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(224, 224, 224);\n"
"color: rgb(0, 0, 0);\n"
"margin: 3px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:  rgb(118, 118, 118);\n"
"}"));

        gridLayout->addWidget(btn1, 5, 0, 1, 1);

        btn2 = new QPushButton(centralwidget);
        btn2->setObjectName("btn2");
        btn2->setMinimumSize(QSize(70, 60));
        btn2->setFont(font);
        btn2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(224, 224, 224);\n"
"color: rgb(0, 0, 0);\n"
"margin: 3px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:  rgb(118, 118, 118);\n"
"}"));

        gridLayout->addWidget(btn2, 5, 1, 1, 1);

        btn3 = new QPushButton(centralwidget);
        btn3->setObjectName("btn3");
        btn3->setEnabled(true);
        btn3->setMinimumSize(QSize(70, 60));
        btn3->setFont(font);
        btn3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(224, 224, 224);\n"
"color: rgb(0, 0, 0);\n"
"margin: 3px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:  rgb(118, 118, 118);\n"
"}"));

        gridLayout->addWidget(btn3, 5, 2, 1, 1);

        plusBtn = new QPushButton(centralwidget);
        plusBtn->setObjectName("plusBtn");
        plusBtn->setMinimumSize(QSize(70, 60));
        plusBtn->setFont(font);
        plusBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(246, 147, 51);\n"
"color: rgb(255, 255, 255);\n"
"margin: 3px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:  rgb(118, 118, 118);\n"
"}"));

        gridLayout->addWidget(plusBtn, 5, 3, 1, 1);

        btn0 = new QPushButton(centralwidget);
        btn0->setObjectName("btn0");
        btn0->setMinimumSize(QSize(135, 60));
        btn0->setFont(font);
        btn0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(224, 224, 224);\n"
"color: rgb(0, 0, 0);\n"
"margin: 3px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:  rgb(118, 118, 118);\n"
"}\n"
""));

        gridLayout->addWidget(btn0, 6, 0, 1, 2);

        commaBtn = new QPushButton(centralwidget);
        commaBtn->setObjectName("commaBtn");
        commaBtn->setMinimumSize(QSize(70, 60));
        commaBtn->setFont(font);
        commaBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(224, 224, 224);\n"
"color: rgb(0, 0, 0);\n"
"margin: 3px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:  rgb(118, 118, 118);\n"
"}"));

        gridLayout->addWidget(commaBtn, 6, 2, 1, 1);

        equalsBtn = new QPushButton(centralwidget);
        equalsBtn->setObjectName("equalsBtn");
        equalsBtn->setMinimumSize(QSize(70, 60));
        equalsBtn->setFont(font);
        equalsBtn->setTabletTracking(false);
        equalsBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(246, 147, 51);\n"
"color: rgb(255, 255, 255);\n"
"margin: 3px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:  rgb(118, 118, 118);\n"
"}"));

        gridLayout->addWidget(equalsBtn, 6, 3, 1, 1);

        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setStyleSheet(QString::fromUtf8("/* \320\241\321\202\320\270\320\273\320\270\320\267\320\260\321\206\320\270\321\217 \320\276\321\201\320\275\320\276\320\262\320\275\320\276\320\263\320\276 QComboBox */\n"
"QComboBox {\n"
"\n"
"    border-radius: 7px;     /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"         /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\271 \320\276\321\202\321\201\321\202\321\203\320\277 */\n"
"    background-color: rgb(224, 224, 224); /* \320\241\320\262\320\265\321\202\320\273\320\276-\321\201\320\265\321\200\321\213\320\271 \321\204\320\276\320\275 */\n"
"    color: rgb(0, 0, 0);    /* \320\247\320\265\321\200\320\275\321\213\320\271 \321\206\320\262\320\265\321\202 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"}\n"
"\n"
"/* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\203 \321\203 \320\262\321\213\320\277\320\260\320\264"
                        "\320\260\321\216\321\211\320\265\320\271 \321\207\320\260\321\201\321\202\320\270 */\n"
"QComboBox::drop-down {\n"
"    border: 0px;\n"
"}\n"
"\n"
"/* \320\241\321\202\320\270\320\273\320\270\320\267\320\260\321\206\320\270\321\217 \320\262\321\213\320\277\320\260\320\264\320\260\321\216\321\211\320\265\320\263\320\276 \321\201\320\277\320\270\321\201\320\272\320\260 QComboBox */\n"
"QComboBox QAbstractItemView {\n"
"    border: 1px solid #000; /* \320\247\320\265\321\200\320\275\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    border-radius: 7px;     /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    background-color: rgb(224, 224, 224); /* \320\241\320\262\320\265\321\202\320\273\320\276-\321\201\320\265\321\200\321\213\320\271 \321\204\320\276\320\275 */\n"
"    color: rgb(0, 0, 0);    /* \320\247\320\265\321\200\320\275\321\213\320\271 \321\206\320\262\320\265\321\202 \321\210\321"
                        "\200\320\270\321\204\321\202\320\260 */\n"
"}\n"
"\n"
"/* \320\241\321\202\320\270\320\273\320\270\320\267\320\260\321\206\320\270\321\217 \320\277\320\276\320\273\320\276\321\201\321\213 \320\277\321\200\320\276\320\272\321\200\321\203\321\202\320\272\320\270 \320\262\320\275\321\203\321\202\321\200\320\270 QComboBox */\n"
"QComboBox QAbstractItemView QScrollBar:vertical {\n"
"    border: 0px;           /* \320\221\320\265\320\267 \320\263\321\200\320\260\320\275\320\270\321\206 */\n"
"    background: rgb(240, 240, 240); /* \320\244\320\276\320\275 \320\277\320\276\320\273\320\276\321\201\321\213 \320\277\321\200\320\276\320\272\321\200\321\203\321\202\320\272\320\270 */\n"
"    width: 7px;           /* \320\250\320\270\321\200\320\270\320\275\320\260 \320\277\320\276\320\273\320\276\321\201\321\213 \320\277\321\200\320\276\320\272\321\200\321\203\321\202\320\272\320\270 */\n"
"    margin: 2px 0 2px 0;   /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \321\201\320\262\320\265\321\200\321\205\321\203"
                        " \320\270 \321\201\320\275\320\270\320\267\321\203 */\n"
"    border-radius: 20px;    /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\320\265 \321\203\320\263\320\273\320\276\320\262 \320\277\320\276\320\273\320\276\321\201\321\213 \320\277\321\200\320\276\320\272\321\200\321\203\321\202\320\272\320\270 */\n"
"}\n"
"\n"
"/* \320\241\321\202\320\270\320\273\320\270\320\267\320\260\321\206\320\270\321\217 \321\200\321\203\321\207\320\272\320\270 \320\277\320\276\320\273\320\276\321\201\321\213 \320\277\321\200\320\276\320\272\321\200\321\203\321\202\320\272\320\270 (thumb) */\n"
"QComboBox QAbstractItemView QScrollBar::handle:vertical {\n"
"    background: rgb(180, 180, 180); /* \320\246\320\262\320\265\321\202 \321\200\321\203\321\207\320\272\320\270 */\n"
"    min-height: 20px;               /* \320\234\320\270\320\275\320\270\320\274\320\260\320\273\321\214\320\275\320\260\321\217 \320\262\321\213\321\201\320\276\321\202\320\260 */\n"
"    border-radius: 20px;             /"
                        "* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\320\265 \321\203\320\263\320\273\320\276\320\262 \321\200\321\203\321\207\320\272\320\270 */\n"
"}\n"
"\n"
"/* \320\232\320\275\320\276\320\277\320\272\320\270 \320\262\320\262\320\265\321\200\321\205 \320\270 \320\262\320\275\320\270\320\267 \320\275\320\260 \320\277\320\276\320\273\320\276\321\201\320\265 \320\277\321\200\320\276\320\272\321\200\321\203\321\202\320\272\320\270 */\n"
"QComboBox QAbstractItemView QScrollBar::add-line:vertical,\n"
"QComboBox QAbstractItemView QScrollBar::sub-line:vertical {\n"
"    background: rgb(224, 224, 224); /* \320\244\320\276\320\275 \320\272\320\275\320\276\320\277\320\276\320\272 */\n"
"    border: 0px;                    /* \320\221\320\265\320\267 \320\263\321\200\320\260\320\275\320\270\321\206 */\n"
"    height: 10px;                   /* \320\222\321\213\321\201\320\276\321\202\320\260 \320\272\320\275\320\276\320\277\320\276\320\272 */\n"
"    subcontrol-origin: margin;\n"
"    bor"
                        "der-radius: 7px;             /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\320\265 \321\203\320\263\320\273\320\276\320\262 \320\272\320\275\320\276\320\277\320\276\320\272 */\n"
"}\n"
"\n"
"/* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \321\201\321\202\321\200\320\265\320\273\320\272\320\270 \320\275\320\260 \320\272\320\275\320\276\320\277\320\272\320\260\321\205 \320\277\321\200\320\276\320\272\321\200\321\203\321\202\320\272\320\270 */\n"
"QComboBox QAbstractItemView QScrollBar::up-arrow:vertical,\n"
"QComboBox QAbstractItemView QScrollBar::down-arrow:vertical {\n"
"    border: none;\n"
"}\n"
"\n"
"/* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \320\277\321\200\320\276\321\201\321\202\321\200\320\260\320\275\321\201\321\202\320\262\320\276 (\321\201\320\277\321\215\320\271\321\201\320\265\321\200\321\213) \320\262\320\276\320\272\321\200\321\203\320\263 \320\272\320\275\320\276\320\277\320\276\320\272 \320\277\321\200\320\276\320\272\321\200\321"
                        "\203\321\202\320\272\320\270 */\n"
"QComboBox QAbstractItemView QScrollBar::add-page:vertical,\n"
"QComboBox QAbstractItemView QScrollBar::sub-page:vertical {\n"
"    background: none;\n"
"}\n"
""));

        gridLayout->addWidget(comboBox, 0, 2, 1, 2);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        result->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        delBtn->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        reversBtn->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        procentBtn->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        divisBtn->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        btn7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        btn8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btn9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        multBtn->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        btn4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        btn5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        btn6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        minusBtn->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btn1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btn2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        btn3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        plusBtn->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btn0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        commaBtn->setText(QCoreApplication::translate("MainWindow", ",", nullptr));
        equalsBtn->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "\320\222\320\260\320\273\321\216\321\202\320\260", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "\320\224\320\260\320\275\320\275\321\213\320\265", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "\320\224\320\273\320\270\320\275\320\260", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "\320\230\320\234\320\242", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("MainWindow", "\320\234\320\260\321\201\321\201\320\260", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("MainWindow", "\320\236\320\261\321\212\320\265\320\274", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("MainWindow", "\320\237\320\273\320\276\321\211\320\260\320\264\321\214", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("MainWindow", "\320\241\320\272\320\270\320\264\320\272\320\260", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("MainWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214", nullptr));
        comboBox->setItemText(10, QCoreApplication::translate("MainWindow", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260", nullptr));
        comboBox->setItemText(11, QCoreApplication::translate("MainWindow", "\320\244\320\270\320\275\320\260\320\275\321\201\321\213", nullptr));

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
