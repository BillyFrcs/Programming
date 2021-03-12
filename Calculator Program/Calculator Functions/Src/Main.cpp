#include <iostream>
#include "HeaderCalculator.hpp"

using namespace std;

//Prototype functions
void addition(double num1, double num2);

void subtraction(double num1, double num2);

void multiplication(double num1, double num2);

void division(double num1, double num2);

int main()
{
     //"clear" is only available on linux and mac
     system("cls"); //For clear console using "cls" if run on windows

     float num1, num2;
     int arithmeticOperators;

//Ask input from user
menuCalculator: //Using function goto
     cout << "============================ \n";
     cout << "Billy's Calculator Functions" << endl;
     cout << "============================ \n \n";

     //User enter first number
     do
     {
          cout << "Enter first number: ";
          cin >> num1;
          break;
     } while (num1);

     cout << endl;

//User choose operator
Arithmetic:
     do
     {
          cout << "1. Addition(+) \n2. Subtraction(-) \n3. Multiplication(*) \n4. Division(/) \n5. Modulo(%)\n\nChoose number operator: ";
          cin >> arithmeticOperators;
          break;
     } while (arithmeticOperators);
     cout << endl;

     //User enter second number
     do
     {
          cout << "Enter second number: ";
          cin >> num2;
          break;
     } while (num2);

     //The algorithm for this calculator
     switch (arithmeticOperators)
     {
          //Called function operators
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

     case 5:
          modulo(num1, num2);
          break;

     default:
          cout << "Operators valid try again !\n";
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
               system("cls");       //Change to "cls" when run on windows
               goto menuCalculator; //This can use to comeback to the calculator menu
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

     cin.get();
     return 0;
}