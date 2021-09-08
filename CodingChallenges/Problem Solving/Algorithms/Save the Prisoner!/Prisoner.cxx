#include <bits/stdc++.h>

int saveThePrisoner(int n, int m, int s)
{
     return ((m - 1) + (s - 1)) % n + 1;
}

int main()
{
     /*Sample input
       2
       5 2 1
       5 2 2
     */

     int t;

     int n, m, s;

     std::cin >> t;

     while (t-- > 0)
     {
          std::cin >> n >> m >> s;

          std::cout << saveThePrisoner(n, m, s) << std::endl;
     }

     return EXIT_SUCCESS;
}