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

int main()
{
     //Called function nesting program here
     nestingProgram();

     return 0;
}