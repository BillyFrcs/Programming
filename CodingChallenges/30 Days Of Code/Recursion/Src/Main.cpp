#include <bits/stdc++.h>

int factorial(int n)
{
     if (n < 0)
          return -1;
     else if (n == 0)
          return 1;
     else
          return (n * factorial(n - 1));
}

int main()
{
     int n, result;

     std::ios_base::sync_with_stdio(false);
     std::cin.tie(NULL);

     std::cin >> n;

     result = factorial(n);

     std::cout << result << std::endl;

     return 0;
}