#include <iostream>

void Temperature(const int arr)
{
     int temperature[arr];

     std::cout << "Enter " << arr << " temperature \n";
     for (int i = 0; i < arr; i++)
     {
          std::cout << i + 1 << " = ";
          std::cin >> temperature[i];
     }

     for (int i = 0; i < arr; i++)
     {
          std::cout << temperature[i] << "\n";
     }
}

void listNumbers()
{
     int arr[5] = {4, 7, 1, 2, 4};

     for (int i = 0; i < 5; i++)
     {
          std::cout << "Index = " << i << " number = " << arr[i] << "\n";
     }
}

long bigArr()
{
     int dataArr[5] = {5, 1, 4, 2, 3}, big = dataArr[0];

     for (int i = 0; i < 5; i++)
     {
          if (dataArr[i] < big)
          {
               big = dataArr[i];
          }
     }
     std::cout << "Big num = " << big << "\n";

     return big;
}

void printArr()
{
     //Temperature(5);

     std::cout << std::endl;

     //listNumbers();

     std::cout << std::endl;

     bigArr();
}

int main()
{
     printArr();

     return 0;
}