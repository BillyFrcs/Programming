#include <bits/stdc++.h>

class Database
{
public:
     void databaseUser(int N)
     {
          std::regex email(".+@gmail\\.com$");

          for (int i = 0; i < N; i++)
          {
               std::cin >> _name >> _emailID;

               if (std::regex_match(_emailID, email))
               {
                    _database.insert(_name);
               }
          }

          for (auto &print : _database)
          {
               std::cout << print << std::endl;
          }
     }

private:
     std::multiset<std::string> _database;
     std::string _name, _emailID;
};

int main()
{
     /*Sample input
       6
       riya riya@gmail.com
       julia julia@julia.me
       julia sjulia@gmail.com
       julia julia@gmail.com
       samantha samantha@gmail.com
       tanya tanya@gmail.com
     */

     Database DB;

     int N;

     std::ios_base::sync_with_stdio(false);
     std::cin.tie(NULL);

     std::cin >> N;

     DB.databaseUser(N);

     return 0;
}