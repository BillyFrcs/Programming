#ifndef CALCULATOR_APP
#define CALCULATOR_APP
#include <iostream>

using namespace std;

//Penjabaran/algebra the calculator
//This index array use for show operators
char arithmeticOperators[6] = {'+', '-', '*', '/', '%'};

//Function addition operator
void addition(double num1, double num2)
{
     cout << endl;
     cout << "Result Addition: " << num1 << " " << arithmeticOperators[0] << " " << num2 << " = " << num1 + num2 << endl;
}

//Function subtraction operator
void subtraction(double num1, double num2)
{
     cout << endl;
     cout << "Result Subtraction: " << num1 << " " << arithmeticOperators[1] << " " << num2 << " = " << num1 - num2 << endl;
}

//Function multiplication operator
void multiplication(double num1, double num2)
{
     cout << endl;
     cout << "Result Multiplication: " << num1 << " " << arithmeticOperators[2] << " " << num2 << " = " << num1 * num2 << endl;
}

//Function division operator
void division(double num1, double num2)
{
     cout << endl;
     cout << "Result Division: " << num1 << " " << arithmeticOperators[3] << " " << num2 << " = " << num1 / num2 << endl;
}

//Function modulo operator (still develop this operator)
void modulo(double num1, double num2)
{
     cout << endl;
     bool isNum1, isNum2;
     isNum1 = ((double)num1 == num1);
     isNum2 = ((double)num2 == num2);

     if (isNum1 && isNum2)
          cout << "Result modulo: " << num1 << " " << arithmeticOperators[4] << " " << num2 << " = " << (int)num1 % (int)num2 << endl;
}

#endif