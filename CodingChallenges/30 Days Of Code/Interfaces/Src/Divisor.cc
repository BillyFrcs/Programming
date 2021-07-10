#include <bits/stdc++.h>

void divisor(int num)
{
     for (int i = 1; i <= num; i++)
     {
          if ((num % i) == 0)
          {
               std::cout << i << " ";
          }
     }
}

int main()
{
     int num;

     std::cin >> num;

     divisor(num);

     return 0;
}