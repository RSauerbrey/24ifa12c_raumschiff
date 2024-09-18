#include "raumschiff.h"

Raumschiff::Raumschiff()
{
    save = new Rettungskapsel;
    cout << "Raumschiff geboren" << endl;
}

Raumschiff::~Raumschiff()
{
    delete save;
    cout << "Raumschiff " << name << "gekillt" << endl;
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

Rettungskapsel *Raumschiff::getRettung()
{
    return save;
}
