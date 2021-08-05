#ifndef __DATA
#define __DATA
#include <iostream>
#include <string>

using namespace std;

//Encapsulation
class Data
{
     //using prototype
     //Attribute
public: //Can access all
     string publicName;

private: //Couldn't access all only access in class
     string privateName;
     //Method and constructor
public:
     //Constructor always using public
     Data(const char *Name);
     void showDisplay();

private:
     //Access name private
     void showPrivateName();
};

#endif