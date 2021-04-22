#include <iostream>

int main(int, char**)
{

     //Concepts
     /**try {
        * * Block of code to try
       * ! throw exception; // Throw an exception when a problem arise
     }
     catch () {
        Block of code to handle errors
     }*/

     try
     {
          int age;

          std::cout << "Enter age: ";
          std::cin >> age;

          if (age >= 18)
          {
               std::cout << "Access available" << std::endl;
          }
          else
          {
               throw age; //This can change with 505 or (age)
          }
     }

     catch (int myAge) //It can change to (...)
     {
          std::cout << "Access not available" << std::endl;
          std::cout << "Age still " << myAge << std::endl;
     }

     return 0;
}