#include "bmiclass.h"
#include "ui_bmiclass.h"
#include "mainwindow.h"
#include "speedclass.h"
#include "discount.h"
#include "lenghtclass.h"
#include "dataclass.h"
#include <QKeyEvent>

BmiClass::BmiClass(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::BmiClass)
{
    ui->setupUi(this);

}

BmiClass::~BmiClass()
{
    delete ui;
}

double roundToTenths(double num){
    num *= 10;

    int roundNum = static_cast<int>(num +(num >= 0 ? 0.5 : -0.5));

    return static_cast<double>(roundNum) / 10.0;
}
void BmiClass::on_comboBox_activated(int index) {
    if(index == 2){
        hide();
        MainWindow *winCalculate = new MainWindow(this);
        winCalculate->show();
    }
    else if(index == 9){
        hide();
        SpeedClass winSpeed(this);
        winSpeed.setModal(true);
        winSpeed.exec();
    }
    else if(index == 1){
        hide();
        discount winDiscount(this);
        winDiscount.setModal(true);
        winDiscount.exec();
    }
    else if(index == 5){
        hide();
        LenghtClass winLenght(this);
        winLenght.setModal(true);
        winLenght.exec();
    }
    else if(index == 4){
        hide();
        DataClass winData(this);
        winData.setModal(true);
        winData.exec();
    }
}

void BmiClass::on_equalsBtn_clicked(){
    QString weightStr = ui->weight->text();
    QString heightStr = ui->height->text();

    double weightNumber = weightStr.toDouble();
    double heightNumber = heightStr.toDouble();
    double indexBudy = heightNumber / 100;
    double result = weightNumber / (indexBudy * indexBudy);

    ui->resBmi->setText(QString::number(roundToTenths(result)));

    if(result <= 16){
        ui->label_4->setText("Выраженный дефицит массы тела");
    }
    else if(result > 16 && result < 18.5){
        ui->label_4->setText("Дефицит массы тела");
    }
    else if(result > 18.5 && result < 25){
        ui->label_4->setText("Норма");
    }
    else if(result > 25 && result < 30){
        ui->label_4->setText("Избыточная масса тела");
    }
    else if(result > 30 && result < 35){
        ui->label_4->setText("Ожирение первой степени");
    }
    else if(result > 35 && result < 40){
        ui->label_4->setText("Ожирение второй степени");
    }
    else if(result > 40){
        ui->label_4->setText("Ожирение третьей степени");
    }

}
void BmiClass::on_delBtn_clicked(){

    ui->weight->setText("");
    ui->height->setText("");
    ui->resBmi->setText("");
    ui->label_4->setText("");

}

void BmiClass::keyPressEvent(QKeyEvent *event) {
    int key = event->key();


    if (key == Qt::Key_Return || key == Qt::Key_Enter || key == Qt::Key_Equal) {
        on_equalsBtn_clicked();
    }

    else if (key == Qt::Key_Backspace) {
        on_delBtn_clicked();
    }
    else {

        BmiClass::keyPressEvent(event);
    }
}
