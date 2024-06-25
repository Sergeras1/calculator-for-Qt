#ifndef BMICLASS_H
#define BMICLASS_H

#include <QDialog>

namespace Ui {
class BmiClass;
}

class BmiClass : public QDialog
{
    Q_OBJECT

public:
    explicit BmiClass(QWidget *parent = nullptr);
    ~BmiClass();

private slots:
    void on_comboBox_activated(int index);
    void on_delBtn_clicked();
    void on_equalsBtn_clicked();

private:
    Ui::BmiClass *ui;

};

#endif // BMICLASS_H
