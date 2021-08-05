#include <bits/stdc++.h>

class Forming
{
public:
     void getMatrix()
     {
          for (int i = 0; i < 9; i++)
          {
               std::cin >> _matrix[i];
          }

          for (int i = 0; i < 8; i++)
          {
               int cost = 0;

               for (int j = 0; j < 9; j++)
                    cost += std::abs(_matrix[j] - magicSquares[i][j]);

               if (cost < _minCost)
                    _minCost = cost;
          }
          std::cout << _minCost << std::endl;
     }

private:
     const int magicSquares[8][9] = {
         {8, 1, 6, 3, 5, 7, 4, 9, 2},
         {4, 3, 8, 9, 5, 1, 2, 7, 6},
         {2, 9, 4, 7, 5, 3, 6, 1, 8},
         {6, 7, 2, 1, 5, 9, 8, 3, 4},
         {6, 1, 8, 7, 5, 3, 2, 9, 4},
         {8, 3, 4, 1, 5, 9, 6, 7, 2},
         {4, 9, 2, 3, 5, 7, 8, 1, 6},
         {2, 7, 6, 9, 5, 1, 4, 3, 8}};

     int _matrix[9], _minCost = 100;
};

int main()
{
     /*Sample input 
      4 9 2
      3 5 7
      8 1 5
     */

     Forming f;

     f.getMatrix();

     return 0;
}