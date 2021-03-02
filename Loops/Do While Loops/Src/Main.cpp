#include <iostream>

using namespace std;

void validationPinProgram()
{
     int userPin = 1234, Pin, errorCounter = 0;

     do
     {
          cout << "Enter PIN: ";
          cin >> Pin;

          if (Pin != userPin)
               errorCounter++;

     } while (errorCounter < 3 && Pin != userPin);

     if (errorCounter < 3)
          cout << "Loading...";

     else
          cout << "Blocked...";
}

int main()
{
     //Pin validation program
     validationPinProgram();

     return 0;
}