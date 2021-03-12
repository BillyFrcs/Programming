#include <iostream>
#include <string>
#include "Data.hpp"

using namespace std;

//Run terminal
// g++ Main.cpp Data.cpp -o Main.exe
// ./Main

int main(int argc, char const *argv[])
{
     //Access data public
     Data *Student1 = new Data ("Billy");
     cout << "Name public: " << Student1 -> publicName << endl;

     //Access data private
     Data *Student2 = new Data ("Franscois");
     Student2->showDisplay();

     Data *Student3 = new Data ("Kolibonso");
     Student3 -> showDisplay();

     cin.get();
     return 0;
}