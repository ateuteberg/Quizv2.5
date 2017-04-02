#include "gewonnenwindow.h"
#include "ui_gewonnenwindow.h"

gewonnenwindow::gewonnenwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gewonnenwindow)
{
    ui->setupUi(this);
}

gewonnenwindow::~gewonnenwindow()
{
    delete ui;
}
