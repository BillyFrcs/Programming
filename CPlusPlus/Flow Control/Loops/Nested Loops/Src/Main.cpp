#include <iostream>

void nestingProgram()
{
     //Nesting for do while loops
     int grade, sum = 0;

     for (int i = 0; i < 3; i++)
     {
          do
          {
               std::cout << "Enter grade " << i + 1 << " : ";
               std::cin >> grade;

          } while (grade < 1 || grade > 5);
          sum += grade;
     }

     std::cout << "Sum = " << sum << std::endl;
     std::cout << "Average grade = " << (float)sum / 3.0 << std::endl;
}

void factorialProgram()
{

     int Number, Factorial = 1;

     std::cout << "Enter number factorial function: ";
     std::cin >> Number;

     for (int i = Number; i >= 1; i--)
     {
          Factorial *= i;
     }

     std::cout << "Result factorial function " << Number << " is " << Factorial << "\n";
}

void multiplicationProgram()
{
     for (auto i = 1; i <= 10; ++i)
     {
          for (auto j = 1; j <= 10; ++j)
          {
               std::cout << i << " * " << j << " = " << i * j << "\n";
          }
          std::cout << "\n";
     }
}

void multiplyProgramWhile()
{
     int i = 10;

     while (i >= 1)
     {
          int j = 10;
          while (j >= 1)
          {
               std::cout << i << " * " << j << " = " << i * j << "\n";
               --j;
          }
          --i;
          std::cout << "\n";
     }
}

int main()
{
     //Called function nesting program here
     nestingProgram();

     std::cout << "\n";

     factorialProgram();

     std::cout << "\n";

     //Multiply program
     multiplicationProgram();

     std::cout << "\n";

     multiplyProgramWhile();

     return 0;
}