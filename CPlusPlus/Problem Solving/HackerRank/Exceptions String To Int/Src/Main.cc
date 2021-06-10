#include <bits/stdc++.h>

void exceptions(std::string S)
{
     try
     {
          int a = std::stoi(S);

          std::cout << S << std::endl;
     }
     catch (...) //or we can use exception a in the argument
     {
          std::cout << "Bad String \n";
     }
}

int main()
{
     /*Sample input
       3
       za
     */

     std::string S;
     std::getline(std::cin, S);

     exceptions(S);

     return 0;
}