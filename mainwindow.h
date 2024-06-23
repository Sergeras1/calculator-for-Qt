#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
private slots:
    void digits_numbers();
    void on_commaBtn_clicked();
    void operations();
    void on_delBtn_clicked();
    void on_equalsBtn_clicked();
    void math_operations();
    void keyPressEvent(QKeyEvent *event);

};
#endif // MAINWINDOW_H
