#include <iostream>

using namespace std;

void calculatorApp()
{
     system("clear");

     float num1, num2;
     char operators;

     cout << "<=== Billy Calculator ===>" << endl;

     cout << "Enter number and operation: ";
     cin >> num1 >> operators >> num2;

     switch (operators)
     {
     case '+':
          cout << num1 << operators << num2 << "=" << num1 + num2 << endl;
          break;

     case '-':
          cout << num1 << operators << num2 << "=" << num1 + num2 << endl;
          break;

     case '*':
          cout << num1 << operators << num2 << "=" << num1 * num2 << endl;
          break;

     case '/':
          cout << num1 << operators << num2 << "=" << num1 / num2 << endl;
          break;

     case '%':

          bool isNum1Int, isNum2Int;
          isNum1Int = ((int)num1 == num1);
          isNum2Int = ((int)num2 == num2);

          if (isNum1Int && isNum2Int)
               cout << num1 << operators << num2 << "=" << (int)num1 % (int)num2 << endl;

          else
               cout << "Not valid!" << endl;
          break;

     default:
          cout << "Not valid operator!" << endl;
     }
}

int main()
{
     calculatorApp();
     return 0;
}