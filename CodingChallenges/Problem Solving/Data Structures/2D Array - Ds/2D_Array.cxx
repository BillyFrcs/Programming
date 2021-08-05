#include <bits/stdc++.h>

int hourglassSum(std::vector<std::vector<int>> arr)
{
     int max = 0;

     for (auto i = 0; i < 4; i++)
     {
          for (auto j = 0; j < 4; j++)
          {
               int value = 0;
               value += arr[i][j];
               value += arr[i][j + 1];
               value += arr[i][j + 2];

               value += arr[i + 1][j + 1];

               value += arr[i + 2][j];
               value += arr[i + 2][j + 1];
               value += arr[i + 2][j + 2];

               if ((value > max) || (i == 0 && j == 0))
               {
                    max = value;
               }
          }
     }
     return max;
}

int main()
{
     /*Sample input
      1 1 1 0 0 0
      0 1 0 0 0 0
      1 1 1 0 0 0
      0 0 2 4 4 0
      0 0 0 2 0 0
      0 0 1 2 4 0
     */

     std::vector<std::vector<int>> arr(6);

     for (auto i = 0; i < 6; i++)
     {
          for (auto j = 0; j < 6; j++)
          {
               int numbers;

               std::cin >> numbers;

               arr[i].push_back(numbers);
          }
     }

     std::cout << hourglassSum(arr);

     return 0;
}