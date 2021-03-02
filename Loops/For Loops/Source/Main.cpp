#include <iostream>

using namespace std;

//Factorial program with function
void factorialProgram()
{
     int Number, Factorial = 1;

     cout << "Enter number factorial: ";
     cin >> Number;

     for (int i = Number; i >= 1; i--)
     {
          Factorial = Factorial * i;
     }

     cout << "Result factorial " << Number << " is " << Factorial << "\n";
}

int main()
{
     //The factorial of a number
     int number, factorial = 1;

     cout << "Number factorial: ";
     cin >> number;

     for (int i = 1; i <= number; i++)
     {
          factorial = factorial * i;
     }

     cout << "Result factorial " << number << " is " << factorial << "\n";

     cout << endl;

     //Called function factorial program
     factorialProgram();

     cout << endl;

     //For jump to next value (continue)
     for (int i = 0; i < 10; i++)
     {
          if (i == 4)
          {
               continue;
          }

          cout << i << endl;
     }

     cin.get();
}