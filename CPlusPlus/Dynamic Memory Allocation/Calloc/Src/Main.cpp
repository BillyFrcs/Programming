#include <iostream>
#include <stdlib.h>

//Calloc (Contiguous allocation)
void callocProgram()
{
     size_t *ptr;
     int num, i;

     std::cout << "Enter num elements: ";
     std::cin >> num;

     ptr = (size_t *)calloc(num, sizeof(size_t));

     if (ptr == NULL)
     {
          std::cout << "Memory not allocated!" << std::endl;
          exit(0);
     }

     else
     {

          std::cout << "Memory allocated with calloc" << std::endl;

          for (i = 0; i < num; i++)
          {
               ptr[i] = i + 1;
          }

          std::cout << "The elements are: ";
          for (i = 0; i < num; i++)
          {
               std::cout << ptr[i] << " ";
          }
     }
}

int main(int argc, char *argv[])
{
     //Basics calloc (array)
     float *ptr = (float *)calloc(25, sizeof(float));

     ptr[1] = 1.83f;

     std::cout << ptr[1] << std::endl
               << "\n";

     free(ptr);

     callocProgram();

     __debugbreak;
}