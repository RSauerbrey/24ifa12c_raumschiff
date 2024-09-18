#include <iostream>
#include "raumschiff.h"
#include "raumstation.h"

using namespace std;

int main()
{
    Raumschiff *r = new Raumschiff;
    Raumstation *s = new Raumstation;

    r->setName("Enterprise");
    s->setName("Alpha 1");

    cout << r->getName() << endl;
    cout << s->getName() << endl;

    return 0;
}
