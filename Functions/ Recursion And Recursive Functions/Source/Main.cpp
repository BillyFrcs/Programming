#include <iostream>

using namespace std;

int recursiveSum(int a, int b)
{
     if (a == b)
          return a;

     return a + recursiveSum(a + 1, b);
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

     int a = 5, b = 6;

     cout << "Sum is: " << recursiveSum(a, b) << endl;

     return 0;
}