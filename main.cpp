#include <iostream>
#include "raumschiff.h"
#include "raumstation.h"

using namespace std;

int main()
{
    Raumschiff *r = new Raumschiff;
    Raumstation *s = new Raumstation;

    s->setRaumschiff(r);
    r->setName("Enterprise");
    s->setName("Alpha 1");

    s->betanken(r, 1000);
    cout << r->getName() << endl;
    cout << s->getName() << endl;

    return 0;
}
