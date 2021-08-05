#include <stdio.h>

using namespace std;

int main()
{
     //For loops
     for (int i = 1; i <= 10; i += 2)
     {
          if (i == 5)
               continue;
          printf("%d \n", i);
     }

     printf("\n");

     //While loops
     int j = 1;
     while (j <= 10)
     {
          printf("%d \n", j++);
     }

     printf("\n");

     //Do while loops
     int x = 1;

     do
     {
          printf("%d \n", x++);
     } while (x <= 10);

     printf("\n");

     //Nested loops
     int size = 10;
     for (int i = 1; i < size; i++)
     {
          for (int j = 1; j < size; j++)
          {
               printf("*");
          }
          printf("\n");
     }

     printf("\n");

     int enterSize;

     scanf("%d", &enterSize);

     for (int z = 0; z < enterSize; z++)
     {
          for (int k = 0; k < enterSize; k++)
          {
               if (z == 0 || z == enterSize - 1)
               {
                    printf("*");
               }
               else if (k == 0 || k == enterSize - 1)
               {
                    printf("*");
               }
               else
               {
                    printf(" ");
               }
          }
          printf("\n");
     }

     return 0;
}