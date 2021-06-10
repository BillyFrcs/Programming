#include <iostream>
#include <string>

using namespace std;

class Player
{
public:
          //Data type
     string Name;

     //Constructor (Prototype)
     Player(const char *Name); //Remember pointer is variables

     //Prototype Display player
     void Display();

     string getName();

     void changeName(const char *Name);
};

int main(int argc, char const *argv[])
{
     //Heap
     Player *playerObject = new Player("Billy");
     playerObject->Display();

     cout << "Get name: " << playerObject->getName() << endl;

     cout << "Change name, ";
     playerObject->changeName("Franscois");
     playerObject->Display();

     return 0;
}

//Penjabaran method player (Prototype)
Player::Player(const char *Name)
{
     this->Name = Name;
}

void Player::Display()
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