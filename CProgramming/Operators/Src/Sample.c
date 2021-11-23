#include <stdio.h>

int main(void)
{
     long size;

     printf("Total number: ");
     scanf("%ld ", &size);

     long a[size];

     for (int i = 0; i < size; i++)
     {
          scanf("%ld", &a[i]);

          fgetc(stdin);
     }

     printf("%ld %ld", a[5], a[6]);

     return 0;
}
