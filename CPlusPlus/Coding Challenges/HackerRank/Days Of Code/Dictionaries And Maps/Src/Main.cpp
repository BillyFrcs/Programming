#include <bits/stdc++.h>
#include <map>

using namespace std;

void phoneNumber()
{
     /*Sample input.
     3
     sam 99912222
     tom 11122222
     harry 12299933
     sam
     edward
     harry*/
     int size;
     std::string name;
     long number;

     std::ios_base::sync_with_stdio(false);
     std::cin.tie(NULL);

     std::cin >> size;

     std::cin.ignore();

     std::map<std::string, long> phoneBook;

     for (auto i = 0; i < size; i++)
     {
          std::cin >> name >> number;
          phoneBook[name] = number;
     }

     while (std::cin >> name)
     {
          if (phoneBook.find(name) != phoneBook.end())
          {
               std::cout << name << "=" << phoneBook.find(name)->second << std::endl;
          }
          else
          {
               std::cout << "Not found \n";
          }
     }
}

int main()
{
     phoneNumber();
}