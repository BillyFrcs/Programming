#include <iostream>

void matrixArr()
{
     //row(baris), column(kolom)
     int row, column, elements[5][5];

     std::cout << "Enter row = ";
     std::cin >> row;

     std::cout << "Enter column = ";
     std::cin >> column;

     std::cout << "Enter matrix elements: ";
     for (size_t i = 0; i < row; i++)
     {
          for (size_t j = 0; j < column; j++)
          {
               std::cin >> elements[i][j];
          }
     }

     for (size_t i = 0; i < row; i++)
     {
          std::cout << "[ ";
          for (size_t j = 0; j < column; j++)
          {
               std::cout << elements[i][j] << " ";
          }
          std::cout << "]" << std::endl;
     }
}

int main()
{
     matrixArr();

     return 0;
}