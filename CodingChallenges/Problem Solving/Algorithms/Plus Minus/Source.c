#include <stdio.h>

int main()
{
     /*Sample input
       6               
      -4 3 -9 0 4 1 
     */

     int n, input;

     scanf("%d", &n);

     int positive = 0, negative = 0, zero = 0;

     for (int i = 0; i < n; i++)
     {
          scanf("%d", &input);

          if (input > 0)
          {
               positive++;
          }

          else if (input < 0)
          {
               negative++;
          }

          else
          {
               zero++;
          }
     }

     printf("%6f\n",(double)positive / n);
     printf("%6f\n",(double)negative / n);
     printf("%6f\n",(double)zero / n);

     return 0;
}