#ifndef LENGHTCLASS_H
#define LENGHTCLASS_H

#include <QDialog>

namespace Ui {
class LenghtClass;
}

class LenghtClass : public QDialog
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
};

#endif // LENGHTCLASS_H
