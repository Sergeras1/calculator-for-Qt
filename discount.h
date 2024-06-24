#ifndef DISCOUNT_H
#define DISCOUNT_H

#include <QDialog>

namespace Ui {
class discount;
}

class discount : public QDialog
{
    Q_OBJECT

public:
    explicit discount(QWidget *parent = nullptr);
    ~discount();

private slots:
    void on_comboBox_activated(int index);
    void on_delBtn_clicked();
    void on_equalsBtn_clicked();
    void keyPressEvent(QKeyEvent *event);

private:
    Ui::discount *ui;
};

#endif // DISCOUNT_H
