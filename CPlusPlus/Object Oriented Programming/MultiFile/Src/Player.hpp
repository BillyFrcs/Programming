#ifndef __PLAYER
#define __PLAYER
#include <iostream>
#include <string>

using namespace std;

//Class is here
class Player
{
public:
     string Name;

     Player(const char *Name);

     void displayData();

     string getName();

     void changeName(char const *Name);
};

#endif