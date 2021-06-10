#include <iostream>

void whilePatternNum(size_t num)
{
     size_t i = 1;
     while (i <= num)
     {
          ++i;

          size_t j = 1;

          while (j <= num)
          {
               std::cout << j << " ";
               ++j;
          }
          std::cout << "\n";
     }
}

int main(int, char **)
{
     //Pattern num
     size_t num;
     std::cout << "Num = ";
     std::cin >> num;

     whilePatternNum(num);

     return 0;
}