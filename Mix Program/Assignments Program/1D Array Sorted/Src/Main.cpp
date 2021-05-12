#include <iostream>

//Sort numbers ascending (mengurutkan angka)
const int sortNumbers(int arr[])
{
     for (int i = 0; i < 5; i++)
     {
          for (int j = 0; j < (5 - i - 1); j++)
          {
               if (arr[j] > arr[j + 1])
               {
                    int swap = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = swap;
               }
          }
     }

     for (auto i = 0; i < 5; i++)
          std::cout << arr[i] << ' ';

     return arr[5];
}

int main()
{
     int arr[5] = {5, 3, 1, 2, 4};
     
     sortNumbers(arr);

     std::cin.get();
}