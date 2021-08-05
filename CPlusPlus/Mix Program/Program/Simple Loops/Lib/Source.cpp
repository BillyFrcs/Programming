#include <iostream>
#define SIZE 5

int main()
{
     int arr[SIZE] = {31, 90, 45, 66, 23}, min, max;

     min = arr[0], max = arr[0];

     for (int i = 0; i < SIZE; i++)
     {
          if (max < arr[i])
          {
               max = arr[i];
          }
          else if (min > arr[i])
          {
               min = arr[i];
          }
     }

     std::cout << "Maximum: " << max << std::endl;
     std::cout << "Minimum: " << min << std::endl;

     __debugbreak;
}