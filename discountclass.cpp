#include "discountclass.h"
#include "ui_discountclass.h"
#include "dataclass.h"
#include "QKeyEvent"
#include "mainwindow.h"
#include "lenghtclass.h"
#include "bmiclass.h"
#include "speedclass.h"
DiscountClass::DiscountClass(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DiscountClass)
{
    ui->setupUi(this);
}

DiscountClass::~DiscountClass()
{
    delete ui;
}

void DiscountClass::on_comboBox_activated(int index) {
    switch(index){
    case 1:
    {
        hide();
        MainWindow *winCalculate = new MainWindow(this);
        winCalculate->show();
        break;
    }

    case 3:
    {
        dataWidget = new DataClass();
        dataWidget->show();
        this->close();
        break;
    }
    case 4:
    {
        lenghtWidget = new LenghtClass();
        lenghtWidget->show();
        this->close();
        break;
    }
    case 5:
    {
        bmiWidget = new BmiClass();
        bmiWidget->show();
        this->close();
        break;
    }
    case 9:
    {
        speedWidget = new SpeedClass();
        speedWidget->show();
        this->close();
        break;
    }
  }
}

void DiscountClass::on_delBtn_clicked(){
    ui->itinitial_price->setText("");
    ui->discount_line->setText("");
    ui->final_price->setText("");
}

void DiscountClass::on_equalsBtn_clicked(){

    QString firstNumberStr = ui->itinitial_price->text();
    QString secondNumberStr = ui->discount_line->text();

    double firstNumber = firstNumberStr.toDouble();
    double secondNumber = secondNumberStr.toDouble();

    double buffer = (firstNumber * secondNumber) / 100;

    double result = firstNumber - buffer;

    ui->final_price->setText(QString::number(result));
}

void DiscountClass::keyPressEvent(QKeyEvent *event) {
    int key = event->key();


    if (key == Qt::Key_Return || key == Qt::Key_Enter || key == Qt::Key_Equal) {
        on_equalsBtn_clicked();
    }

    else if (key == Qt::Key_Backspace) {
        on_delBtn_clicked();
    }
    else {

        DiscountClass::keyPressEvent(event);
    }
}

