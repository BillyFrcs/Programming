#include <iostream>

namespace Sorting
{
     class BubbleSort
     {
     private:
          int arr[5];

     public:
          void setNumbers();

          virtual void getBubbleSortAscending();

          virtual void getBubbleSortDescending();

          void getSortedBubbleSort();
     };
}

void Sorting::BubbleSort::setNumbers()
{
     std::cout << "Enter 5 numbers: ";
     for (size_t i = 0; i < 5; i++)
     {
          std::cin >> arr[i];
     }
}

void Sorting::BubbleSort::getBubbleSortAscending()
{
     for (int i = 0; i < 5; i++)
     {
          for (int j = 0; j < (5 - i - 1); j++)
          {
               //Comparison ascending
               if (arr[j] > arr[j + 1])
               {
                    //Swapping
                    int swap = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = swap;
               }
          }
     }

     //Get the values sorted ascending
     std::cout << "Values sorted ascending: ";
     for (size_t i = 0; i < 5; i++)
     {
          std::cout << arr[i] << ' ';
     }
}

void Sorting::BubbleSort::getBubbleSortDescending()
{
     for (int i = 0; i < 5; i++)
     {
          for (int j = 0; j < (5 - i - 1); j++)
          {
               //Comparison descending
               if (arr[j] < arr[j + 1])
               {
                    int swap = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = swap;
               }
          }
     }

     //Get the values sorted descending
     std::cout << "Values sorted descending: ";
     for (size_t i = 0; i < 5; i++)
     {
          std::cout << arr[i] << ' ';
     }
}

int main(int argc, char const *argv[])
{
     Sorting::BubbleSort *BS = new Sorting::BubbleSort;

     //Set numbers
     BS->setNumbers();

     //Bubble sort algorithm ascending
     BS->getBubbleSortAscending();
     
     std::cout << "\n";
     
     //Bubble sort algorithm descending
     BS->getBubbleSortDescending();

     return 0;
}