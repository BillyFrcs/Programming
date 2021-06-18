#include <bits/stdc++.h>

unsigned int FirstFactorial(int num)
{
     if (num == 0)
     {
          return 1;
     }

     return num * FirstFactorial(num - 1);
}

int main()
{
     unsigned int num;

     std::ios_base::sync_with_stdio(false);
     std::cin.tie(NULL);

     std::cin >> num;

     std::cout << FirstFactorial(num);

     return 0;
}