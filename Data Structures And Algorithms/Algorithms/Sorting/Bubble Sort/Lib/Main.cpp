#include <iostream>

//Optimize bubble sort algorithm
namespace Optimized
{
     class BubbleSort
     {
     private:
          int arr[5], Rounds = 0, Flag;

     public:
          void setNumbersBubbleSort();

          virtual void getBubbleSort();
     };
}

void Optimized::BubbleSort::setNumbersBubbleSort()
{
     std::cout << "Enter numbers (max 5): ";
     for (size_t i = 0; i < 5; i++)
     {
          std::cin >> arr[i];
     }
}

void Optimized::BubbleSort::getBubbleSort()
{
     for (int i = 0; i < 5; i++)
     {
          Rounds++;
          Flag = false;

          for (int j = 0; j < (5 - i - 1); j++)
          {
               //Ascending logic
               if (arr[j] > arr[j + 1])
               {
                    //Swap logic
                    Flag = true;

                    int swap = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = swap;
               }
          }

          if (Flag == false)
               break;
     }

     std::cout << "Values sorted: ";
     for (size_t i = 0; i < 5; i++)
     {
          std::cout << arr[i] << ' ';
     }

     std::cout << "\nTotal rounds = " << Rounds << "\n";
}

void PrintBubbleSortOptimized()
{
     Optimized::BubbleSort *BSO = new Optimized::BubbleSort;

     BSO->setNumbersBubbleSort();
     BSO->getBubbleSort();
}

int main(int argc, char const *argv[])
{
     PrintBubbleSortOptimized();

     return 0;
}