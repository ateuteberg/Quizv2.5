#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H

#include <QMainWindow>
#include "frage.h"
#include "verlorenwindow.h"
// Alle hier runter nur für Testzwecke
#include <utility>
#include <vector>

namespace Ui {
class MainWindow2;
}

class MainWindow2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow2(QWidget *parent = 0);
    ~MainWindow2();

private slots:
    void on_pushButtona1_clicked();

    void on_pushButtona2_clicked();

    void on_pushButtona3_clicked();

    void on_pushButtona4_clicked();

private:
    Ui::MainWindow2 *ui;
    void buttonsBefuellen(QString f, std::vector<std::pair<QString, bool> > a);
    bool a1bool;
    bool a2bool;
    bool a3bool;
    bool a4bool;
};

#endif // MAINWINDOW2_H
