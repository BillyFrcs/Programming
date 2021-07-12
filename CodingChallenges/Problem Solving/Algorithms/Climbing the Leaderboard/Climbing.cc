#include <bits/stdc++.h>

int main()
{
     /*Sample input
       7
       100 100 50 40 40 20 10
       4
       5 25 50 120
     */

     long n, m, value;

     std::cin >> n;

     std::stack<long> scores;

     for (auto i = 0; i < n; i++)
     {
          std::cin >> value;

          if (scores.empty() || scores.top() != value)
          {
               scores.push(value);
          }
     }

     std::cin >> m;

     for (auto i = 0; i < m; i++)
     {
          std::cin >> value;

          while (!scores.empty() && value >= scores.top())
          {
               scores.pop();
          }

          std::cout << scores.size() + 1 << std::endl;
     }

     return 0;
}