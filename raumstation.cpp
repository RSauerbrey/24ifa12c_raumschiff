#include "raumstation.h"


Raumstation::Raumstation()
{
    cout << "Raumstation geboren" << endl;
}

void Raumstation::setName(string inName)
{
    name = inName;
}

void Raumstation::setEnergie(int inEnergie)
{
    energie = inEnergie;
}

string Raumstation::getName(void)
{
    return name;
}

int Raumstation::getEnergie(void)
{
    return energie;
}
