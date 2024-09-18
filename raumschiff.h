#ifndef RAUMSCHIFF_H
#define RAUMSCHIFF_H

#include <iostream>
using namespace std;

class Raumschiff
{
private:
    string name;
    int energie;
    int x;
    int y;
public:
    Raumschiff();
    void setName(string inName);
    void setEnergie(int inEnergie);
    string getName(void);
    int getEnergie(void);
};

#endif // RAUMSCHIFF_H
