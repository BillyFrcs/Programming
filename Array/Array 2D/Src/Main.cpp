#include <iostream>

void basicsArray2D()
{
     //First row (baris)
     //Second column (kolom)
     size_t matrix[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};

     for (int i = 0; i < 2; i++)
     {
          for (int j = 0; j < 4; j++)
          {
               std::cout << "[" << matrix[i][j] << "] ";
          }
          std::cout << "\n";
     }
}

void show2DArray()
{
     double arr[1][5] = {2.3, 8.5, 10.2, 9.7, 14.3};

     double showArr = arr[0][2];

     std::cout << showArr << "\n";
}

int main()
{
     basicsArray2D();

     std::cout << "\n";

     show2DArray();

     return 0;
}