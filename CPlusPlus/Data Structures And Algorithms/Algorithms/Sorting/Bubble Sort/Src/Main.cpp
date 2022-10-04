#include <iostream>

namespace Sorting
{
     class BubbleSort
     {
     private:
          int arr[5];
          int Rounds = 0;

     public:
          void InputNumberBubbleSort();

          virtual void BubbleSortAscending();

          virtual void BubbleSortDescending();
     };
};

void Sorting::BubbleSort::InputNumberBubbleSort()
{
     std::cout << "Enter 5 numbers: ";
     for (size_t i = 0; i < 5; i++)
     {
          std::cin >> arr[i];
     }
}

void Sorting::BubbleSort::BubbleSortAscending()
{
     for (int i = 0; i < 5; i++)
     {
          Rounds++;

          for (int j = 0; j < (5 - i - 1); j++)
          {
               // Comparison ascending
               if (arr[j] > arr[j + 1])
               {
                    // Swapping
                    int swap = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = swap;
               }
          }
     }

     // Get the values sorted ascending
     std::cout << "Values sorted ascending: ";
     for (size_t i = 0; i < 5; i++)
     {
          std::cout << arr[i] << ' ';
     }

     std::cout << "\nTotal rounds: " << Rounds << "\n";
}

void Sorting::BubbleSort::BubbleSortDescending()
{
     for (int i = 0; i < 5; i++)
     {
          Rounds++;

          for (int j = 0; j < (5 - i - 1); j++)
          {
               // Comparison descending
               if (arr[j] < arr[j + 1])
               {
                    int swap = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = swap;
               }
          }
     }

     // Get the values sorted descending
     std::cout << "\nValues sorted descending: ";
     for (size_t i = 0; i < 5; i++)
     {
          std::cout << arr[i] << ' ';
     }

     std::cout << "\nTotal rounds = " << Rounds << "\n";
}

void PrintBubbleSort()
{
     Sorting::BubbleSort *BS = new Sorting::BubbleSort;

     // Set numbers
     BS->InputNumberBubbleSort();

     // Bubble sort algorithm ascending
     BS->BubbleSortAscending();

     // Bubble sort algorithm descending
     BS->BubbleSortDescending();
}

int main()
{
     PrintBubbleSort();

     return 0;
}