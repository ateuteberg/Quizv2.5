#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainwindow2.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
   MainWindow2 *quiz = new MainWindow2(); // Hier läuft auch Konstruktor ab

   quiz->show();
}

void MainWindow::on_MainWindow_destroyed()
{
    delete quiz;
}
