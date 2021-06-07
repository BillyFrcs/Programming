#include <iostream>
#define VALUE 0

namespace Sorting
{
     class HeapSort
     {
     public:
          virtual void heapify(int arr[], int number, int initialize)
          {
               int large = initialize; //large as root

               //Left and right child
               int left = 2 * initialize + 1, right = 2 * initialize + 2;

               //If left is larger than root(large)
               if ((left < number) && (arr[left] > arr[large]))
               {
                    large = left;
               }

               //If right is larger than root(large)
               if ((right < number) && (arr[right] > arr[large]))
               {
                    large = right;
               }

               //If large is not root
               if (large != initialize)
               {
                    //Swap function
                    std::swap(arr[initialize], arr[large]);
                    heapify(arr, number, large); //Called heapify recursively
               }
          }

          //Get the heap sort
          virtual void getHeapSort(int arr[], int number)
          {
               for (int i = (number / 2 - 1); i >= 0; i--)
               {
                    heapify(arr, number, i);
               }

               for (int i = (number - 1); i > 0; i--)
               {
                    std::swap(arr[0], arr[i]);
                    heapify(arr, i, VALUE);
               }
          }

          //Print the values heap sort ascending
          void printHeapSort(int arr[], int number)
          {
               std::cout << "Values heap sort: ";
               for (auto i = 0; i < number; ++i)
               {
                    std::cout << arr[i] << " ";
               }
          }
     };
}

void displayHeapSort()
{
     Sorting::HeapSort *HS;
     Sorting::HeapSort hs;

     HS = &hs;

     int size;

     std::cout << "Enter size: ";
     std::cin >> size;

     int arr[size];

     std::cout << "Enter numbers to sort (Max " << size << "): ";
     for (auto i = 0; i < size; i++)
     {
          std::cin >> arr[i];
     }

     size_t number = sizeof(arr) / sizeof(arr[0]);

     HS->getHeapSort(arr, number);

     HS->printHeapSort(arr, number); //Print the sorted array
}

int main()
{
     displayHeapSort();

     __debugbreak;
}