#include <bits/stdc++.h>

std::vector<int> reverseArrays(std::vector<int> arr)
{
     //reverse full vector
     std::reverse(arr.begin(), arr.end());

     return arr;
}

int main(void)
{
     /*Sample input
      4
      1 4 3 2
     */

     int n;

     std::cin >> n;

     std::vector<int> vec;

     for (auto i = 0; i < n; i++)
     {
          int numbersArr;

          std::cin >> numbersArr;

          vec.push_back(numbersArr);
     }

     std::vector<int> print = reverseArrays(vec);

     for (int i = 0; i < n; i++)
     {
          std::cout << print[i] << " ";
     }

     return 0;
}