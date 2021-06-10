#include <conio.h>
#include <iostream>

void patternNum()
{
     int Num;
     
     std::ios_base::sync_with_stdio(false);
     std::cin.tie(NULL);

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

void patternNumbers(int n)
{

     for (int i = 1; i <= n; i++)
     {
          for (int j = 1; j <= n; j++)
          {
               std::cout << j << " ";
          }
          std::cout << "\n";
     }
     getch();
}

int main(int, char **)
{
     //Pattern 1
     patternNum();

     std::cout << "\n";

     //Pattern 2
     int num = 5;
     patternNumbers(num);

     return 0;
}