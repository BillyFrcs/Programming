#include <bits/stdc++.h>

int main(void)
{
     /*Sample input
       8
       1 9
       1 6
       1 10
       1 4
       3 6
       3 14
       2 6
       3 6
     */

     std::set<int> query;

     int q, x, y;

     std::cin >> q;

     for (int i = 0; i < q; i++)
     {
          std::cin >> x >> y;

          switch (x)
          {
          case 1:
               query.insert(y); //Add elements
               break;

          case 2:
               query.erase(y); //Delete elements
               break;

          case 3:
               //std::cout << (query.find(y) == query.end() ? "No" : "Yes") << std::endl;
               if (query.find(y) != query.end())
               {
                    std::cout << "Yes\n";
               }
               else
               {
                    std::cout << "No\n";
               }
               break;
          }
     }

     return 0;
}