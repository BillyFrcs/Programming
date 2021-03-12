#include <iostream>
#include <string>
#include "Players.hpp"

using namespace std;

Players::Players(const char *namePlayer)
{
     this->namePlayer = namePlayer;
     this->levelPlayer = 1;
     this->expPlayer = 0;
     this->attackPowerPlayer = 100;
}

//Getter this means make attribute be to read only (couldn't change data)
string Players::getNamePlayer()
{
     return this->namePlayer;
}

//Setter for write data to class (can change data)
void Players::addPlayerExperiece(int expValuePlayer)
{
     int maxExpPlayer = 100;
     cout << "Player get exp = " << expValuePlayer << endl;
     this->expPlayer += expValuePlayer;
     cout << this->expPlayer << endl;

     if (this->expPlayer >= maxExpPlayer)
     {
          //Player can level up
          this->levelPlayer++;
          this->attackPowerPlayer += 100;
          cout << "Player level up" << endl;
          this->expPlayer = 0;
     }
}

void Players::displayPlayer()
{
     cout << "Name player: " << this->namePlayer << endl;
     cout << "Level player: " << this->levelPlayer << endl;
     cout << "Attack power player: " << this->attackPowerPlayer << endl;
}