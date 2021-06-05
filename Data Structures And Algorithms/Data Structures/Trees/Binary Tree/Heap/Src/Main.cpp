#include <cmath>
#include <iostream>
#include <stdlib.h>

#define EXT true
#define VALUE 0
#define IS_EMPTY false
#define ZERO 0

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

          //Insert values in mini heap
          void insertMinHeap(int key)
          {
               if (heapSize == capacity)
               {
                    std::cout << "\nCannot insert, key value is full" << std::endl;
                    return; //For return array index from 1
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

          //Get min heap
          int getMinHeap()
          {
               return heapArr[0];
          }

          //Extract mini heap
          int extractMinHeap()
          {
               if (heapSize <= 0)
               {
                    //Return '0' value from value heap if it's empty
                    return ZERO;
               }

               if (heapSize == 1)
               {
                    heapSize--;
                    return heapArr[ZERO]; //Return heap array at index '0'
               }

               //Enter the minimum value and then remove it from heap
               int root = heapArr[0];

               heapArr[0] = heapArr[heapSize - 1];
               heapSize--;

               //Calling minHeap method and pass VALUE into argument with macro
               minHeap(0);

               return root;
          }

          //Mini heap method
          void minHeap(int m) //Min
          {
               // l = left, r = right
               int l = left(m), r = right(m); //Recursion with methods left and right

               size_t small = m;

               if ((l < heapSize) && (heapArr[l] < heapArr[m]))
               {
                    small = l;
               }
               if ((r < heapSize) && (heapArr[r] < heapArr[small]))
               {
                    small = r;
               }
               if (small != m)
               {
                    swapHeap(heapArr[m], heapArr[small]);
                    minHeap(small); //Recursion with minHeap method
               }
          }

          //Decrease key value min heap
          void decreaseKeyHeap(int h, int newValue) //Heap
          {
               heapArr[h] = newValue;

               while ((h != 0) && (heapArr[parent(h)] > heapArr[h]))
               {
                    swapHeap(heapArr[h], heapArr[parent(h)]);
                    h = parent(h);
               }
          }

          //Delete key value min heap
          void deleteKeyHeap(int value)
          {
               //Recursion from method decreaseKeyHeap() and extractMinHeap()
               decreaseKeyHeap(value, ZERO);
               extractMinHeap();
          }

          //Print traversal value in heap
          void printHeap()
          {
               std::cout << "\nValues in heap: ";
               for (auto i = 0; i < heapSize; i++)
               {
                    if (IS_EMPTY != heapArr[i])
                    {
                         std::cout << heapArr[i] << " ";
                    }
               }
          }
     };
} //Namespace Heap

void displayHeap()
{
     int size, options, value;

     std::cout << "Enter size of min Heap: ";
     std::cin >> size;

     std::cout << "Min heap is created, you can only insert " << size << " numbers. \n";

     //Create an object for MinHeap
     Heap::MinHeap *MH = new Heap::MinHeap(size);

     //Enter numbers as key value
     do
     {
          std::cout << "\nSelect option (0 to exit): \n";
          std::cout << "1.) Insert value heap \n";
          std::cout << "2.) Search value heap \n";
          std::cout << "3.) Delete value heap \n";
          std::cout << "4.) Get min heap \n";
          std::cout << "5.) Extract min heap\n";
          std::cout << "6.) Height of heap \n";
          std::cout << "7.) Print min heap \n";
          std::cout << "8.) Clear console \n";

          std::cout << "Choose option: ";
          std::cin >> options;

          if (options == 0)
          {
               if (EXT == true)
                    exit(EXT);
          }
          else if (options == 1)
          {
               std::cout << "Insert value in heap: ";
               std::cin >> value;
               MH->insertMinHeap(value);
          }
          else if (options == 2)
          {
               std::cout << "Enter value to search in heap: ";
               std::cin >> value;
               MH->linearSearch(value);
          }
          else if (options == 3)
          {
               std::cout << "Enter index of heap to delete: ";
               std::cin >> value;
               MH->deleteKeyHeap(value);
          }
          else if (options == 4)
          {
               std::cout << "\nGet min heap value: " << MH->getMinHeap() << std::endl;
          }
          else if (options == 5)
          {
               std::cout << "\nExract min values: " << MH->extractMinHeap() << std::endl;
          }
          else if (options == 6)
          {
               std::cout << "\nHeight of heap tree is: "<< MH->heightHeap() << std::endl;
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
               std::cout << "\nNot found, try again ! \n";
          }
     } while (options != 100);
}

int main()
{
     displayHeap();

     return 0;
}