#include <iostream>
#include <string>
#include "Player.hpp"

using namespace std;

//Penjabaran functions
Player::Player(const char *Name)
{
     this->Name = Name;
}

void Player::displayData()
{
     cout << "Player name: " << this->Name << endl;
}

string Player::getName()
{
     return this->Name;
}

void Player::changeName(const char *Name)
{
     this->Name = Name;
}