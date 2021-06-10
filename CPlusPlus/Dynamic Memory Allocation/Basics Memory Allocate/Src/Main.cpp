#include <iostream>
#include <stdlib.h>

void getNum(int size)
{
     int *ptr;

     std::cout << "Enter size value: ";
     std::cin >> size;

     ptr = new int[size];

     std::cout << "Enter value to stored: ";
     for (int i = 0; i < size; i++)
     {
          std::cin >> ptr[i];
     }

     std::cout << "All values: ";
     for (int i = 0; i < size; i++)
     {
          std::cout << ptr[i] << " ";
     }
}

int main(int, char **)
{
     getNum(0);

     return 0;
}