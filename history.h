#ifndef HISTORY_H
#define HISTORY_H

#include <QDialog>
#include <QListWidget>
#include <QStandardPaths>

namespace Ui {
class History;
}

class History : public QDialog
{
    Q_OBJECT

public:
    explicit History(QWidget *parent = nullptr);
    ~History();
    void addToListWidget(const QString text);

private slots:
    void on_btnRemoveAdd_clicked();

private:
    Ui::History *ui;
    QString path = QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation) + "\\result.txt";
};

#endif // HISTORY_H
