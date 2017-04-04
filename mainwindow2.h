#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H

#include <QMainWindow>
#include "frage.h"
#include "gewonnenwindow.h"
#include "verlorenwindow.h"
#include <list>
#include <utility>
#include <vector>
#include <random>

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
    void frageAuswaehlen();
    int randomZahlGenerieren(int startzahl, int endzahl);
    void verloren();
    bool a1bool;
    bool a2bool;
    bool a3bool;
    bool a4bool;   
    std::vector<Frage> fragenLeicht;
    std::vector<Frage> fragenMittel;
    std::vector<Frage> fragenSchwer;
    int fragenCounter;
    std::list<int> benutzteFragenLeicht;
    std::list<int> benutzteFragenMittel;
    std::list<int> benutzteFragenSchwer;
    gewonnenwindow *gewonnenWindow;
    VerlorenWindow *verlorenWindow;
};

#endif // MAINWINDOW2_H
