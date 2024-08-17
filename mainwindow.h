#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"history.h"
#include <QStandardPaths>

class DataClass;
class LenghtClass;
class BmiClass;
class DiscountClass;
class SpeedClass;
//class History;

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
    History historyWidget;
    History history;

private slots:
    void digits_numbers();
    void on_commaBtn_clicked();
    void operations();
    void on_delBtn_clicked();
    void on_equalsBtn_clicked();
    void math_operations();
    void keyPressEvent(QKeyEvent *event);
    void on_comboBox_activated(int index);
    void on_historiBtn_clicked();
};
#endif // MAINWINDOW_H
