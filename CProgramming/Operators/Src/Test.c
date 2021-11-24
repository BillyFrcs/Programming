#include <stdio.h>

int balikBilangan(int m);

int main()
{
     int n;

     printf("Berikan sebuah bilangan bulat: ");
     scanf("%d", &n);

     printf("Bilangan saudara sekarang: %d\n", balikBilangan(n));

     return 0;
}

int balikBilangan(int m)
{
     int rev = 0;

     while (m > 0)
     {
          rev = rev * 10 + m % 10;
          m = m / 10;
     }

     return rev;
}