#include <iostream>

void printWhile(int num)
{

     while (num <= 6)
     {
          std::cout << "Print 6 times" << std::endl;
          num++;
     }
}

int main(int, char **)
{
     int a = 1;
     printWhile(a);

     __debugbreak;
}