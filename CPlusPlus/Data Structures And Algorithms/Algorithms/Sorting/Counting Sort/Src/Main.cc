#include <iostream>
#define RANGE 10

namespace Sorting
{
     //Counting sort function
     void countingSort(int arr[], size_t size, int range)
     {
          //Initialize output and count array and store the size and the range from parameter
          int outputArr[size], countArr[range];

          //Set all elements '0' to count the array
          for (int i = 0; i < range; i++)
          {
               countArr[i] = 0;
          }

          //Take all count of all input elements in the input arr
          for (int i = 0; i < size; i++)
          {
               ++countArr[arr[i]]; //Iterate through the entire input arr
          }

          //Count array to get the position of elements
          for (int i = 0; i < range; i++)
          {
               countArr[i] = (countArr[i] + countArr[i - 1]);
          }

          //Placing the input array to sorted in ascending order
          for (int i = 0; i < size; i++)
          {
               outputArr[--countArr[arr[i]]] = arr[i];
          }

          //Copy all the output array elements to input arr
          for (int i = 0; i < size; i++)
          {
               arr[i] = outputArr[i];
          }
     }

     //Print counting sort
     void printCountingSort(int arr[], int size)
     {
          std::cout << "Values counting sort: ";
          for (int i = 0; i < size; i++)
          {
               std::cout << arr[i] << " ";
          }
     }
} //namespace Sorting

int main()
{
     size_t size;
     
     //Take the max size to input numbers
     std::cout << "Enter size: ";
     std::cin >> size;

     int arr[size];
     
     //Enter numbers unsorted
     std::cout << "Enter numbers to sort (Max " << size << "): ";
     for (auto i = 0; i < size; i++)
     {
          std::cin >> arr[i];
     }
     
     //Calling the functions from namespace
     Sorting::countingSort(arr, size, RANGE);
     Sorting::printCountingSort(arr, size);

     return 0;
}