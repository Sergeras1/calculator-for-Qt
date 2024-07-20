#ifndef DATACLASS_H
#define DATACLASS_H

#include <QWidget>

class LenghtClass;
class BmiClass;
class DiscountClass;
class SpeedClass;

namespace Ui {
class DataClass;
}

class DataClass : public QWidget
{
    Q_OBJECT

public:
    explicit DataClass(QWidget *parent = nullptr);
    ~DataClass();

private slots:

    void on_delBtn_clicked();
    void on_equalsBtn_clicked();
    void keyPressEvent(QKeyEvent *event);
    void on_comboBox_activated(int index);

private:
    Ui::DataClass *ui;
    LenghtClass *lenghtWidget;
    BmiClass *bmiWidget;
    DiscountClass *discountWidget;
    SpeedClass *speedWidget;
};

#endif // DATACLASS_H
