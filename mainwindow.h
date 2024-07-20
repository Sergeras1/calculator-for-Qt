#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class DataClass;
class LenghtClass;
class BmiClass;
class DiscountClass;
class SpeedClass;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    double intermediate_result;
    QString last_operator;

    DataClass *dataWidget;
    LenghtClass *lenghtWidget;
    BmiClass *bmiWidget;
    DiscountClass *discountWidget;
    SpeedClass *speedWidget;

private slots:
    void digits_numbers();
    void on_commaBtn_clicked();
    void operations();
    void on_delBtn_clicked();
    void on_equalsBtn_clicked();
    void math_operations();
    void keyPressEvent(QKeyEvent *event);
    void on_comboBox_activated(int index);

};
#endif // MAINWINDOW_H
