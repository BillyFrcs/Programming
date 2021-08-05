#include <bits/stdc++.h>

int main()
{
     /*Sample input
       abcd
       ef
     */

     std::string a, b;

     std::cin >> a >> b;

     std::cout << a.length() << " " << b.length() << std::endl;

     std::string temp = (a + b);

     std::cout << temp << std::endl;

     std::swap(a[0], b[0]);
     std::cout << a << " " << b << std::endl;

     return 0;
}