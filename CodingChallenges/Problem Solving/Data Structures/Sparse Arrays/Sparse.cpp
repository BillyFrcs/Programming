#include <bits/stdc++.h>

int main()
{
     /*Sample input
       4
       aba
       baba
       aba
       xzxb
       3
       aba
       xzxb
       ab
     */

     int n, q;

     std::string strings_queries;

     std::multiset<std::string> str;

     std::cin >> n;

     for (auto i = 0; i < n; i++)
     {
          std::cin >> strings_queries;

          str.insert(strings_queries);
     }

     std::cin >> q;

     for (auto i = 0; i < q; i++)
     {
          std::cin >> strings_queries;

          std::cout << str.count(strings_queries) << std::endl;
     }

     return 0;
}