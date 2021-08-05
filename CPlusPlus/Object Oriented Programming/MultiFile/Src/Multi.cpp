#include <iostream>
#include <string>
//External definition file
#include "Player.hpp"

using namespace std;

//How to run cpp program with external file in terminal (Windows)
//1. dir
//2. g++ Multi.cpp Player.cpp -o Multi.exe
//3. ./Multi.exe

//Main file object declared
int main(int argc, char const *argv[])
{
     Player *Player1 = new Player("Billy");
     Player1->displayData();

     cout << "Get name: " << Player1->getName() << endl;

     cout << "Change name, ";
     Player1->changeName("Franscois");
     Player1->displayData();

     return 0;
}

// Auto block comment (CTRL + K/C)
// Auto uncomment (CTRL + K/U)