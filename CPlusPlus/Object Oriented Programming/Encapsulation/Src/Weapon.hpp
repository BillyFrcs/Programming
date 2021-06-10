#ifndef __WEAPON
#define __WEAPON
#include <iostream>
#include <string>

using namespace std;

class Weapon
{
private:
     string weaponName;
     double attackPower;

public:
     Weapon(const char *, double);

     void Display();
     
     //Getter read only
     double getAttackPower();
     string getPlayerName();
};

#endif