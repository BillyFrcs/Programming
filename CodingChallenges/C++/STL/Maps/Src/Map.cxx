#include <bits/stdc++.h>

int main(void)
{
     /*Sample input
       7
       1 Jesse 20
       1 Jess 12
       1 Jess 18
       3 Jess
       3 Jesse
       2 Jess
       3 Jess
     */

     std::map<std::string, int> query;

     std::string x;
     int y, q;

     std::cin >> q;

     for (std::size_t i = 0; i < q ; i++)
     {
          std::cin >> y >> x;

          int mark;

          if (y == 1)
          {
               std::cin >> mark;

               query[x] += mark;
          }
          else if (y == 2)
          {
               query.erase(x);
          }
          else
          {
               std::cout << query[x] << std::endl;
          }
     }

     return 0;
}