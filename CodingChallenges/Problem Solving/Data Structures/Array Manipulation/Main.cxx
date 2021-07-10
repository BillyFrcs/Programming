#include <bits/stdc++.h>

int main()
{
     /*Sample input
       5 3
       1 2 100
       2 5 100
       3 4 100
     */

     int n, m;

     std::cin >> n >> m;

     long int *arr = new long int[n + 1]();

     //while (m-- > 0)
     for (int i = 0; i < m; i++)
     {
          int a, b, k;

          std::cin >> a >> b >> k;

          arr[a - 1] += k;
          arr[b] -= k;
     }

     long sum = 0, max = 0;

     for (int i = 0; i < n; i++)
     {
          sum += arr[i];
          max = std::max(sum, max);
     }

     std::cout << max << std::endl;

     return 0;
}