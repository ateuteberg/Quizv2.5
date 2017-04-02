#include "mainwindow2.h"
#include "ui_mainwindow2.h"

MainWindow2::MainWindow2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow2)
{
    ui->setupUi(this);
/*
    std::vector<std::pair<QString, bool> > v;
    v.push_back(std::make_pair("A1", false));
    v.push_back(std::make_pair("A2", false));
    v.push_back(std::make_pair("A3", true));
    v.push_back(std::make_pair("A4", false));
    Frage f("test", v);
    this->buttonsBefuellen(f.frage, f.antworten); */
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

MainWindow2::~MainWindow2()
{
    delete ui;
}

void MainWindow2::on_pushButtona1_clicked()
{
    if(this->a1bool){
       // Nächste Frage
    }
}

void MainWindow2::on_pushButtona2_clicked()
{
    if(this->a2bool){
       // Nächste Frage
    }
}

void MainWindow2::on_pushButtona3_clicked()
{
    if(this->a3bool){
       // Nächste Frage
    }
}

void MainWindow2::on_pushButtona4_clicked()
{
    if(this->a4bool){
       // Nächste Frage
    }
}
