#include <bits/stdc++.h>

int beautifulDays(int i, int j, int k)
{
     int beautyDays = 0;

     for (int day = i; day <= j; day++)
     {
          int x = day, reverse = 0;

          while (x != 0)
          {
               reverse = (reverse * 10) + (x % 10);
               x /= 10;
          }

          if (std::abs(day - reverse) % k == 0)
          {
               beautyDays++;
          }
     }
     return beautyDays;
}

int main()
{
     /*Sample input
       20 23 6
     */

     int i, j, k;

     std::ios_base::sync_with_stdio(false);
     std::cin.tie(NULL);

     std::cin >> i >> j >> k;

     std::cout << beautifulDays(i, j, k) << std::endl;

     return 0;
}