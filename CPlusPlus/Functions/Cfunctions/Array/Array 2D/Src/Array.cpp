#include <stdio.h>

using namespace std;

int main()
{
     int matrix[5][5]; //This is array 2 Dimension
     int firstLine = 0;

     for (int i = 0; i < 3; i++)
     {
          for (int j = 0; j < 3; j++)
          {
               scanf("%d", &matrix[i][j]);
          }
     }

     printf("\n");

     for (int i = 0; i < 3; i++)
     {
          for (int j = 0; j < 3; j++)
          {
               printf("%d ", matrix[i][j]);
          }
          printf("\n");
     }

     for (int x = 0; x < 3; x++)
     {
          firstLine += matrix[0][x];
     }

     printf("Result sum first line: %d", firstLine);

     return 0;
}