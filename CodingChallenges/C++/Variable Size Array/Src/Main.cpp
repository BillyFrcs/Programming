#include <bits/stdc++.h>

int main()
{
     /*Sample input
     2 2
     3 1 5 4
     5 1 2 8 9 3
     0 1
     1 3
     */

     int num, q, size, val, w, index;

     std::ios_base::sync_with_stdio(false);
     std::cin.tie(NULL);

     std::cin >> num >> q;

     std::vector<std::vector<int>> numVector;

     for (size_t i = 0; i < num; i++)
     {
          std::cin >> size;

          std::vector<int> iVector;
          for (int j = 0; j < size; j++)
          {
               std::cin >> val;
               iVector.push_back(val);
          }
          numVector.push_back(iVector);
     }

     for (size_t k = 0; k < q; k++)
     {
          std::cin >> w >> index;

          std::cout << numVector[w][index] << "\n";
     }

     return 0;
}