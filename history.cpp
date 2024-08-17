#include "history.h"
#include "ui_history.h"
#include <QListWidget>
#include <QFile>
#include <QMessageBox>>

History::History(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::History)
{
    ui->setupUi(this);

    QFile file(path);

    if(!file.open(QIODevice::ReadWrite)){
        QMessageBox::information(0, "Error", file.errorString());
    }
    QTextStream in (&file);

    while(!in.atEnd()){
        QListWidgetItem* item = new QListWidgetItem(in.readLine(), ui->listWidget);
        ui->listWidget->addItem(item);
        item->setFlags(item->flags() | Qt::ItemIsEditable);
    }
    file.close();
}

History::~History()
{
    delete ui;

    QFile file(path);

    if(!file.open(QIODevice::ReadWrite)){
        QMessageBox::information(0, "Error", file.errorString());
    }

    QTextStream out (&file);

    for(int i = 0; i < ui->listWidget->count(); i++){
        out << ui->listWidget->item(i)->text() << "\n";
    }

    file.close();
}

void History::addToListWidget(const QString text) {
    QListWidgetItem *item = new QListWidgetItem(text, ui->listWidget);
    ui->listWidget->addItem(item);
    item->setFlags(item->flags() | Qt::ItemIsEditable);
}




void History::on_btnRemoveAdd_clicked() {

    ui->listWidget->clear();
}

