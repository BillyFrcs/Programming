#ifndef __PLAYERS
#define __PLAYERS
#include <iostream>
#include <string>

using namespace std;

//Encapsulation (Prototype)
class Players
{
private:
     string namePlayer;
     int levelPlayer;
     int expPlayer;
     double attackPowerPlayer;

public:
     Players(const char *namePlayer);

     //Getter this means make attribute be to read only (couldn't change data)
     string getNamePlayer();

     //Setter for write data to class (can change data)
     void addPlayerExperiece(int expValuePlayer);

     void displayPlayer();
};

#endif