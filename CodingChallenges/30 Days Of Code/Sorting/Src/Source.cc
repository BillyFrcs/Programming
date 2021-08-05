#include <bits/stdc++.h>

void bubbleSort(int a[], int n)
{
     int numOfSwaps = 0, i, j;

     for (i = 0; i < n; i++)
     {
          for (j = 0; j < (n - 1); j++)
          {
               if (a[j] > a[j + 1])
               {
                    std::swap(a[j], a[j + 1]);
                    numOfSwaps++;
               }
          }
          if (numOfSwaps == 0)
          {
               break;
          }
     }
     std::cout << "Array is sorted in " << numOfSwaps << " swaps.\n";
     std::cout << "First Element: " << a[0] << std::endl;
     std::cout << "Last Element: " << a[j] << std::endl;
}

int main()
{
     /*Sample input
       3
       3 2 1
     */

     int n;

     std::ios_base::sync_with_stdio(false);
     std::cin.tie(NULL);

     std::cin >> n;

     int a[n];

     for (int i = 0; i < n; i++)
     {
          std::cin >> a[i];
     }

     bubbleSort(a, n);

     return 0;
}