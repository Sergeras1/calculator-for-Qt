#ifndef BMICLASS_H
#define BMICLASS_H

#include <QWidget>

class LenghtClass;
class DiscountClass;
class DataClass;
class SpeedClass;

namespace Ui {
class BmiClass;
}

class BmiClass : public QWidget
{
    Q_OBJECT

public:
    explicit BmiClass(QWidget *parent = nullptr);
    ~BmiClass();

private slots:
    void on_comboBox_activated(int index);
    void on_delBtn_clicked();
    void on_equalsBtn_clicked();
    void keyPressEvent(QKeyEvent *event);

private:
    Ui::BmiClass *ui;
    LenghtClass *lenghtWidget;
    DataClass *dataWidget;
    DiscountClass *discountWidget;
    SpeedClass *speedWidget;
};

#endif // BMICLASS_H
