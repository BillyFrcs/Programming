#include <iostream>

void basicsArray3D()
{
     //First, second and third size
     int arrNum[2][3][2];

     int i, j, k;

     //Input the array
     for (i = 0; i < 2; i++)
     {
          for (j = 0; j < 3; j++)
          {
               for (k = 0; k < 2; k++)
               {
                    std::cout << "Enter index number [" << i << "]" << "[" << j << "]"  << "[" << k << "]" << " = ";
                    std::cin >> arrNum[i][j][k];
               }
          }
     }

     std::cout << "\n";

     //Show the array
     for (i = 0; i < 2; i++)
     {
          for (j = 0; j < 3; j++)
          {
               for (k = 0; k < 2; k++)
               {
                    std::cout << "Numbers index [" << i << "]" << "[" << j << "]"  << "[" << k << "]" << " = " << arrNum[i][j][k] << "\n";
               }
          }
     }
}

int main(int, char **)
{
     basicsArray3D();

     return 0;
}