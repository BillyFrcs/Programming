#include <stdio.h>

int main()
{
     int n;

     scanf("%d", &n);

     int a = 0, b = 0, value = 0;

     while (n > 0)
     {
          a = n % 2;

          n = n / 2;

          if (a == 1)
          {
               b++;
               if (b >= value)
               {
                    value = b;
               }
          }
          else
          {
               b = 0;
          }
     }

     printf("%d\n", value);

     return 0;
}