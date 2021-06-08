#include <iostream>
#define VALUE 10

namespace Sorting
{
     //Function to get maximum value arr
     int_fast64_t getMax(int arr[], int number)
     {
          int max = arr[0];

          for (int i = 0; i < number; i++)
          {
               if (max < arr[i])
               {
                    max = arr[i];
               }
          }

          return max;
     }

     //Function to count radix sort array
     void countRadixSort(int arr[], int number, int exp)
     {
          int output[number], count[VALUE] = {0};

          //Store count array in count[]
          for (int i = 0; i < number; i++)
          {
               count[(arr[i] / exp) % VALUE]++; //Using macro to define 10 VALUE and increase it
          }

          //Change count[i] and contains the actual position of digit array
          for (int i = 1; i < VALUE; i++)
          {
               count[i] += count[i - 1];
          }

          //Create the output array
          for (int i = (number - 1); i >= 0; i--)
          {
               output[count[(arr[i] / exp) % VALUE] - 1] = arr[i];
               count[(arr[i] / exp) % VALUE]--;
          }

          //Copy the output array and now contains sorted values
          for (int i = 0; i < number; i++)
          {
               arr[i] = output[i];
          }
     }

     //This function use to sort size of the array
     void radixSort(int arr[], int number)
     {
          //Find the maximum number to know the digits
          int radix = getMax(arr, number);

          for (int exp = 1; (radix / exp) > 0; exp *= VALUE)
          {
               countRadixSort(arr, number, exp); //Called function countRadixSort
          }
     }

     void printRadixSort(int arr[], int number)
     {
          std::cout << "Values radix sort: ";
          for (int i = 0; i < number; i++)
          {
               std::cout << arr[i] << " ";
          }
     }
}

int main()
{
     size_t size;

     std::cout << "Enter size: ";
     std::cin >> size;

     int arr[size];

     std::cout << "Enter numbers to sort (Max " << size << "): ";
     for (auto i = 0; i < size; i++)
     {
          std::cin >> arr[i];
     }

     int number = sizeof(arr) / sizeof(arr[0]);

     Sorting::radixSort(arr, number);
     Sorting::printRadixSort(arr, number);

     return 0;
}