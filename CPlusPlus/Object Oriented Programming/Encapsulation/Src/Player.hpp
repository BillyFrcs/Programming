#ifndef __PLAYER
#define __PLAYER
#include <iostream>
#include <string>

#include "Weapon.hpp"

using namespace std;

class Player
{
private:
     string namePlayer;
     double Health;
     Weapon *weapon;

public:
     Player(const char *Name);

     void Display();

     void attackPlayer(Player *player);
     //Getter
     string getName();

     //Setter
     void equipmentWeapon(Weapon *);

private:
     void playerDefense(double);
};

#endif