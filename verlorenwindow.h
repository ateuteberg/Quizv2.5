#ifndef VERLORENWINDOW_H
#define VERLORENWINDOW_H

#include <QMainWindow>

namespace Ui {
class VerlorenWindow;
}

class VerlorenWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit VerlorenWindow(QWidget *parent = 0);
    ~VerlorenWindow();

private:
    Ui::VerlorenWindow *ui;
};

#endif // VERLORENWINDOW_H
