#include <iostream>

using namespace std;

int main()
{

     //Concepts
     /*try {
        Block of code to try
       throw exception; // Throw an exception when a problem arise
     }
     catch () {
        Block of code to handle errors
     }*/

     try
     {
          int age;

          cout << "Enter age: ";
          cin >> age;

          if (age >= 18)
          {
               cout << "Access available" << endl;
          }
          else
          {
               throw age; //This can change with 505 or (age)
          }
     }

     catch (int myAge) //It can change to (...)
     {
          cout << "Access not available" << endl;
          cout << "Age still " << myAge;
     }

     return 0;
}