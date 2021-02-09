#include <iostream>
#include <string>
#include "Weapon.hpp"
#include "Player.hpp"

using namespace std;

Weapon::Weapon(const char *weaponName, double attackPower)
{
     this->weaponName = weaponName;
     this->attackPower = attackPower;
}

//Getter
double Weapon::getAttackPower()
{
     return this->attackPower;
}

void Weapon::Display()
{
     cout << " Weapon is " << this->weaponName << endl;
     cout << " Attack power = " << this->attackPower << endl;
}

string Weapon::getPlayerName()
{
     return this->weaponName;
}