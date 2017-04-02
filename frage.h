#ifndef FRAGE_H
#define FRAGE_H

#include <QString>
#include <algorithm>
#include <vector>
#include <utility>

class Frage
{
public:
    Frage(QString f, std::vector<std::pair<QString, bool> > a);
    QString frage;
    std::vector<std::pair<QString, bool> > antworten;
};

#endif // FRAGE_H
