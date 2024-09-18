#ifndef RETTUNGSKAPSEL_H
#define RETTUNGSKAPSEL_H

class Rettungskapsel
{
    int belegung;
    int maxBelegung;
public:
    Rettungskapsel();
    void belegungAdd();
    int getMaxBelegung();
    int getAktuelleBelegung();
};

#endif // RETTUNGSKAPSEL_H
