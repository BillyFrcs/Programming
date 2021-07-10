#include <bits/stdc++.h>

struct Calculator
{
     int power(int n, int p)
     {
          if (n < 0 || p < 0)
          {
               //Print the error message
               throw std::runtime_error("n and p should be non-negative");
          }
          else
          {
               return std::pow(n, p);
          }
     }
};

//More exceptions
int main()
{
     /*Sample input
     4
     3 5
     2 4
    -1 -2
    -1 3
    */

     Calculator myCalculator = Calculator();
     int T, n, p;
     std::cin >> T;
     while (T-- > 0)
     {
          if (scanf("%d %d", &n, &p) == 2)
          {
               try
               {
                    int ans = myCalculator.power(n, p);
                    std::cout << ans << std::endl;
               }
               catch (std::exception &e)
               {
                    std::cout << e.what() << std::endl;
               }
          }
     }
}