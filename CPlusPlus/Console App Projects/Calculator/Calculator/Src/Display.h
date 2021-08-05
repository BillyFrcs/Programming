#pragma once

#include "Calculator.h"

void displayCalculator()
{

     double num1, num2;
     int arithmeticOperators;

     cout << "============================ \n";
     cout << "Billy's Calculator Functions" << endl;
     cout << "============================ \n \n";

     //User choose operator
     do
     {
          cout << "1. Addition(+) \n";
          cout << "2. Subtraction(-) \n";
          cout << "3. Multiplication(*) \n";
          cout << "4. Division(/) \n";
          cout << "5. Modulo(%) \n\n";

          cout << "Choose number operator: ";
          cin >> arithmeticOperators;
          break;

     } while (arithmeticOperators);

     cout << endl;

     //User enter first number
     do
     {
          cout << "Enter first number: ";
          cin >> num1;
          break;
     } while (num1);

     cout << endl;

     //User enter second number
     do
     {
          cout << "Enter second number: ";
          cin >> num2;
          break;
     } while (num2);

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
          cout << "Operators valid try again! \n";
     }
}