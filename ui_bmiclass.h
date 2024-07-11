/********************************************************************************
** Form generated from reading UI file 'bmiclass.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BMICLASS_H
#define UI_BMICLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_BmiClass
{
public:
    QLabel *label_2;
    QLabel *label_1;
    QLineEdit *weight;
    QLineEdit *height;
    QPushButton *equalsBtn;
    QComboBox *comboBox;
    QPushButton *delBtn;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *resBmi;

    void setupUi(QDialog *BmiClass)
    {
        if (BmiClass->objectName().isEmpty())
            BmiClass->setObjectName("BmiClass");
        BmiClass->resize(290, 435);
        BmiClass->setStyleSheet(QString::fromUtf8("border-radius: 7px; \n"
"background-color: rgb(76, 76, 76);\n"
""));
        label_2 = new QLabel(BmiClass);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 160, 71, 41));
        QFont font;
        font.setPointSize(10);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(76, 76, 76);\n"
"color: rgb(255, 255, 255)"));
        label_1 = new QLabel(BmiClass);
        label_1->setObjectName("label_1");
        label_1->setGeometry(QRect(40, 120, 61, 41));
        label_1->setFont(font);
        label_1->setStyleSheet(QString::fromUtf8("background-color: rgb(76, 76, 76);\n"
"color: rgb(255, 255, 255)"));
        weight = new QLineEdit(BmiClass);
        weight->setObjectName("weight");
        weight->setGeometry(QRect(170, 130, 71, 28));
        weight->setFont(font);
        weight->setStyleSheet(QString::fromUtf8("background-color: rgb(224, 224, 224);\n"
"color: rgb(0, 0, 0);"));
        height = new QLineEdit(BmiClass);
        height->setObjectName("height");
        height->setGeometry(QRect(170, 170, 71, 28));
        height->setFont(font);
        height->setStyleSheet(QString::fromUtf8("background-color: rgb(224, 224, 224);\n"
"color: rgb(0, 0, 0);"));
        equalsBtn = new QPushButton(BmiClass);
        equalsBtn->setObjectName("equalsBtn");
        equalsBtn->setGeometry(QRect(150, 350, 135, 80));
        equalsBtn->setMinimumSize(QSize(0, 0));
        QFont font1;
        font1.setPointSize(28);
        equalsBtn->setFont(font1);
        equalsBtn->setTabletTracking(false);
        equalsBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(246, 147, 51);\n"
"color: rgb(255, 255, 255);\n"
"margin: 3px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:  rgb(118, 118, 118);\n"
"}"));
        comboBox = new QComboBox(BmiClass);
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
        comboBox->setGeometry(QRect(180, 10, 108, 22));
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
        delBtn = new QPushButton(BmiClass);
        delBtn->setObjectName("delBtn");
        delBtn->setGeometry(QRect(10, 349, 135, 80));
        delBtn->setMinimumSize(QSize(0, 0));
        delBtn->setMaximumSize(QSize(16777215, 16777215));
        delBtn->setFont(font1);
        delBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(224, 224, 224);\n"
"color: rgb(0, 0, 0);\n"
"margin: 3px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:  rgb(118, 118, 118);\n"
"}"));
        label_3 = new QLabel(BmiClass);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 200, 51, 41));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(76, 76, 76);\n"
"color: rgb(255, 255, 255)"));
        label_4 = new QLabel(BmiClass);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 270, 231, 31));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(76, 76, 76);\n"
"color: rgb(255, 255, 255)"));
        resBmi = new QLabel(BmiClass);
        resBmi->setObjectName("resBmi");
        resBmi->setGeometry(QRect(180, 210, 61, 21));
        resBmi->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));

        retranslateUi(BmiClass);

        QMetaObject::connectSlotsByName(BmiClass);
    } // setupUi

    void retranslateUi(QDialog *BmiClass)
    {
        BmiClass->setWindowTitle(QCoreApplication::translate("BmiClass", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("BmiClass", "\320\240\320\276\321\201\321\202, \321\201\320\274", nullptr));
        label_1->setText(QCoreApplication::translate("BmiClass", "\320\222\320\265\321\201, \320\272\320\263", nullptr));
        equalsBtn->setText(QCoreApplication::translate("BmiClass", "=", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("BmiClass", "\320\230\320\234\320\242", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("BmiClass", "\320\241\320\272\320\270\320\264\320\272\320\260", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("BmiClass", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("BmiClass", "\320\222\320\260\320\273\321\216\321\202\320\260", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("BmiClass", "\320\224\320\260\320\275\320\275\321\213\320\265", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("BmiClass", "\320\224\320\273\320\270\320\275\320\260", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("BmiClass", "\320\234\320\260\321\201\321\201\320\260", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("BmiClass", "\320\236\320\261\321\212\320\265\320\274", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("BmiClass", "\320\237\320\273\320\276\321\211\320\260\320\264\321\214", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("BmiClass", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214", nullptr));
        comboBox->setItemText(10, QCoreApplication::translate("BmiClass", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260", nullptr));
        comboBox->setItemText(11, QCoreApplication::translate("BmiClass", "\320\244\320\270\320\275\320\260\320\275\321\201\321\213", nullptr));

        delBtn->setText(QCoreApplication::translate("BmiClass", "AC", nullptr));
        label_3->setText(QCoreApplication::translate("BmiClass", "\320\230\320\234\320\242", nullptr));
        label_4->setText(QString());
        resBmi->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BmiClass: public Ui_BmiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BMICLASS_H
