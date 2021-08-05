#include <iostream>

//Matrix program
void matrixArr(int row, int column)
{
     //row(baris), column(kolom)
     int elements[5][5];

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

     std::cin.get();
}

void printMatrix()
{
     int row, column;

     std::cout << "Enter row = ";
     std::cin >> row;

     std::cout << "Enter column = ";
     std::cin >> column;

     matrixArr(row, column);
}

int main()
{
     printMatrix();

     std::cin.get();
}