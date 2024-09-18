#ifndef RAUMSTATION_H
#define RAUMSTATION_H
#include <iostream>
using namespace std;

class Raumstation
{
private:
    string name;
    int energie;
public:
    Raumstation();
    void setName(string inName);
    void setEnergie(int inEnergie);
    string getName(void);
    int getEnergie(void);
};

#endif // RAUMSTATION_H
