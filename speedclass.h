#ifndef SPEEDCLASS_H
#define SPEEDCLASS_H

#include <QWidget>
#include "discountclass.h"
#include "dataclass.h"
#include "bmiclass.h"
#include "lenghtclass.h"

namespace Ui {
class SpeedClass;
}

class SpeedClass : public QWidget
{
    Q_OBJECT

public:
    explicit SpeedClass(QWidget *parent = nullptr);
    ~SpeedClass();

private slots:
    void on_comboBox_activated(int index);
    void on_delBtn_clicked();
    void on_equalsBtn_clicked();
    void keyPressEvent(QKeyEvent *event);

private:
    Ui::SpeedClass *ui;
    DiscountClass *discountWidget;
    DataClass *dataWidget;
    BmiClass *bmiWidget;
    LenghtClass *lenghtWidget;
};

#endif // SPEEDCLASS_H
