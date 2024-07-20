#include "lenghtclass.h"
#include "ui_lenghtclass.h"
#include "dataclass.h"
#include "QKeyEvent"
#include "mainwindow.h"
#include "bmiclass.h"
#include "discountclass.h"
#include "speedclass.h"

LenghtClass::LenghtClass(QWidget *parent)
    : QWidget(parent)
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
    switch(index){
    case 3:
    {
        hide();
        MainWindow *winCalculate = new MainWindow(this);
        winCalculate->show();
        break;
    }
    case 5:
    {
        dataWidget = new DataClass();
        dataWidget->show();
        this->close();
        break;
    }
    case 6:
    {
        bmiWidget = new BmiClass();
        bmiWidget->show();
        this->close();
        break;
    }
    case 2:
    {
        discountWidget = new DiscountClass();
        discountWidget->show();
        this->close();
        break;
    }
    case 1:
    {
        speedWidget = new SpeedClass();
        speedWidget->show();
        this->close();
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
        QWidget::keyPressEvent(event);
    }
}
