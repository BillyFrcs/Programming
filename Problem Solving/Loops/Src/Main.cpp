#include <bits/stdc++.h>

int main()
{
     int n;
     std::cin >> n;
     std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

     for (int i = 1; i <= 10; i++)
     {
          std::cout << n << " x " << i << " = " << n * i << std::endl;
     }

     return 0;
}