#include <iostream>
#include <array>

using namespace std;

//Concept multidimensional
void multiArr()
{
     int rows, cols;

     cout << "Rows, Cols: ";
     cin >> rows >> cols;

     int **table = new int *[rows];

     for (int i = 0; i < rows; i++)
     {
          table[i] = new int[cols];
     }

     table[1][2] = 88;

     for (int i = 0; i < rows; i++)
     {
          delete[] table[i];
     }

     delete[] table;
     table = NULL;
}

//Memory leaks
void arrFunc()
{
     int *ptr = new int[500000];

     ptr[3] = 20;

     cout << "NUmber: " << ptr[3] << "\n";

     delete[] ptr;
}

int main()
{
     multiArr();

     cout << endl;

     arrFunc();

     return 0;
}