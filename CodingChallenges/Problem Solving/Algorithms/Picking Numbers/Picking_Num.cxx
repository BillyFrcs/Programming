#include <bits/stdc++.h>

int pickingNumbers(std::vector<int> a)
{
     int counter = 0;

     for (auto i = 0; i < a.size(); i++)
     {
          int temp = 0;
          std::sort(a.begin(), a.end());

          for (auto j = i; j < a.size(); j++)
          {
               if (std::abs(a[i] - a[j]) <= 1)
               {
                    temp++;
               }

               else
               {
                    break;
               }
          }

          if (temp > counter)
          {
               counter = temp;
          }
     }
     return counter;
}

int main()
{
     /*Sample input
       6
       4 6 5 3 3 1
     */

     int n;

     std::ios_base::sync_with_stdio(0);
     std::cin.tie(0);

     std::cin >> n;

     std::vector<int> a;

     for (auto i = 0; i < n; i++)
     {
          int numArr;
          std::cin >> numArr;

          a.push_back(numArr);
     }

     std::cout << pickingNumbers(a);

     return 0;
}