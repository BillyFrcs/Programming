#include <bits/stdc++.h>

int main()
{
     int N, sum = 0;

     std::cout << "Enter number: ";
     std::cin >> N;

     for (int i = 0; i < N; i++)
     {
          sum += i;
     }
     std::cout << "Value = " << sum << "\n";

     return 0;
}