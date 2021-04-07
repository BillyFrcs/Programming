#include <conio.h>
#include <iostream>

void patternNum()
{
     int Num;
     std::cin >> Num;

     for (int i = 1; i <= Num; i++)
     {
          for (int j = 1; j <= i; j++)
          {
               std::cout << j << " ";
          }
          std::cout << std::endl;
     }

     for (int i = Num; i >= 0; i--)
     {
          for (int j = 0; j <= i; j++)
          {
               std::cout << i << " ";
          }
          std::cout << std::endl;
     }
     getch();
}

int main(int, char **)
{
     patternNum();

     return 0;
}