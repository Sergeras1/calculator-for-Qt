/********************************************************************************
** Form generated from reading UI file 'discount.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISCOUNT_H
#define UI_DISCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_discount
{
public:
    QComboBox *comboBox;
    QPushButton *equalsBtn;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *itinitial_price;
    QLineEdit *discount_line;
    QLineEdit *final_price;
    QPushButton *delBtn;
    QPushButton *equalsBtn_2;
    QLineEdit *discount_line_2;
    QPushButton *delBtn_2;
    QLineEdit *final_price_2;
    QLineEdit *itinitial_price_2;

    void setupUi(QDialog *discount)
    {
        if (discount->objectName().isEmpty())
            discount->setObjectName("discount");
        discount->resize(290, 435);
        discount->setMinimumSize(QSize(290, 420));
        discount->setStyleSheet(QString::fromUtf8("border-radius: 7px; \n"
"background-color: rgb(76, 76, 76);\n"
""));
        comboBox = new QComboBox(discount);
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
        equalsBtn = new QPushButton(discount);
        equalsBtn->setObjectName("equalsBtn");
        equalsBtn->setGeometry(QRect(150, 350, 135, 80));
        equalsBtn->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setPointSize(28);
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
        label_1 = new QLabel(discount);
        label_1->setObjectName("label_1");
        label_1->setGeometry(QRect(10, 120, 181, 41));
        QFont font1;
        font1.setPointSize(10);
        label_1->setFont(font1);
        label_1->setStyleSheet(QString::fromUtf8("background-color: rgb(76, 76, 76);\n"
"color: rgb(255, 255, 255)"));
        label_2 = new QLabel(discount);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 160, 91, 41));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(76, 76, 76);\n"
"color: rgb(255, 255, 255)"));
        label_3 = new QLabel(discount);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 200, 181, 41));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(76, 76, 76);\n"
"color: rgb(255, 255, 255)"));
        itinitial_price = new QLineEdit(discount);
        itinitial_price->setObjectName("itinitial_price");
        itinitial_price->setGeometry(QRect(200, 130, 71, 28));
        itinitial_price->setFont(font1);
        itinitial_price->setStyleSheet(QString::fromUtf8("background-color: rgb(224, 224, 224);\n"
"color: rgb(0, 0, 0);"));
        discount_line = new QLineEdit(discount);
        discount_line->setObjectName("discount_line");
        discount_line->setGeometry(QRect(200, 170, 71, 28));
        discount_line->setFont(font1);
        discount_line->setStyleSheet(QString::fromUtf8("background-color: rgb(224, 224, 224);\n"
"color: rgb(0, 0, 0);"));
        final_price = new QLineEdit(discount);
        final_price->setObjectName("final_price");
        final_price->setGeometry(QRect(200, 210, 71, 28));
        final_price->setFont(font1);
        final_price->setStyleSheet(QString::fromUtf8("background-color: rgb(224, 224, 224);\n"
"color: rgb(0, 0, 0);"));
        delBtn = new QPushButton(discount);
        delBtn->setObjectName("delBtn");
        delBtn->setGeometry(QRect(10, 349, 135, 80));
        delBtn->setMinimumSize(QSize(0, 0));
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
        equalsBtn_2 = new QPushButton(discount);
        equalsBtn_2->setObjectName("equalsBtn_2");
        equalsBtn_2->setGeometry(QRect(240, 570, 135, 80));
        equalsBtn_2->setMinimumSize(QSize(0, 0));
        equalsBtn_2->setFont(font);
        equalsBtn_2->setTabletTracking(false);
        equalsBtn_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(246, 147, 51);\n"
"color: rgb(255, 255, 255);\n"
"margin: 3px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:  rgb(118, 118, 118);\n"
"}"));
        discount_line_2 = new QLineEdit(discount);
        discount_line_2->setObjectName("discount_line_2");
        discount_line_2->setGeometry(QRect(290, 390, 71, 28));
        discount_line_2->setFont(font1);
        discount_line_2->setStyleSheet(QString::fromUtf8("background-color: rgb(224, 224, 224);\n"
"color: rgb(0, 0, 0);"));
        delBtn_2 = new QPushButton(discount);
        delBtn_2->setObjectName("delBtn_2");
        delBtn_2->setGeometry(QRect(100, 569, 135, 80));
        delBtn_2->setMinimumSize(QSize(0, 0));
        delBtn_2->setMaximumSize(QSize(16777215, 16777215));
        delBtn_2->setFont(font);
        delBtn_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(224, 224, 224);\n"
"color: rgb(0, 0, 0);\n"
"margin: 3px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:  rgb(118, 118, 118);\n"
"}"));
        final_price_2 = new QLineEdit(discount);
        final_price_2->setObjectName("final_price_2");
        final_price_2->setGeometry(QRect(290, 430, 71, 28));
        final_price_2->setFont(font1);
        final_price_2->setStyleSheet(QString::fromUtf8("background-color: rgb(224, 224, 224);\n"
"color: rgb(0, 0, 0);"));
        itinitial_price_2 = new QLineEdit(discount);
        itinitial_price_2->setObjectName("itinitial_price_2");
        itinitial_price_2->setGeometry(QRect(290, 350, 71, 28));
        itinitial_price_2->setFont(font1);
        itinitial_price_2->setStyleSheet(QString::fromUtf8("background-color: rgb(224, 224, 224);\n"
"color: rgb(0, 0, 0);"));

        retranslateUi(discount);

        QMetaObject::connectSlotsByName(discount);
    } // setupUi

    void retranslateUi(QDialog *discount)
    {
        discount->setWindowTitle(QCoreApplication::translate("discount", "Dialog", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("discount", "\320\241\320\272\320\270\320\264\320\272\320\260", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("discount", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("discount", "\320\222\320\260\320\273\321\216\321\202\320\260", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("discount", "\320\224\320\260\320\275\320\275\321\213\320\265", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("discount", "\320\224\320\273\320\270\320\275\320\260", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("discount", "\320\230\320\234\320\242", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("discount", "\320\234\320\260\321\201\321\201\320\260", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("discount", "\320\236\320\261\321\212\320\265\320\274", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("discount", "\320\237\320\273\320\276\321\211\320\260\320\264\321\214", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("discount", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214", nullptr));
        comboBox->setItemText(10, QCoreApplication::translate("discount", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260", nullptr));
        comboBox->setItemText(11, QCoreApplication::translate("discount", "\320\244\320\270\320\275\320\260\320\275\321\201\321\213", nullptr));

        equalsBtn->setText(QCoreApplication::translate("discount", "=", nullptr));
        label_1->setText(QCoreApplication::translate("discount", "\320\237\320\265\321\200\320\262\320\276\320\275\320\260\321\207\320\260\320\273\321\214\320\275\320\260\321\217 \321\206\320\265\320\275\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("discount", "\320\241\320\272\320\270\320\264\320\272\320\260 (%)", nullptr));
        label_3->setText(QCoreApplication::translate("discount", "\320\236\320\272\320\276\320\275\321\207\320\260\321\202\320\265\320\273\321\214\320\275\320\260\321\217 \321\206\320\265\320\275\320\260", nullptr));
        delBtn->setText(QCoreApplication::translate("discount", "AC", nullptr));
        equalsBtn_2->setText(QCoreApplication::translate("discount", "=", nullptr));
        delBtn_2->setText(QCoreApplication::translate("discount", "AC", nullptr));
    } // retranslateUi

};

namespace Ui {
    class discount: public Ui_discount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISCOUNT_H
