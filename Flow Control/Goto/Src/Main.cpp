#include <iostream>

void averageNumber()
{
     double num, average, sum = 0.0;
     int i, n;

     std::cout << "Max of inputs = ";
     std::cin >> n;

     for (i = 1; i <= n; i++)
     {
          std::cout << "Enter num" << i << " = ";
          std::cin >> num;

          if (num <= 0.0)
          {
               goto statements;
          }
          sum += num;
     }

//Jump to this statements
statements:

     average = sum / (i - 1);

     std::cout << "\nAverage = " << average << std::endl;
}

int main()
{
     averageNumber();

     return 0;
}