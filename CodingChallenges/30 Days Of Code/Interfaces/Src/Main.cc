#include <bits/stdc++.h>

using namespace std;

class AdvancedArithmetic
{
public:
     virtual int divisorSum(int n) = 0;
};

class Calculator : public AdvancedArithmetic
{
public:
     int divisorSum(int n)
     {
          int div;
          for (auto i = 1; i <= n; i++)
          {
               if ((n % i) == 0)
               {
                    div += i;
               }
          }
          return div;
     }
};

int main()
{
     /*Sample input 
       6
     */

     int n;
     cin >> n;
     AdvancedArithmetic *myCalculator = new Calculator();
     int sum = myCalculator->divisorSum(n);
     cout << "I implemented: AdvancedArithmetic\n"
          << sum;
     return 0;
}