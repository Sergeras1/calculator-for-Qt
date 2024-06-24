#include "speedclass.h"
#include "ui_speedclass.h"
#include "mainwindow.h"
#include "discount.h"


SpeedClass::SpeedClass(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SpeedClass)
{
    ui->setupUi(this);
}

SpeedClass::~SpeedClass()
{
    delete ui;
}

void SpeedClass::on_comboBox_activated(int index) {

    if(index == 2){
        hide();
        MainWindow *winCalculate = new MainWindow;
        winCalculate->show();
    }
    else if(index == 1){
        hide();
        discount winDiscount;
        winDiscount.setModal(true);
        winDiscount.exec();
    }
}

