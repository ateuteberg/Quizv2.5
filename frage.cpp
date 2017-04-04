#include "frage.h"

Frage::Frage(QString f, std::vector<std::pair<QString, bool> > a) //werden beim erstellen übergeben un durchgemischt
{
    this->frage = f;
    std::random_shuffle(a.begin(), a.end());
    this->antworten = a;
}
