#ifndef RAUMSTATION_H
#define RAUMSTATION_H
#include <iostream>

#include <vector>

using namespace std;
class Raumschiff;

class Raumstation
{
private:
    string name;
    int energie;
    vector <Raumschiff*> ships;
public:
    Raumstation();
    void setRaumschiff(Raumschiff* r);
    void setName(string inName);
    void setEnergie(int inEnergie);
    string getName(void);
    int getEnergie(void);
    void betanken(Raumschiff* r, int inEnergie);
    void showShips();
};

#endif // RAUMSTATION_H
