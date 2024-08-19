#include "history.h"
#include "ui_history.h"
#include <QListWidget>
#include <QFile>
#include <QMessageBox>

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
    ///
}

void History::saveFile(const QString &str){
    QFile file (path);
    if(file.open(QIODevice::Append | QIODevice::Text)){
        QTextStream out (&file);
        out << str << "\n";
    }
}
void History::addToListWidget(const QString text) {

    QString str = text;
    if(!str.isEmpty()){
        ui->listWidget->addItem(str);
        saveFile(str);

    }
}




void History::on_btnRemoveAdd_clicked() {

    ui->listWidget->clear();
    QFile file(path);
    if(file.open(QIODevice::WriteOnly | QIODevice::Text)){
        file.resize(0);
        file.close();
    }
}
