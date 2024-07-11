#ifndef DATACLASS_H
#define DATACLASS_H

#include <QDialog>

namespace Ui {
class DataClass;
}

class DataClass : public QDialog
{
    Q_OBJECT

public:
    explicit DataClass(QWidget *parent = nullptr);
    ~DataClass();

private slots:
    void on_comboBox_activated(int index);
    void on_delBtn_clicked();
    void on_equalsBtn_clicked();
    void keyPressEvent(QKeyEvent *event);

private:
    Ui::DataClass *ui;
};

#endif // DATACLASS_H
