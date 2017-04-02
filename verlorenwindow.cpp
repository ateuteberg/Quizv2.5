#include "verlorenwindow.h"
#include "ui_verlorenwindow.h"

VerlorenWindow::VerlorenWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VerlorenWindow)
{
    ui->setupUi(this);
}

VerlorenWindow::~VerlorenWindow()
{
    delete ui;
}
