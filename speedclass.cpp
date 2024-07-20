#include "speedclass.h"
#include "ui_speedclass.h"
#include "mainwindow.h"
#include "discountclass.h"
#include "QKeyEvent"

SpeedClass::SpeedClass(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SpeedClass)
{
    ui->setupUi(this);
}

SpeedClass::~SpeedClass()
{
    delete ui;
}

void SpeedClass::on_comboBox_activated(int index) {
    switch(index){
    case 1:
    {
        discountWidget = new DiscountClass();
        discountWidget->show();
        this->close();
        break;
    }
    case 2:
    {
        hide();
        MainWindow *WinCalculate = new MainWindow();
        WinCalculate->show();
        break;
    }
    case 4:
    {
        dataWidget = new DataClass();
        dataWidget->show();
        this->close();
        break;
    }
    case 5:
    {
        lenghtWidget = new LenghtClass();
        lenghtWidget->show();
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
  }
}

void SpeedClass::on_equalsBtn_clicked() {

    QString unitFrom = ui->speedComboBox_1->currentText();
    QString initTo = ui->speedComboBox_2->currentText();
    double inputSpeed = ui->enterSpeed->text().toDouble();
    double convertedSpeed = 0.0;

    if(unitFrom == "км/ч" && initTo == "м/с"){
        convertedSpeed = inputSpeed / 3.6;
    }
    else if(unitFrom == "м/с" && initTo == "км/ч"){
        convertedSpeed = inputSpeed * 3.6;
    }
    else if(unitFrom == "км/с" && initTo == "км/ч"){
        convertedSpeed = inputSpeed * 3600;
    }
    else if(unitFrom == "км/с" && initTo == "м/с"){
        convertedSpeed = inputSpeed * 1000;
    }
    else if(unitFrom == "км/ч" && initTo == "км/с"){
        convertedSpeed = inputSpeed / 3600;
    }
    else if(unitFrom == "м/с" && initTo == "км/с"){
        convertedSpeed = inputSpeed / 1000;
    }
    else{
        convertedSpeed = inputSpeed;
    }
    ui->answerSpeed->setText(QString::number(convertedSpeed));
}

void SpeedClass::on_delBtn_clicked(){
    ui->enterSpeed->setText("");
    ui->answerSpeed->setText("");
}

void SpeedClass::keyPressEvent(QKeyEvent *event) {
    int key = event->key();

    if (key == Qt::Key_Return || key == Qt::Key_Enter || key == Qt::Key_Equal) {
        on_equalsBtn_clicked();
    } else if (key == Qt::Key_Backspace) {
        on_delBtn_clicked();
    } else {
        QWidget::keyPressEvent(event);
    }
}

