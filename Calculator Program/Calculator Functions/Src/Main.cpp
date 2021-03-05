#include <iostream>
#include "Header.hpp"

using namespace std;

//Prototype
void addition(float num1, float num2);

void subtraction(float num1, float num2);

void multiplication(float num1, float num2);

void division(float num1, float num2);

int main()
{

     float num1, num2;
     int arithmeticOperators;

//Ask input from user
menuCalculator: //Using function goto
     cout << "============================ \n";
     cout << "Billy's Calculator Functions" << endl;
     cout << "============================ \n \n";

     do
     {
          cout << "Enter first number: ";
          cin >> num1;
          break;
     } while (num1);

     cout << endl;

Arithmetic:
     do
     {
          cout << "1. Addition(+) \n2. Subtraction(-) \n3. Multiplication(*) \n4. Division(/) \nChoose number operator: ";
          cin >> arithmeticOperators;
          break;
     } while (arithmeticOperators);
     cout << endl;

     do
     {
          cout << "Enter second number: ";
          cin >> num2;
          break;
     } while (num2);

     cout << endl;

     //The algorithm for this calculator
     switch (arithmeticOperators)
     {
     case 1:
          addition(num1, num2);
          break;

     case 2:
          subtraction(num1, num2);
          break;

     case 3:
          multiplication(num1, num2);
          break;

     case 4:
          division(num1, num2);
          break;

     default:
          cout << "Operators valid! \n";
     }

     cout << endl;

//Continue or repeat the calculator
Continue:
     char continueCalculator;

     cout << "Wanna continue this calculator again ? (Y/N): ";
     cin >> continueCalculator;

     while (continueCalculator)
     {

          if (continueCalculator == 'y' || continueCalculator == 'Y')
          {
               goto menuCalculator; //This can use to comeback to menu calculator
          }
          else if (continueCalculator == 'n' || continueCalculator == 'N')
          {
               cout << "Thank's for using this calculator :)";
               break;
          }
          else
          {
               cout << "Not valid! please enter (y/n) \n";
               goto Continue;
               break;
          }
     }

     return 0;
}