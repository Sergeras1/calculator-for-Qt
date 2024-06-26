#ifndef SPEEDCLASS_H
#define SPEEDCLASS_H

#include <QDialog>

namespace Ui {
class SpeedClass;
}

class SpeedClass : public QDialog
{
    Q_OBJECT

public:
    explicit SpeedClass(QWidget *parent = nullptr);
    ~SpeedClass();

private slots:
    void on_comboBox_activated(int index);

private:
    Ui::SpeedClass *ui;
};

#endif // SPEEDCLASS_H
