#include "discount.h"
#include "ui_discount.h"
#include "mainwindow.h"
#include <QKeyEvent>
#include "speedclass.h"

discount::discount(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::discount)
{
    ui->setupUi(this);
    ui->final_price->setReadOnly(true);

}

discount::~discount()
{
    delete ui;
}

void discount::on_comboBox_activated(int index)
{
    if(index == 1){
        hide();
        MainWindow *winCalculate = new MainWindow;
        winCalculate->show();
    }
    else if(index == 9){
        hide();
        SpeedClass winSpeed;
        winSpeed.setModal(true);
        winSpeed.exec();
    }
}

void discount::on_delBtn_clicked(){
    ui->itinitial_price->setText("");
    ui->discount_line->setText("");
    ui->final_price->setText("");
}

void discount::on_equalsBtn_clicked(){

    QString firstNumberStr = ui->itinitial_price->text();
    QString secondNumberStr = ui->discount_line->text();

    double firstNumber = firstNumberStr.toDouble();
    double secondNumber = secondNumberStr.toDouble();

    double buffer = (firstNumber * secondNumber) / 100;

    double result = firstNumber - buffer;

    ui->final_price->setText(QString::number(result));
}

void discount::keyPressEvent(QKeyEvent *event) {
    int key = event->key();


    if (key == Qt::Key_Return || key == Qt::Key_Enter || key == Qt::Key_Equal) {
        on_equalsBtn_clicked();
    }

    else if (key == Qt::Key_Backspace) {
        on_delBtn_clicked();
    }
    else {

        discount::keyPressEvent(event);
    }
}
