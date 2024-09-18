#ifndef RAUMSCHIFF_H
#define RAUMSCHIFF_H

#include "raumstation.h"
#include <iostream>
#include "rettungskapsel.h"

using namespace std;

class Raumschiff
{
private:
    string name;
    int energie;
    int x;
    int y;
    Raumstation* station;
    Rettungskapsel *save = nullptr;
public:
    Raumschiff();
    ~Raumschiff();
    void setName(string inName);
    void setEnergie(int inEnergie);
    string getName(void);
    int getEnergie(void);
    void betanken(int inEnergie);
    Rettungskapsel *getRettung();
};

#endif // RAUMSCHIFF_H
