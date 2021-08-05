#include <bits/stdc++.h>

void fizzBuzz(int number)
{
     for (int i = 1; i <= number; i++)
     {
          if ((i % 3 == 0) && (i % 5 == 0))
          {
               std::cout << "Fizz Buzz \n";
          }

          else if (i % 3 == 0)
          {
               std::cout << "Fizz \n";
          }

          else if (i % 5 == 0)
          {
               std::cout << "Buzz \n";
          }

          else
          {
               std::cout << i << "\n";
          }
     }
}

int main()
{
     int number;

     std::ios_base::sync_with_stdio(false);
     std::cin.tie(NULL);

     std::cin >> number;

     fizzBuzz(number);
}