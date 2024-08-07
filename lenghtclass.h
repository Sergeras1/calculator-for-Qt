#ifndef LENGHTCLASS_H
#define LENGHTCLASS_H

#include <QWidget>

class DataClass;
class BmiClass;
class DiscountClass;
class SpeedClass;

namespace Ui {
class LenghtClass;
}

class LenghtClass : public QWidget
{
    Q_OBJECT

public:
    explicit LenghtClass(QWidget *parent = nullptr);
    ~LenghtClass();
private slots:
    void on_comboBox_activated(int index);
    void on_delBtn_clicked();
    void on_equalsBtn_clicked();
    void keyPressEvent(QKeyEvent *event);

private:
    Ui::LenghtClass *ui;
    DataClass *dataWidget;
    BmiClass *bmiWidget;
    DiscountClass *discountWidget;
    SpeedClass *speedWidget;
};

#endif // LENGHTCLASS_H
