#include <iostream>

constexpr int INDEX = 8;

int main(void)
{
     int i, j, temp;

     int a[INDEX] = {14, 2, 10, 5, 1, 3, 17, 7};

     std::cout << "Nilai yang akan diurut...\n ";

     for (i = 0; i < INDEX; i++)
     {
          std::cout << a[i] << "\t";
     }

     std::cout << std::endl;

     for (i = 0; i < INDEX; i++)
     {
          for (j = i + 1; j < INDEX; j++)
          {
               if (a[j] < a[i])
               {
                    std::swap(a[i], a[j]);

                    /*
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                    */
               }
          }
     }

     std::cout << "Hasil BUBBLE Sort...\n";

     for (i = 0; i < INDEX; i++)
     {
          std::cout << a[i] << "\t";
     }

     return EXIT_SUCCESS;
}