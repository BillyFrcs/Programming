#include <iostream>

void printWhile(int num)
{

     while (num <= 6)
     {
          std::cout << "Print 6 times" << std::endl;
          num++;
     }

     std::cout << std::endl;

     int i = 11;

     while (i > 1)
     {
          i--;
          std::cout << i << std::endl;
     }
}

//Show odd and even number
void showOddEvenNum()
{
     int options, max;

     std::cout << "Option: " << std::endl;
     std::cout << "1. Odd" << std::endl;
     std::cout << "2. Even" << std::endl;

     std::cout << "Choose number = ";
     std::cin >> options;

     std::cout << "Enter max number: ";
     std::cin >> max;

     if (options == 1)
     {
          std::cout << "Odd numbers \n";
          for (size_t i = 1; i < max; i++)
          {
               //Show row(deretan) of odd numbers
               if (i % 2 != 0)
               {
                    std::cout << i << " ";
               }
          }
     }
     else
     {
          std::cout << "Even numbers \n";
          for (size_t i = 1; i <= max; i++)
          {
               //Show row of even numbers
               if (i % 2 == 0)
               {
                    std::cout << i << " ";
               }
          }
     }
}

//Fractional => (pecahan)
void Fractional()
{
     int num, fractional = 0, total = 0;

     std::cout << "Enter number: ";
     std::cin >> num;

     while (fractional <= num)
     {
          total += fractional;
          fractional++;
     }
     std::cout << "Total: " << total << std::endl;
}

int main(int, char **)
{
     int a = 1;
     printWhile(a);

     std::cout << std::endl;

     //Called odd and even number function
     showOddEvenNum();

     std::cout << std::endl;

     //Called fractional function
     Fractional();

     __debugbreak;
}