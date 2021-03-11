#include <iostream>

using namespace std;

void validationPinProgram()
{
     int userPin = 1234, Pin, errorCounter = 0; // User should enter 1234 fro validation

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

     cout << endl << endl;

     int i = 0;

     do
     {
          cout << i << "\n";
          i++;
     } while (i < 6);

     return 0;
}