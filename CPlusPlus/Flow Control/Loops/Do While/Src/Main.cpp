#include <iostream>

void validationPinProgram()
{
     int userPin = 19082002, Pin, errorCounter = 0; // User should enter 1234 fro validation

     do
     {
          std::cout << "Enter PIN: ";
          std::cin >> Pin;

          if (Pin != userPin)
               errorCounter++;

     } while (errorCounter < 3 && Pin != userPin);

     if (errorCounter < 3)
          std::cout << "Loading...";

     else
          std::cout << "Blocked...";
}

void showAlphabets()
{
     char a = 'a';

     do
     {
          std::cout << a << std::endl;
          a++;
     } while (a <= 'z');
}

void guessingNum()
{
     long n;

     do
     {
          std::cout << "Enter guessing number: ";
          std::cin >> n;

          if (n != 19)
          {
               std::cout << n << " is wrong" << std::endl;
          }
     } while (n != 19);

     std::cout << n << " is right" << std::endl;
}

int main()
{
     int z = 0;
     bool condition = true;

     do
     {
          std::cout << "Billy \n";
          z++;

          if (!(z < 10))
               condition = false;

     } while (condition);

     std::cout << std::endl;

     //Pin validation program
     validationPinProgram();

     std::cout << std::endl;

     int i = 0;

     do
     {
          std::cout << i << "\n";
          i++;
     } while (i < 6);

     std::cout << std::endl;

     showAlphabets();

     std::cout << std::endl;

     guessingNum();

     return 0;
}