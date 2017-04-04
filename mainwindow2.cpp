#include "mainwindow2.h"
#include "ui_mainwindow2.h"

MainWindow2::MainWindow2(QWidget *parent) : //konstruktor, sobald ein Objekt gestarten wird läuft der Konstruktor ab
    QMainWindow(parent),
    ui(new Ui::MainWindow2)
{
    ui->setupUi(this);
    this->fragenCounter = 0; // wird benötigt für Schwierigkeit
    /*
    std::vector<std::pair<QString, bool> > v;
    v.push_back(std::make_pair("A1", false));
    v.push_back(std::make_pair("A2", false));
    v.push_back(std::make_pair("A3", true));
    v.push_back(std::make_pair("A4", false));
    Frage f("test", v); // Konstruktor frage wird gestartet
    this->buttonsBefuellen(f.frage, f.antworten);
    */

    //leicht

    std::vector<std::pair<QString, bool>>vfl1;
    vfl1.push_back(std::make_pair("Jemand wird erschossen",false));
    vfl1.push_back(std::make_pair("Bank wird gesprengt",false));
    vfl1.push_back(std::make_pair("Bürgermeister wird gewählt",false));
    vfl1.push_back(std::make_pair("Zug kommt an",true));
    Frage fl1("Was passiert in dem Western-Klassiker'Zwölf Uhr mittags'um Punkt zwölf Uhr mittags?",vfl1);
    fragenLeicht.push_back(fl1);

    std::vector<std::pair<QString, bool>>vfl2;
    vfl2.push_back(std::make_pair("Oblivion",false));
    vfl2.push_back(std::make_pair("TES Online",false));
    vfl2.push_back(std::make_pair("Morrowind",false));
    vfl2.push_back(std::make_pair("Skyrim",true));
    Frage fl2("Wie heißt der fünft Teil von The Elder Scrolls",vfl2);
    fragenLeicht.push_back(fl2);

    std::vector<std::pair<QString, bool>>vfl3;
    vfl3.push_back(std::make_pair("Mario Götze",false));
    vfl3.push_back(std::make_pair("Jürgen Klinsmann",false));
    vfl3.push_back(std::make_pair("Mario Basler",false));
    vfl3.push_back(std::make_pair("Lukas Podolski",true));
    Frage fl3("Welcher Fußballspieler hat am häufigsten die Auszeichnung 'Tor des Monats' erhalten?",vfl3);
    fragenLeicht.push_back(fl3);

    std::vector<std::pair<QString, bool>>vfl4;
    vfl4.push_back(std::make_pair("Direkt",false));
    vfl4.push_back(std::make_pair("Durchfahrt",false));
    vfl4.push_back(std::make_pair("Drehstrom",false));
    vfl4.push_back(std::make_pair("Durchgang",true));
    Frage fl4("Wofür steht das D in D-Zug?",vfl4);
    fragenLeicht.push_back(fl4);

    std::vector<std::pair<QString, bool>>vfl5;
    vfl5.push_back(std::make_pair("Gans",false));
    vfl5.push_back(std::make_pair("Elster",false));
    vfl5.push_back(std::make_pair("Adler",false));
    vfl5.push_back(std::make_pair("Schwalbe",true));
    Frage fl5("Welcher Vogel gilt als 'Muttergottesvogel'?",vfl5);
    fragenLeicht.push_back(fl5);

    std::vector<std::pair<QString, bool>>vfl6;
    vfl6.push_back(std::make_pair("Schiffffahrt",false));
    vfl6.push_back(std::make_pair("Schifahrt",false));
    vfl6.push_back(std::make_pair("Schiffahrt",false));
    vfl6.push_back(std::make_pair("Schifffahrt",true));
    Frage fl6("Welches Wort ist richtig geschrieben??",vfl6);
    fragenLeicht.push_back(fl6);



    //mittel

    std::vector<std::pair<QString, bool>>vfm1;
    vfm1.push_back(std::make_pair("Kalzium",false));
    vfm1.push_back(std::make_pair("Kohlenstoff",false));
    vfm1.push_back(std::make_pair("Wasserstoff",false));
    vfm1.push_back(std::make_pair("Sauerstoff",true));
    Frage fm1("Welches chemische Element macht mehr als die Hälfte der Masse eines Menschlichen Körpers aus?",vfm1);
    fragenMittel.push_back(fm1);

    std::vector<std::pair<QString, bool>>vfm2;
    vfm2.push_back(std::make_pair("Mitten im Pazifik am 14.April.1912",false));
    vfm2.push_back(std::make_pair("vor der Küste von Liverpool am 23.April.1921",false));
    vfm2.push_back(std::make_pair("östlich vor Grönland am 16.März.1916",false));
    vfm2.push_back(std::make_pair("südöstlich vor Neufundland am 14. April.1912",true));
    Frage fm2("Wann und wo ist die Titanic gesunken?",vfm2);
    fragenMittel.push_back(fm2);

    std::vector<std::pair<QString, bool>>vfm3;
    vfm3.push_back(std::make_pair("17.25%",false));
    vfm3.push_back(std::make_pair("gar keiner",false));
    vfm3.push_back(std::make_pair("im Ermessen des Besitzers",false));
    vfm3.push_back(std::make_pair("30.010€",true));
    Frage fm3("Wie viel Finderlohn steht laut §971 BGB dem ehrlichen Finder von 1 Million Euro zu?",vfm3);
    fragenMittel.push_back(fm3);

    std::vector<std::pair<QString, bool>>vfm4;
    vfm4.push_back(std::make_pair("Luisa",false));
    vfm4.push_back(std::make_pair("Kathrina",false));
    vfm4.push_back(std::make_pair("Sofia",false));
    vfm4.push_back(std::make_pair("Maria",true));
    Frage fm4("Wie hieß die Mutter von Ezio Auditore in Assassin´s Creed 2?",vfm4);
    fragenMittel.push_back(fm4);

    std::vector<std::pair<QString, bool>>vfm5;
    vfm5.push_back(std::make_pair("tim und Struppi",false));
    vfm5.push_back(std::make_pair("Fix und Foxi",false));
    vfm5.push_back(std::make_pair("Mickey und Goofy",false));
    vfm5.push_back(std::make_pair("Asterix und Obelix",true));
    Frage fm5("Welches Duo erlebte in Deutschland als ´Siggi'und ´Babarras´ seine ersten Abenteuer?",vfm5);
    fragenMittel.push_back(fm5);

    //schwer

    std::vector<std::pair<QString, bool>>vfs1;
    vfs1.push_back(std::make_pair("Regierungssprecher",false));
    vfs1.push_back(std::make_pair("Familienminster",false));
    vfs1.push_back(std::make_pair("Botschafter in Mexiko",false));
    vfs1.push_back(std::make_pair("Nationalbankchef",true));
    Frage fs1("Welchen Posten bekam Ernesto ´Che´'Guevara 1959 nach der Machtübernahme Castros in Kuba?",vfs1);
    fragenSchwer.push_back(fs1);

    std::vector<std::pair<QString, bool>>vfs2;
    vfs2.push_back(std::make_pair("",false));
    vfs2.push_back(std::make_pair("Blaue Mauritius",false));
    vfs2.push_back(std::make_pair("Gelber Dreier",false));
    vfs2.push_back(std::make_pair("Schwarzer Einser",true));
    Frage fs2("Wie heißt die erste deutsche Briefmarke, die 1849 in Bayern herrausgegeben wurde?",vfs2);
    fragenSchwer.push_back(fs2);

    std::vector<std::pair<QString, bool>>vfs3;
    vfs3.push_back(std::make_pair("Tornados",false));
    vfs3.push_back(std::make_pair("Tsunamis",false));
    vfs3.push_back(std::make_pair("Vulkans",false));
    vfs3.push_back(std::make_pair("Asteroiden",true));
    Frage fs3("Anhand der Turiner Skala klassifiziert man die potenzielee Gefährlichkeit eines...??",vfs3);
    fragenSchwer.push_back(fs3);

    std::vector<std::pair<QString, bool>>vfs4;
    vfs4.push_back(std::make_pair("mehr als 1000 meter",false));
    vfs4.push_back(std::make_pair("genau 62,5m",false));
    vfs4.push_back(std::make_pair("weniger als 1m",false));
    vfs4.push_back(std::make_pair("mehr als 200m",true));
    Frage fs4("Wie viel Meter Unterschied liegen zwischen Mount Everest und K 2, dem höchsten und dem zweithöchsten Berg der Welt?",vfs4);
    fragenSchwer.push_back(fs4);

    std::vector<std::pair<QString, bool>>vfs5;
    vfs5.push_back(std::make_pair("Der schwerste Mensch der Welt",false));
    vfs5.push_back(std::make_pair("Eine Feder",false));
    vfs5.push_back(std::make_pair("Ein Stein",false));
    vfs5.push_back(std::make_pair("Die Luft",true));
    Frage fs5("Es ist leicht wie eine Feder und doch kann der stärkste Mann der Welt ihn keine 5 Minuten lang halten ?",vfs5);
    fragenSchwer.push_back(fs5);

}

void MainWindow2::buttonsBefuellen(QString f, std::vector<std::pair<QString, bool> > a)
{
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

int MainWindow2::randomZahlGenerieren(int startzahl, int endzahl)
{
    // https://de.wikipedia.org/wiki/Mersenne-Twister
    std::mt19937 random;   //mt19937 ist fürs randomzahlen generiern
    random.seed(std::random_device()());
    std::uniform_int_distribution<std::mt19937::result_type> dist(startzahl,endzahl);
    return dist(random);
}

void MainWindow2::frageAuswaehlen()
{
    this->fragenCounter++;

    if (fragenCounter > 5)
    {
        int indexzahl;
        do
        {
            indexzahl = this->randomZahlGenerieren(0, this->fragenLeicht.size()-1);
        }
        while(std::find(this->benutzteFragenLeicht.begin(), this->benutzteFragenLeicht.end(), indexzahl) != this->benutzteFragenLeicht.end());
        this->benutzteFragenLeicht.push_back(indexzahl);
        this->buttonsBefuellen(this->fragenLeicht[indexzahl].frage, this->fragenLeicht[indexzahl].antworten);
        return;
    }

    else if (fragenCounter > 10)
    {
        int indexzahl;
        do
        {
            indexzahl = this->randomZahlGenerieren(0, this->fragenMittel.size()-1);
        }
        while(std::find(this->benutzteFragenMittel.begin(), this->benutzteFragenMittel.end(), indexzahl) != this->benutzteFragenMittel.end());
        this->benutzteFragenMittel.push_back(indexzahl);
        this->buttonsBefuellen(this->fragenMittel[indexzahl].frage, this->fragenMittel[indexzahl].antworten);
        return;
    }

    else if (fragenCounter > 15)
    {
        int indexzahl;
        do
        {
            indexzahl = this->randomZahlGenerieren(0, this->fragenSchwer.size()-1);
        }
        while(std::find(this->benutzteFragenSchwer.begin(), this->benutzteFragenSchwer.end(), indexzahl) != this->benutzteFragenSchwer.end());
        this->benutzteFragenSchwer.push_back(indexzahl);
        this->buttonsBefuellen(this->fragenSchwer[indexzahl].frage, this->fragenSchwer[indexzahl].antworten);
        return;
    }

    else if (fragenCounter == 15)
    {
        gewonnenwindow *gewonnenWindow = new gewonnenwindow();
        gewonnenWindow->show();
        return;
    }
    else
    {
        // Das sollte wirklich nie eintreten hilf
        // Sollte man vielleicht mal ein Throw reinpacken, hmm
    }
}

void MainWindow2::verloren()
{
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
    if(this->a1bool)
    {
       this->frageAuswaehlen();
    }
    else{
        this->verloren();
    }
}

void MainWindow2::on_pushButtona2_clicked()
{
    if(this->a2bool)
    {
       this->frageAuswaehlen();
    }
    else{
        this->verloren();
    }
}

void MainWindow2::on_pushButtona3_clicked()
{
    if(this->a3bool)
    {
       this->frageAuswaehlen();
    }
    else{
        this->verloren();
    }
}

void MainWindow2::on_pushButtona4_clicked()
{
    if(this->a4bool)
    {
       this->frageAuswaehlen();
    }
    else{
        this->verloren();
    }
}
