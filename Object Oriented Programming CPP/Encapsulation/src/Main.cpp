#include <iostream>
#include <string>

#include "Player.hpp"
#include "Weapon.hpp"

using namespace std;

// Run terminal command
// 1. g++ Main.cpp Player.cpp Weapon.cpp -o Main.exe
// 2. ./Main

int main(int argc, char const *argv[])
{
     Player *Player1 = new Player("Rusher");
     Weapon *Weapon1 = new Weapon("M4", 50);
     //Implementasion setter for equipment weapon
     Player1->equipmentWeapon(Weapon1);
     Player1->Display();
     Weapon1->Display();

     cout << endl;

     Player *Player2 = new Player("Billy");
     Weapon *Weapon2 = new Weapon("AK47", 100);
     Player2->equipmentWeapon(Weapon2);
     Player2->Display();
     Weapon2->Display();

     //Player attack
     Player1->attackPlayer(Player2);
     Player2->attackPlayer(Player1);
     Player1->Display();
     Player2->Display();

     Player1->attackPlayer(Player2);
     Player2->attackPlayer(Player1);
     Player2->Display();
     Player2->Display();

     return 0;
}