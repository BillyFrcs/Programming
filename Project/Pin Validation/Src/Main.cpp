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

int main(int, char **)
{
     validationPinProgram();

     __debugbreak;
}