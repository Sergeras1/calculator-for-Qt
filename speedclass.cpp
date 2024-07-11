#include "speedclass.h"
#include "ui_speedclass.h"
#include "mainwindow.h"
#include "discount.h"
#include "bmiclass.h"
#include "lenghtclass.h"
#include "dataclass.h"


SpeedClass::SpeedClass(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SpeedClass)
{
    ui->setupUi(this);

    ui->speedComboBox_1->setCurrentIndex(0);
    ui->speedComboBox_2->setCurrentIndex(0);
}

SpeedClass::~SpeedClass()
{
    delete ui;
}

void SpeedClass::on_comboBox_activated(int index) {

    if(index == 2){
        hide();
        MainWindow *winCalculate = new MainWindow(this);
        winCalculate->show();
    }
    else if(index == 1){
        hide();
        discount winDiscount(this);
        winDiscount.setModal(true);
        winDiscount.exec();
    }
    else if(index == 6){
        hide();
        BmiClass winBmi(this);
        winBmi.setModal(true);
        winBmi.exec();
    }
    else if(index == 1){
        hide();
        LenghtClass winLenght(this);
        winLenght.setModal(true);
        winLenght.exec();
    }
    else if(index == 5){
        hide();
        DataClass winData(this);
        winData.setModal(true);
        winData.exec();
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



