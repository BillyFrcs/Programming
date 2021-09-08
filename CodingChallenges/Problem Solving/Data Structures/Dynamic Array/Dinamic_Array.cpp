#include <bits/stdc++.h>

int main()
{
     /*Sample input
      2 5
      1 0 5
      1 1 7
      1 0 3
      2 1 0
      2 1 1
     */

     int n, q, lastAnswer = 0;

     int seq = 0, pos;

     int type, x, y;

     std::cin >> n >> q;

     std::vector<std::vector<int>> arr(n);

     for (int i = 0; i < q; i++)
     {
          std::cin >> type >> x >> y;

          seq = ((x ^ lastAnswer) % n);

          if (type == 1)
          {
               arr[seq].push_back(y);
          }

          if (type == 2)
          {
               pos = (y % arr[seq].size());

               lastAnswer = arr[seq][pos];

               std::cout << lastAnswer << std::endl;
          }
     }

     return 0;
}