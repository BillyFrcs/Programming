#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

int main()
{
     /* Enter your code here. Read input from STDIN. Print output to STDOUT
      *Sample input
       5
       1 6 10 8 4
     */

     std::vector<int> vec;

     int n;

     std::cin >> n;

     for (auto i = 0; i < n; i++)
     {
          int number;

          std::cin >> number;

          vec.push_back(number);
     }

     std::sort(vec.begin(), vec.end());

     for (auto i = 0; i < n; i++)
     {
          std::cout << vec[i] << " ";
     }

     return 0;
}