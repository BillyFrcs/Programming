#include <cmath>
#include <iostream>
#include <stdlib.h>

#define EXT true

namespace Heap
{
     /*Pointer to array of elements in heap [*heapArr].
      *Maximum size of min heap [capacity].
      *Current number of elements in heap [heapSize].*/
     int *heapArr, capacity, heapSize;

     class MinHeap //Mini heap
     {
     public:
          MinHeap(int c) //"c" is capacity in parameter contructor to take size
          {
               heapArr = new int[c];
               capacity = c;
               heapSize = 0;
          }

          //Searching value with linear search for heap
          void linearSearch(int value)
          {
               for (int i = 0; i < heapSize; i++)
               {
                    if (heapArr[i] == value)
                    {
                         std::cout << "Found key value" << std::endl;
                         return;
                    }
                    else
                    {
                         std::cout << "Key value not found" << std::endl;
                    }
               }
          }

          //Height of heap
          int heightHeap()
          {
               return ceil(log2(heapSize + 1)) - 1;
          }

          //Swapping heap
          void swapHeap(int &swap, int &heap)
          {
               int temp = swap;
               swap = heap;
               heap = temp;
          }

          //Insert values in heap
          void insertKeyHeap(int key)
          {
               if (heapSize == capacity)
               {
                    std::cout << "\nCannot insert, key value is full" << std::endl;
                    return;
               }

               //Increase the heapSize to insert
               heapSize++;

               /*Insert the new key at the end
                *Fix the mini heap property if it's vilated*/
               int insert = (heapSize - 1);
               heapArr[insert] = key;

               //Comparison between insert and parent
               while ((insert != 0) && (heapArr[parent(insert)] > heapArr[insert]))
               {
                    //Swapping between swapHeap and parent
                    swapHeap(heapArr[insert], heapArr[parent(insert)]);
                    insert = parent(insert);
               }
          }

          int parent(int p) //Return the parent node in heap
          {
               return ((p - 1) / 2);
          }

          int left(int l) //Return the left node in heap
          {
               return (2 * l + 1);
          }

          int right(int r) //Return the right node in heap
          {
               return (2 * r + 2);
          }

          //Print traversal value in heap
          void printHeap()
          {
               std::cout << "\nValues in heap: ";
               for (int i = 0; i < heapSize; i++)
               {
                    std::cout << heapArr[i] << " ";
               }
          }
     };
} //Namespace Heap

void displayHeap()
{
     int size, options, value;

     std::cout << "Enter size of min Heap: ";
     std::cin >> size;

     std::cout << "Min heap is created, you can only insert " << size << " numbers.";

     //Create an object for MinHeap
     Heap::MinHeap *MH = new Heap::MinHeap(size);

     //Enter numbers
     do
     {
          std::cout << "\nSelect option (0 to exit): \n";
          std::cout << "1.) Insert key value \n";
          std::cout << "2.) Search key value \n";
          std::cout << "3.) Delete key value \n";
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
               MH->insertKeyHeap(value);
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
               MH->printHeap();
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