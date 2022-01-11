#include <stdio.h>

int ReverseNumber(int m);

void main(void)
{
     int n;

     printf("Berikan sebuah bilangan bulat: ");
     scanf("%d", &n);

     printf("Bilangan saudara sekarang: %d\n", ReverseNumber(n));
}

int ReverseNumber(int m)
{
     int rev = 0;

     while (m > 0)
     {
          rev = rev * 10 + m % 10;
          m = m / 10;
     }

     return rev;
}