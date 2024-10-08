#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QKeyEvent>
#include <QFile>
#include "bmiclass.h"
#include "dataclass.h"
#include "lenghtclass.h"
#include "discountclass.h"
#include "speedclass.h"
#include "history.h"
#include <QMessageBox>
#include <QTextStream>
#include <QStandardPaths>
#include <QListWidgetItem>

double num_first;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
    history(new History(this))
{
    ui->setupUi(this);

    connect(ui->btn0, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->btn1, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->btn2, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->btn3, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->btn4, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->btn5, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->btn6, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->btn7, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->btn8, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->btn9, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->reversBtn, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->procentBtn, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->plusBtn, SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->minusBtn, SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->multBtn, SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->divisBtn, SIGNAL(clicked()), this, SLOT(math_operations()));


    ui->plusBtn->setCheckable(true);
    ui->minusBtn->setCheckable(true);
    ui->multBtn->setCheckable(true);
    ui->divisBtn->setCheckable(true);

}

MainWindow::~MainWindow()
{
    delete ui;

}


void MainWindow::digits_numbers(){

    QPushButton *button = (QPushButton *) sender();
    double all_numbers;
    QString new_label;
    if(ui->result->text().contains(".") && button->text() == "0") {
        new_label = ui->result->text() + button->text();
    }
    else {
        all_numbers = (ui->result->text() + button->text()).toDouble();
        new_label = QString::number(all_numbers, 'g', 15);
    }
    ui->result->setText(new_label);

}

void MainWindow::on_commaBtn_clicked(){
    if(!(ui->result->text().contains('.'))){
        ui->result->setText(ui->result->text() + ".");
    }
}

void MainWindow::operations(){
    QPushButton *button = (QPushButton *) sender();
    double all_numbers;
    QString new_label;

    if(button->text() == "+/-"){
        all_numbers = (ui->result->text()).toDouble();
        all_numbers = all_numbers * -1;
        new_label = QString::number(all_numbers, 'g', 15);
        ui->result->setText(new_label);
    }
    else if(button->text() == "%") {
        all_numbers = (ui->result->text()).toDouble();
        all_numbers = all_numbers * 0.01;
        new_label = QString::number(all_numbers, 'g', 15);
        ui->result->setText(new_label);
    }
}

void MainWindow::math_operations() {

    QPushButton *button = (QPushButton *) sender();

    num_first = ui->result->text().toDouble();
    ui->result->setText("");


    button->setChecked(true);
}

void MainWindow::on_delBtn_clicked() {

    ui->plusBtn->setChecked(false);
    ui->minusBtn->setChecked(false);
    ui->multBtn->setChecked(false);
    ui->divisBtn->setChecked(false);

    ui->result->setText("0");
}

void MainWindow::on_equalsBtn_clicked() {
    double labelNumber, num_second;
    QString expression = ui->result->text();
    QString new_label;
    num_second = ui->result->text().toDouble();
    if(ui->plusBtn->isChecked()){
        labelNumber = num_first + num_second;
        new_label = QString::number(labelNumber, 'g', 15);
        ui->result->setText(new_label);
        ui -> lastResult->setText(QString::number(num_first) + QString(" + ") +
                                  QString::number(num_second) + QString(" = ")
                                + new_label);
        ui->plusBtn->setChecked(false);

    }
    else if(ui->minusBtn->isChecked()){
        labelNumber = num_first - num_second;
        new_label = QString::number(labelNumber, 'g', 15);

        ui->result->setText(new_label);
        ui -> lastResult->setText(QString::number(num_first) + QString(" - ") +
                                QString::number(num_second) + QString(" = ")
                                + new_label);
        ui->minusBtn->setChecked(false);
    }
    else if(ui->multBtn->isChecked()){
        labelNumber = num_first * num_second;
        new_label = QString::number(labelNumber, 'g', 15);

        ui->result->setText(new_label);
        ui -> lastResult->setText(QString::number(num_first) + QString(" * ") +
                                QString::number(num_second) + QString(" = ")
                                + new_label);
        ui->multBtn->setChecked(false);
    }
    else if(ui->divisBtn->isChecked()){
        if(num_second == 0){
            ui->result->setText("Ошибка.");
        }
        else{
            labelNumber = num_first / num_second;
            new_label = QString::number(labelNumber, 'g', 15);

            ui->result->setText(new_label);
            ui -> lastResult->setText(QString::number(num_first) + QString(" / ") +
                                    QString::number(num_second) + QString(" = ")
                                    + new_label);
            ui->divisBtn->setChecked(false);
        }
    }
    historyWidget.addToListWidget(ui->lastResult->text());
}

void MainWindow::keyPressEvent(QKeyEvent *event) {
    int key = event->key();


    if (key == Qt::Key_Return || key == Qt::Key_Enter || key == Qt::Key_Equal) {
        on_equalsBtn_clicked();
    }

    else if (key >= Qt::Key_0 && key <= Qt::Key_9) {
        QString keyText = QString::number(key - Qt::Key_0);
        if (ui->result->text() == "0") {
            ui->result->setText(keyText);
        } else {
            ui->result->setText(ui->result->text() + keyText);
        }
    }

    else if (key == Qt::Key_Plus) {
        ui->plusBtn->click();
    }
    else if (key == Qt::Key_Minus) {
        ui->minusBtn->click();
    }
    else if (key == Qt::Key_Asterisk) {
        ui->multBtn->click();
    }
    else if (key == Qt::Key_Slash) {
        ui->divisBtn->click();
    }

    else if (key == Qt::Key_Backspace || key == Qt::Key_Delete) {
        on_delBtn_clicked();
    }
    else if(key == Qt::Key_Period || key == Qt::Key_Comma){
        on_commaBtn_clicked();
    }
    else {

        QMainWindow::keyPressEvent(event);
    }
}

void MainWindow::on_comboBox_activated(int index) {
    switch(index){
    case 2:
    {
        dataWidget = new DataClass();
        dataWidget->show();
        this->close();
        break;
    }

    case 3:
    {
        lenghtWidget = new LenghtClass();
        lenghtWidget->show();
        this->close();
        break;
    }
    case 4:
    {
        bmiWidget = new BmiClass();
        bmiWidget->show();
        this->close();
        break;
    }
    case 8:
    {
        discountWidget = new DiscountClass();
        discountWidget->show();
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


void MainWindow::on_historiBtn_clicked() {
    historyWidget.show();


}

