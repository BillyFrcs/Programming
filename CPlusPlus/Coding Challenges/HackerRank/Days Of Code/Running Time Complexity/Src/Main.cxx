#include <bits/stdc++.h>

char *isPrimeNumber(int n)
{
     if (n < 2 || (n > 2 && n % 2 == 0))
     {
          return "Not prime";
     }

     const int range = std::ceil(std::sqrt(n));

     for (int i = 3; i <= range; i++)
     {
          if (n % i == 0)
          {
               return "Not prime";
          }
     }

     return "Prime";
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

     scanf("%d", &size);

     while (size--)
     {
          scanf("%d", &n);

          printf("%s\n", isPrimeNumber(n));
     }

     return 0;
}