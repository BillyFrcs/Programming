#ifndef __DATADEVELOPER
#define __DATADEVELOPER
#include <iostream>
#include <string>

using namespace std;

class dataDeveloper
{
public:
     string name;
     int age;

     dataDeveloper(string name, int age)
     {
          this->name = name;
          this->age = age;
     }

     void showDataDeveloper()
     {
          cout << "Name " << this->name << endl;
          cout << "Age " << this->age << endl;
     }
};

std::string say_hi(std::string name);

#endif