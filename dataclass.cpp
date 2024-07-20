#include "dataclass.h"
#include "ui_dataclass.h"
#include "QKeyEvent"
#include "mainwindow.h"
#include "lenghtclass.h"
#include "bmiclass.h"
#include "discountclass.h"
#include "speedclass.h"

DataClass::DataClass(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DataClass)
{
    ui->setupUi(this);

    ui->dataComboBox_1->setCurrentIndex(0);
    ui->dataComboBox_2->setCurrentIndex(0);
}

DataClass::~DataClass()
{
    delete ui;
}
void DataClass::on_comboBox_activated(int index) {
    switch(index){
    case 1:
    {
        lenghtWidget = new LenghtClass();
        lenghtWidget->show();
        this->close();
        break;
    }
    case 4:
    {
        hide();
        MainWindow *winCalculate = new MainWindow(this);
        winCalculate->show();
        break;
    }
    case 6:
    {
        bmiWidget = new BmiClass();
        bmiWidget->show();
        this->close();
        break;
    }
    case 3:
    {
        discountWidget = new DiscountClass();
        discountWidget->show();
        this->close();
        break;
    }
    case 2:
    {
        speedWidget = new SpeedClass();
        speedWidget->show();
        this->close();
        break;
    }
  }
}

void DataClass::on_equalsBtn_clicked(){
    QString unitFrom = ui->dataComboBox_1->currentText();
    QString initTo = ui->dataComboBox_2->currentText();
    double inputData = ui->enterData->text().toDouble();
    double convertedData = 0.0;

    if(unitFrom == "Б" && initTo == "КБ"){
        convertedData = inputData / 1000;
    }
    else if(unitFrom == "Б" && initTo == "МБ"){
        convertedData = inputData / 1000000;
    }
    else if(unitFrom == "Б" && initTo == "ГБ"){
        convertedData = inputData / 1000000000;
    }
    else if(unitFrom == "Б" && initTo == "ТБ"){
        convertedData = inputData / 1000000000000;
    }
    else if(unitFrom == "Б" && initTo == "ПБ"){
        convertedData = inputData / 1000000000000000;
    }
    else if(unitFrom == "КБ" && initTo == "Б"){
        convertedData = inputData * 1000;
    }
    else if(unitFrom == "КБ" && initTo == "МБ"){
        convertedData = inputData / 1000;
    }
    else if(unitFrom == "КБ" && initTo == "ГБ"){
        convertedData = inputData / 1000000;
    }
    else if(unitFrom == "КБ" && initTo == "ТБ"){
        convertedData = inputData / 1000000000;
    }
    else if(unitFrom == "КБ" && initTo == "ПБ"){
        convertedData = inputData / 1000000000000;
    }
    else if(unitFrom == "МБ" && initTo == "Б"){
        convertedData = inputData * 1000000;
    }
    else if(unitFrom == "МБ" && initTo == "КБ"){
        convertedData = inputData * 1000;
    }
    else if(unitFrom == "МБ" && initTo == "ГБ"){
        convertedData = inputData / 1000;
    }
    else if(unitFrom == "МБ" && initTo == "ТБ"){
        convertedData = inputData / 1000000;
    }
    else if(unitFrom == "МБ" && initTo == "ПБ"){
        convertedData = inputData / 1000000000;
    }
    else if(unitFrom == "ГБ" && initTo == "Б"){
        convertedData = inputData * 1000000;
    }
    else if(unitFrom == "ГБ" && initTo == "Б"){
        convertedData = inputData * 1000000000;
    }
    else if(unitFrom == "ГБ" && initTo == "КБ"){
        convertedData = inputData * 1000000;
    }
    else if(unitFrom == "ГБ" && initTo == "МБ"){
        convertedData = inputData / 1000;
    }
    else if(unitFrom == "ГБ" && initTo == "Б"){
        convertedData = inputData / 1000000;
    }
    else if(unitFrom == "ТБ" && initTo == "Б"){
        convertedData = inputData * 1000000000000;
    }
    else if(unitFrom == "ТБ" && initTo == "КБ"){
        convertedData = inputData * 1000000000;
    }
    else if(unitFrom == "ТБ" && initTo == "МБ"){
        convertedData = inputData * 1000000;
    }
    else if(unitFrom == "ТБ" && initTo == "ГБ"){
        convertedData = inputData * 10000;
    }
    else if(unitFrom == "ТБ" && initTo == "ПБ"){
        convertedData = inputData / 1000;
    }
    else if(unitFrom == "ПБ" && initTo == "Б"){
        convertedData = inputData * 1000000000000000;
    }
    else if(unitFrom == "ПБ" && initTo == "КБ"){
        convertedData = inputData * 1000000000000;
    }
    else if(unitFrom == "ПБ" && initTo == "МБ"){
        convertedData = inputData * 1000000000;
    }
    else if(unitFrom == "ПБ" && initTo == "ГБ"){
        convertedData = inputData * 1000000;
    }
    else if(unitFrom == "ПБ" && initTo == "Б"){
        convertedData = inputData * 1000;
    }

    ui->answerData->setText(QString::number(convertedData));
}
void DataClass::on_delBtn_clicked(){
    ui->enterData->setText("");
    ui->answerData->setText("");
}
void DataClass::keyPressEvent(QKeyEvent *event) {
    int key = event->key();


    if (key == Qt::Key_Return || key == Qt::Key_Enter || key == Qt::Key_Equal) {
        on_equalsBtn_clicked();
    }

    else if (key == Qt::Key_Backspace || key == Qt::Key_Delete) {
        on_delBtn_clicked();
    }
    else {

        DataClass::keyPressEvent(event);
    }
}


