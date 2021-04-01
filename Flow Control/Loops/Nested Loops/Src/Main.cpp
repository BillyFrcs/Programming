#include <iostream>

using namespace std;

void nestingProgram()
{
     //Nesting for do while loops
     int grade, sum = 0;

     for (int i = 0; i < 3; i++)
     {
          do
          {
               cout << "Enter grade " << i + 1 << " : ";
               cin >> grade;

          } while (grade < 1 || grade > 5);
          sum += grade;
     }

     cout << "Sum = " << sum << endl;
     cout << "Average grade = " << (float) sum / 3.0 << endl;
}

void factorialProgram(){ 

     int Number, Factorial = 1;

     cout << "Enter number factorial function: ";
     cin >> Number;

     for (int i = Number; i >= 1; i--)
     {
          Factorial *= i;
     }

     cout << "Result factorial function " << Number << " is " << Factorial << "\n";
}

int main()
{
     //Called function nesting program here
     nestingProgram();

     cout << endl;

     factorialProgram();

     return 0;
}