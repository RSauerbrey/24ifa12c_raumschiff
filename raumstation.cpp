#include "raumstation.h"
#include "raumschiff.h"

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

void Raumstation::betanken(Raumschiff* r, int inEnergie)
{
    //Raumschiff betanken
    r->betanken(inEnergie);
    energie = energie - inEnergie;
}

 void Raumstation::setRaumschiff(Raumschiff* r)
{
     ships.push_back(r);
}

void Raumstation::showShips()
{
    for(int i = 0; i< ships.size(); i++)
    {
        cout << ships[i]->getName() << endl;
        cout << ships[i]->getEnergie() << endl;
    }
}
