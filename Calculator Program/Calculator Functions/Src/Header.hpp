#ifndef CALCULATOR_APP
#define CALCULATOR_APP
#include <iostream>

using namespace std;

//Penjabaran calculator
//This index array use for show operators
char arithmeticOperators[4] = {'+', '-', '*', '/'};

void addition(float num1, float num2)
{
     cout << "Result Addition: " << num1 << " " << arithmeticOperators[0] << " " << num2 << " = " << num1 + num2 << endl;
}

void subtraction(float num1, float num2)
{
     cout << "Result Subtraction: " << num1 << " " << arithmeticOperators[1] << " " << num2 << " = " << num1 - num2 << endl;
}

void multiplication(float num1, float num2)
{
     cout << "Result Multiplication: " << num1 << " " << arithmeticOperators[2] << " " << num2 << " = " << num1 * num2 << endl;
}

void division(float num1, float num2)
{
     cout << "Result Division: " << num1 << " " << arithmeticOperators[3] << " " << num2 << " = " << num1 / num2 << endl;
}

#endif