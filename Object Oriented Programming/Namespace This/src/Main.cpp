#include <iostream>
#include <string>

using namespace std;

//Data member
class Types
{
public:
     string dataStr;
     double dataDouble;
     double mDataDouble; //m is member

     Types(const char *dataStr, double dataDouble)
     {
          //With "namespace" from class
          Types::dataStr = dataStr;

          //Using "this"
          //cout << this << endl; //Contain address 
          cout << this->dataStr << endl; //Arrow to data
          this->dataDouble = dataDouble;

          //Using convention
          mDataDouble = dataDouble;
     }
};

//Member function
class Players
{
public:
     string Name;
     double Power;
     int Health;

     Players(const char *Name, double Power)
     {
          Players::setName(Name);
          this -> setPower(Power);
     }

     void setName(string Name)
     {
          this->Name = Name;
     }

     void setPower(double Power)
     {
          this->Power = Power;
     }

     void setHealth (int);
};

void Players::setHealth (int Health){
     this -> Health = Health;
}

int main(int argc, char const *argv[])
{
     Types *Object1 = new Types("Me", 19.8);
     cout << Object1->dataDouble << endl;
     cout << Object1->dataStr << endl;
     cout << Object1->mDataDouble << endl;

     //Called players
     Players *Player1 = new Players ("Billy", 900); 
     cout <<  Player1 -> Name << endl;
     Player1 -> setHealth(10);
     cout << Player1 -> Health << endl;

     return 0;
}