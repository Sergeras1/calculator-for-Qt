#include "lenghtclass.h"
#include "ui_lenghtclass.h"
#include "bmiclass.h"
#include "mainwindow.h"
#include "speedclass.h"
#include "discount.h"
#include "dataclass.h"
#include <QKeyEvent>

LenghtClass::LenghtClass(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LenghtClass)
{
    ui->setupUi(this);

    ui->lenghtComboBox_1->setCurrentIndex(0);
    ui->lenghtComboBox_2->setCurrentIndex(0);
}

LenghtClass::~LenghtClass()
{
    delete ui;
}

void LenghtClass::on_comboBox_activated(int index) {

    this->hide(); // Скрываем текущее окно
    switch(index) {
    case 1: {
        SpeedClass *winSpeed = new SpeedClass(this);  // Создаем с указанием родителя
        winSpeed->setModal(true);
        winSpeed->show();
        connect(winSpeed, &SpeedClass::finished, this, &LenghtClass::show); // Показать текущее окно после закрытия
        break;
    }
    case 2: {

        discount *winDiscount = new discount(this);  // Создаем с указанием родителя
        winDiscount->setModal(true);
        winDiscount->show();
        connect(winDiscount, &discount::finished, this, &LenghtClass::show);
        break;
    }
    case 3: {
        MainWindow *winCalculate = new MainWindow(this);  // Создаем с указанием родителя
        winCalculate->show();
        connect(winCalculate, &MainWindow::destroyed, this, &LenghtClass::show); // Показать текущее окно после закрытия
        winCalculate->hide();
        break;
    }
    case 4: {
        hide(); // Скрываем текущее окно
        BmiClass *winBmi = new BmiClass(this);  // Создаем с указанием родителя
        winBmi->setModal(true);
        winBmi->show();
        connect(winBmi, &BmiClass::finished, this, &LenghtClass::show);
        break;
    }
    case 5: {
        DataClass *winData = new DataClass(this);  // Создаем с указанием родителя
        winData->setModal(true);
        winData->show();
        connect(winData, &DataClass::finished, this, &LenghtClass::show);
        break;
    }
    default: {
        this->show(); // Показываем текущее окно, если индекс не совпадает
        break;
    }
    }
}

void LenghtClass::on_equalsBtn_clicked() {
    QString unitFrom = ui->lenghtComboBox_1->currentText();
    QString initTo = ui->lenghtComboBox_2->currentText();
    double inputLenght = ui->enterLenght->text().toDouble();
    double convertedLenght = 0.0;

    if (unitFrom == "км" && initTo == "м") {
        convertedLenght = inputLenght * 1000;
    } else if (unitFrom == "км" && initTo == "см") {
        convertedLenght = inputLenght * 100000;
    } else if (unitFrom == "км" && initTo == "мм") {
        convertedLenght = inputLenght * 1000000;
    } else if (unitFrom == "м" && initTo == "км") {
        convertedLenght = inputLenght / 1000;
    } else if (unitFrom == "м" && initTo == "см") {
        convertedLenght = inputLenght * 100;
    } else if (unitFrom == "м" && initTo == "мм") {
        convertedLenght = inputLenght * 1000;
    } else if (unitFrom == "см" && initTo == "км") {
        convertedLenght = inputLenght / 100000;
    } else if (unitFrom == "см" && initTo == "м") {
        convertedLenght = inputLenght / 100;
    } else if (unitFrom == "см" && initTo == "мм") {
        convertedLenght = inputLenght * 10;
    } else if (unitFrom == "мм" && initTo == "км") {
        convertedLenght = inputLenght / 1000000;
    } else if (unitFrom == "мм" && initTo == "м") {
        convertedLenght = inputLenght / 1000;
    } else if (unitFrom == "мм" && initTo == "см") {
        convertedLenght = inputLenght / 10;
    } else {
        convertedLenght = inputLenght;
    }
    ui->answerLenght->setText(QString::number(convertedLenght));
}

void LenghtClass::on_delBtn_clicked() {
    ui->enterLenght->setText("");
    ui->answerLenght->setText("");
}

void LenghtClass::keyPressEvent(QKeyEvent *event) {
    int key = event->key();

    if (key == Qt::Key_Return || key == Qt::Key_Enter || key == Qt::Key_Equal) {
        on_equalsBtn_clicked();
    } else if (key == Qt::Key_Backspace) {
        on_delBtn_clicked();
    } else {
        QDialog::keyPressEvent(event);
    }
}
