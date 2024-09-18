#include <iostream>
#include <string>
#include "raumschiff.h"
#include "raumstation.h"

using namespace std;

int main()
{
    Raumstation *s = new Raumstation;
    Raumschiff *r[4];
    Rettungskapsel *merker[4];

    s->setName("Station 1");
    s->setEnergie(1000000);

    for(int i=0; i< 4;i++)
    {
        r[i] = new Raumschiff;
        string str = "Ship ";
        r[i]->setName(str.append(to_string(i)));
        r[i]->setEnergie(10000);
        s->setRaumschiff(r[i]);
        merker[i] = r[i]->getRettung();
    }


    s->betanken(r[0], 1000);

    //s->showShips();

    //delete r[0];

    //cout << r[0]->getEnergie() << endl;

    for(int i=0; i< 4;i++)
    {
        delete r[i];
    }

    return 0;
}
