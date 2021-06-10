#include <iostream>
#include <string>
#include "Data.hpp"

using namespace std;

//Methods and function here
Data::Data(const char *Name) //Add namespace
{
     this->publicName = Name;
     this->privateName = Name;
}

void Data::showDisplay() //Add namespace
{
     cout << "Name private: " << this->privateName << endl;
}

void Data::showPrivateName() //Also add namespace here
{
     cout << "Name private: " << this->privateName << endl;
}