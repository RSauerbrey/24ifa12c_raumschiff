#include "rettungskapsel.h"
#include <iostream>
using namespace std;

Rettungskapsel::Rettungskapsel()
{
    cout << "Rettungskapsel erzeugt" << endl;
}

Rettungskapsel::~Rettungskapsel()
{
    cout << "Rettungskapsel gekillt" << endl;
}

void Rettungskapsel::belegungAdd()
{
    if(belegung < maxBelegung)
        belegung++;


}

int Rettungskapsel::getMaxBelegung()
{
    return 0;
}

int Rettungskapsel::getAktuelleBelegung()
{
    return 0;
}
