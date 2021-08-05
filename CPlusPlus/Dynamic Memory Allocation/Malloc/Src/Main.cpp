#include <iostream>
#include <mem.h>
#include <stdlib.h>

//Malloc (Memory allocation)
void mallocProgram()
{
     int *ptr, num;

     std::cout << "Enter number elements: ";
     std::cin >> num;

     //Allocate memory using malloc
     ptr = (int *)malloc(sizeof(int));

     if (ptr == NULL)
     {
          std::cout << "Memory not allocated! \n";
          exit(0);
     }
     else
     {
          //Get elements array
          std::cout << "Success allocated memory with malloc \n";
          for (int i = 0; i < num; ++i)
          {
               ptr[i] = i + 1;
          }

          //Print the elements
          std::cout << "The elements are: ";
          for (int i = 0; i < num; ++i)
          {
               std::cout << ptr[i] << " ";
          }
     }
}

int main(int argc, char *argv[])
{
     //Basics malloc
     int *ptr = (int *)malloc(sizeof(int));

     *ptr = 19;

     std::cout << "Value is = " << *ptr << std::endl
               << "\n";

     free(ptr);

     //Malloc with array
     int *value = (int *)malloc(5 * sizeof(int));

     value[0] = 4;
     value[1] = 9;

     std::cout << "The array value are = " << value[0] << " " << value[1] << std::endl << "\n";

     free(value);

     //Malloc program
     mallocProgram();

     __debugbreak;
}