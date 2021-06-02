#include <cmath>
#include <iostream>
#include <stdlib.h>

#define EXT true

namespace Heap
{
     /*Pointer to array of elements in heap.
      *Maximum size of min heap.
      *Current number of elements in heap.*/
     int *heapArr, capacity, heapSize;

     class MinHeap //Mini heap
     {
     public:
          MinHeap(int c) //c is capcity in parameter contructor to take size
          {
               heapArr = new int[c];
               capacity = 0;
               heapSize = c;
          }

          //Searching value with linear search for heap
          void linearSearch(int value)
          {
               for (int i = 0; i < heapSize; i++)
               {
                    if (heapArr[i] == value)
                    {
                         std::cout << "Value found" << std::endl;
                         return;
                    }
                    else
                    {
                         std::cout << "Value not found" << std::endl;
                    }
               }
          }

          //Print traversal value in heap
          void printHeap()
          {
               for (int i = 0; i < heapSize; i++)
               {
                    std::cout << heapArr[i] << " ";
               }
          }

          //Height of heap
          int heightHeap()
          {
               return ceil(log2(heapSize + 1)) - 1;
          }
     };
} //Namespace Heap

void displayHeap()
{
     int size, options, value;

     std::cout << "Enter size of min Heap: ";
     std::cin >> size;

     //Create an object for MinHeap
     Heap::MinHeap *MH = new Heap::MinHeap(size);

     do
     {
          std::cout << "\nSelect option (0 to exit): \n";
          std::cout << "1.) Insert key, node, value \n";
          std::cout << "2.) Search key, node \n";
          std::cout << "3.) Delete key, node \n";
          std::cout << "4.) Get min \n";
          std::cout << "5.) Extract min \n";
          std::cout << "6.) Height of heap \n";
          std::cout << "7.) Print heap \n";
          std::cout << "8.) Clear console \n";

          std::cout << "Choose option: ";
          std::cin >> options;

          //TODO: (Get input)
          if (options == 0)
          {
               if (EXT == true)
                    exit(EXT);
          }
          else if (options == 1)
          {
               std::cout << "Insert value in heap: ";
               std::cin >> value;
          }
          else if (options == 2)
          {
               std::cout << "Enter value to search in heap: ";
               std::cin >> value;
          }
          else if (options == 3)
          {
               std::cout << "Enter index of heap to delete: ";
               std::cin >> value;
          }
          else if (options == 4)
          {
               std::cout << "Get min values: ";
          }
          else if (options == 5)
          {
               std::cout << "Exract min values: ";
          }
          else if (options == 6)
          {
               std::cout << "Height of heap tree: ";
          }
          else if (options == 7)
          {
          }
          else if (options == 8)
          {
               system("cls");
          }
          else
          {
               std::cout << "Not found, try again ! \n";
          }
     } while (options != 100);
}

int main()
{
     displayHeap();

     return 0;
}