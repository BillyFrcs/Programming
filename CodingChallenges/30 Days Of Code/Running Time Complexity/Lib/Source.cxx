#include <bits/stdc++.h>

bool isPrimeNumber(int n)
{
     if (n < 2 || (n > 2 && n % 2 == 0))
     {
          return false;
     }

     const int range = std::ceil(std::sqrt(n));

     for (int i = 3; i <= range; i++)
     {
          if (n % i == 0)
          {
               return false;
          }
     }

     return true;
}

int main()
{
     /*Sample input
       3
       12
       5
       7
     */

     int n, size;

     std::cin >> size;

     while (size--)
     {
          std::cin >> n;

          if (isPrimeNumber(n))
          {
               std::cout << "Prime\n";
          }
          else
          {
               std::cout << "Not prime\n";
          }
     }

     return 0;
}