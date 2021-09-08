#include <bits/stdc++.h>

std::string reverse(std::string str)
{
     std::string r;

     for (int i = (str.size()) - 1; i >= 0; i--)
     {
          r += str[i];
     }
     return r;
}

int main()
{
     std::string str;

     std::getline(std::cin, str);

     std::cout << reverse(str);

     return 0;
}