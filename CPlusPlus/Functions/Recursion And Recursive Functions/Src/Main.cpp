#include <iostream>
#include <cmath>

using namespace std;

int recursiveSum(int a, int b)
{
     if (a == b)
          return a;

     return a + recursiveSum(a + 1, b);
}

int recursionFactorial(int f)
{
     if (f < 0)
          return -1;

     else if (f == 0)
          return 1;

     else
          return (f * recursionFactorial(f - 1));
}

int main()
{

     int m = 2, n = 4;
     int sum = 0;

     for (int i = m; i <= n; i++)
     {
          sum += i;
     }
     cout << "Sum is " << sum << endl;

     cout << endl;

     //Recursive
     int a = 5, b = 6;

     cout << "Sum is: " << recursiveSum(a, b) << endl
          << "\n";

     //Recursion

     int f = 4;

     f = recursionFactorial(f);

     std::cout << "Recursion factorial is: " << f << "\n";
     
     //With function
     sqrt(f);

     std::cout << f << "\n";

     return 0;
}