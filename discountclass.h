#ifndef DISCOUNTCLASS_H
#define DISCOUNTCLASS_H

#include <QWidget>

class DataClass;
class LenghtClass;
class BmiClass;
class SpeedClass;

namespace Ui {
class DiscountClass;
}

class DiscountClass : public QWidget
{
    Q_OBJECT

public:
    explicit DiscountClass(QWidget *parent = nullptr);
    ~DiscountClass();

private slots:
    void on_comboBox_activated(int index);
    void on_delBtn_clicked();
    void on_equalsBtn_clicked();
    void keyPressEvent(QKeyEvent *event);
private:
    Ui::DiscountClass *ui;
    LenghtClass *lenghtWidget;
    DataClass *dataWidget;
    BmiClass *bmiWidget;
    SpeedClass *speedWidget;
};

#endif // DISCOUNTCLASS_H
