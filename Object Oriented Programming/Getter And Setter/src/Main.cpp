#include <iostream>
#include <string>
#include "Players.hpp"

using namespace std;

//Run in terminal
// 1. g++ Main.cpp Players.cpp -o Players.exe
// 2. ./Players

int main(int argc, char const *argv[])
{
     Players Player1 = Players("Billy");
     Player1.displayPlayer();

     //Implementation getter
     cout << Player1.getNamePlayer() << endl;

     cout << endl;

     //Player doing fight
     cout << "Player fight" << endl; //Implementation setter
     Player1.addPlayerExperiece(40);
     Player1.displayPlayer();

     Player1.addPlayerExperiece(30);
     Player1.displayPlayer();

     Player1.addPlayerExperiece(20);
     Player1.displayPlayer();

     Player1.addPlayerExperiece(10);
     Player1.displayPlayer();

     cout << endl;

     //Result player
     Player1.displayPlayer();

     cout << endl;

     //Player doing fight again
     cout << "Player fight again" << endl;
     Player1.addPlayerExperiece(40);
     Player1.displayPlayer();

     Player1.addPlayerExperiece(30);
     Player1.displayPlayer();

     Player1.addPlayerExperiece(20);
     Player1.displayPlayer();

     Player1.addPlayerExperiece(10);
     Player1.displayPlayer();

     return 0;
}