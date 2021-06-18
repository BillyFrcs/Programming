#include <bits/stdc++.h>
#define VALUE 4
#define LOOPS 6

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

     int arr[6][6], max = 0;

     for (auto i = 0; i < LOOPS; i++)
     {
          for (auto j = 0; j < LOOPS; j++)
          {
               std::cin >> arr[i][j];
          }
     }

     for (auto i = 0; i < VALUE; i++)
     {
          for (auto j = 0; j < VALUE; j++)
          {
               int temp = 0;

               //Top
               temp += arr[i][j];
               temp += arr[i][j + 1];
               temp += arr[i][j + 2];

               //Middle
               temp += arr[i + 1][j + 1];

               //Bottom
               temp += arr[i + 2][j];
               temp += arr[i + 2][j + 1];
               temp += arr[i + 2][j + 2];

               if (temp > max || i == 0 && j == 0)
               {
                    max = temp;
               }
          }
     }

     std::cout << max << std::endl;
}