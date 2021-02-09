#include <iostream>
#include <string>
#include "Player.hpp"
#include "Weapon.hpp"

using namespace std;

Player::Player(const char *namePlayer)
{
     this->namePlayer = namePlayer;
     this->Health = 100;
}

void Player::Display()
{
     cout << "This player is a " << this->namePlayer << endl;
     cout << "Player helth " << this->Health << endl;
     cout << "Using weapon " << this->weapon->getPlayerName();
     cout << " Attack power " << this->weapon->getAttackPower();
}

void Player::attackPlayer(Player *player)
{
     if (this->Health <= 0)
     {
          cout << this->namePlayer << " already die" << endl;
          cout << this->namePlayer << " coulnd't war" << endl;
     }
     else
     {
          cout << endl
               << this->namePlayer << " attack" << player->getName() << endl;
          player->playerDefense(this->weapon->getAttackPower());
     }
}

//Getter
string Player::getName()
{
     return this->namePlayer;
} 

//Setter
void Player::equipmentWeapon(Weapon *weapon)
{
     this->weapon = weapon;
}

void Player::playerDefense(double Damage)
{
     this->Health -= Damage;
     cout << this->namePlayer << " get damages " << Damage << endl;

     if (this->Health <= 0)
     {
          cout << this->namePlayer << " die" << endl;
     }
}