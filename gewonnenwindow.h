#ifndef GEWONNENWINDOW_H
#define GEWONNENWINDOW_H

#include <QMainWindow>

namespace Ui {
class gewonnenwindow;
}

class gewonnenwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit gewonnenwindow(QWidget *parent = 0);
    ~gewonnenwindow();

private:
    Ui::gewonnenwindow *ui;
};

#endif // GEWONNENWINDOW_H
