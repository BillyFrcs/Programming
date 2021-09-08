#include <bits/stdc++.h>

int simpleArraySum(std::vector<int> ar)
{
     int sum;

     for (auto &i : ar)
     {
          sum += i;
     }

     return sum;
}

int main()
{
     /*Sample input
       6
       1 2 3 4 10 11
     */

     std::vector<int> vec;

     int n;

     std::cin >> n;

     for (int i = 0; i < n; i++)
     {
          int input;

          std::cin >> input;

          vec.push_back(input);
     }

     std::cout << simpleArraySum(vec);

     return 0;
}