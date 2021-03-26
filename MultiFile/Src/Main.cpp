#include <iostream>
#include "Functions.hpp"

using namespace std;

int main()
{

     dataDeveloper *dataDeveloper1 = new dataDeveloper("Billy", 18);

     dataDeveloper1->showDataDeveloper();

     cout << endl;

     std::cout << say_hi("Billy");

}