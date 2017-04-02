#include "mainwindow2.h"
#include "ui_mainwindow2.h"

MainWindow2::MainWindow2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow2)
{
    ui->setupUi(this);
    this->fragenCounter = 0;

    std::vector<std::pair<QString, bool> > v;
    v.push_back(std::make_pair("A1", false));
    v.push_back(std::make_pair("A2", false));
    v.push_back(std::make_pair("A3", true));
    v.push_back(std::make_pair("A4", false));
    Frage f("test", v);
    this->buttonsBefuellen(f.frage, f.antworten);
}

void MainWindow2::buttonsBefuellen(QString f, std::vector<std::pair<QString, bool> > a){
    ui->fragelabel->setText(f);
    ui->labela1->setText(a[0].first);
    this->a1bool = a[0].second;
    ui->labela2->setText(a[1].first);
    this->a2bool = a[1].second;
    ui->labela3->setText(a[2].first);
    this->a3bool = a[2].second;
    ui->labela4->setText(a[3].first);
    this->a4bool = a[3].second;
}

int MainWindow2::randomZahlGenerieren(int startzahl, int endzahl){
    // https://de.wikipedia.org/wiki/Mersenne-Twister
    std::mt19937 random;
    random.seed(std::random_device()());
    std::uniform_int_distribution<std::mt19937::result_type> dist(startzahl,endzahl);
    return dist(random);
}

void MainWindow2::frageAuswaehlen(){
    this->fragenCounter++;

    if (fragenCounter > 5){
        int indexzahl;
        do{
            indexzahl = this->randomZahlGenerieren(0, this->fragenLeicht.size());
        } while(std::find(this->benutzteFragenLeicht.begin(), this->benutzteFragenLeicht.end(), indexzahl) != this->benutzteFragenLeicht.end());
        this->benutzteFragenLeicht.push_back(indexzahl);
        this->buttonsBefuellen(this->fragenLeicht[indexzahl].frage, this->fragenLeicht[indexzahl].antworten);
        return;
    }
    else if (fragenCounter > 10){
        int indexzahl;
        do{
            indexzahl = this->randomZahlGenerieren(0, this->fragenMittel.size());
        } while(std::find(this->benutzteFragenMittel.begin(), this->benutzteFragenMittel.end(), indexzahl) != this->benutzteFragenMittel.end());
        this->benutzteFragenMittel.push_back(indexzahl);
        this->buttonsBefuellen(this->fragenMittel[indexzahl].frage, this->fragenMittel[indexzahl].antworten);
        return;
    }
    else if (fragenCounter > 15){
        int indexzahl;
        do{
            indexzahl = this->randomZahlGenerieren(0, this->fragenSchwer.size());
        } while(std::find(this->benutzteFragenSchwer.begin(), this->benutzteFragenSchwer.end(), indexzahl) != this->benutzteFragenSchwer.end());
        this->benutzteFragenSchwer.push_back(indexzahl);
        this->buttonsBefuellen(this->fragenSchwer[indexzahl].frage, this->fragenSchwer[indexzahl].antworten);
        return;
    }
    else if (fragenCounter == 15){
        gewonnenwindow *gewonnenWindow = new gewonnenwindow();
        gewonnenWindow->show();
        return;
    }
    else{
        // Das sollte wirklich nie eintreten hilf
        // Sollte man vielleicht mal ein Throw reinpacken, hmm
    }
}

void MainWindow2::verloren(){
    VerlorenWindow *verlorenWindow = new VerlorenWindow();
    verlorenWindow->show();
    this->close();
}

MainWindow2::~MainWindow2()
{
    delete ui;
}

void MainWindow2::on_pushButtona1_clicked()
{
    if(this->a1bool){
       this->frageAuswaehlen();
    }
    else{
        this->verloren();
    }
}

void MainWindow2::on_pushButtona2_clicked()
{
    if(this->a2bool){
       this->frageAuswaehlen();
    }
    else{
        this->verloren();
    }
}

void MainWindow2::on_pushButtona3_clicked()
{
    if(this->a3bool){
       this->frageAuswaehlen();
    }
    else{
        this->verloren();
    }
}

void MainWindow2::on_pushButtona4_clicked()
{
    if(this->a4bool){
       this->frageAuswaehlen();
    }
    else{
        this->verloren();
    }
}
