#include <iostream>

class PartitionQuickSort
{
public:
     int Partition(int arr[], int start, int end)
     {
          int pivot = arr[end], pIndex = start;

          for (int i = start; i < end; i++)
          {
               //Comparison
               if (arr[i] < pivot)
               {
                    //Swapping
                    int swap = arr[i];
                    arr[i] = arr[pIndex];
                    arr[pIndex] = swap;

                    pIndex++;
               }
          }
          
          //Temporary
          int temp = arr[end];
          arr[end] = arr[pIndex];
          arr[pIndex] = temp;

          return pIndex;
     }
};

class QuickSort : public PartitionQuickSort
{
public:
     virtual void setQuickSort(int arr[], int start, int end)
     {
          if (start < end)
          {
               int p = Partition(arr, start, end);
               
               //Recursive
               setQuickSort(arr, start, (p - 1)); //Left
               setQuickSort(arr, (p + 1), end); //Right
          }
     }
};

namespace Sorting
{
     void printQuickSort()
     {
          QuickSort *QS = new QuickSort();

          //Input size array
          int sizeArr;
          std::cout << "Enter size: ";
          std::cin >> sizeArr;

          //Input number to sorted
          int arr[sizeArr];
          std::cout << "Enter numbers to sorted: ";
          for (int i = 0; i < sizeArr; i++)
          {
               std::cin >> arr[i];
          }

          QS->setQuickSort(arr, 0, (sizeArr - 1));

          //Show the sorted numbers
          std::cout << "\nValues sorted: ";
          for (int i = 0; i < sizeArr; i++)
          {
               std::cout << arr[i] << " ";
          }
     }
}

int main()
{
     Sorting::printQuickSort();

     return 0;
}