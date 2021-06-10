#include <iostream>
#include <stdlib.h>

//Realloc (Re-allocation)
void reallocProgram()
{
     double *ptr;
     int num;

     std::cout << "Enter elements: ";
     std::cin >> num;

     ptr = (double *)realloc(ptr, num * sizeof(double));

     if (ptr == NULL)
     {
          std::cout << "Memory not allocated!" << std::endl;
          exit(0);
     }
     else
     {
          //Dinamically memory with realloc()
          std::cout << "Success re-allocated memory with realloc" << std::endl;

          for (int i = 0; i < num; i++)
          {
               ptr[i] = i + 1;
          }

          std::cout << "The elements of array are: ";

          for (int i = 0; i < num; i++)
          {
               std::cout << ptr[i] << " ";
          }

          free(ptr);
     }
}

int main(int argc, char *argv[])
{

     reallocProgram();

     __debugbreak;
}