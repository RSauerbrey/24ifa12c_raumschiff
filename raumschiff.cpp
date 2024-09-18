#include "raumschiff.h"

Raumschiff::Raumschiff()
{
    cout << "Raumschiff geboren" << endl;
}

void Raumschiff::setName(string inName)
{
    name = inName;
}

void Raumschiff::setEnergie(int inEnergie)
{
    energie = inEnergie;
}

string Raumschiff::getName(void)
{
    return name;
}

int Raumschiff::getEnergie(void)
{
    return energie;
}

void Raumschiff::betanken(int inEnergie)
{
    //Raumschiff betanken
    energie = energie + inEnergie;
}
