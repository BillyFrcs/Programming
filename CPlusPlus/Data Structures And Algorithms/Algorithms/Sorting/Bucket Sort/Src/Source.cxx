#include <algorithm>
#include <iostream>
#include <vector>

namespace Sorting
{
     void bucketSort(double arr[], int number)
     {
          //create empty bucket numbers
          std::vector<double> vec[number];

          //put array elements in different bucket
          for (auto i = 0; i < number; i++)
          {
               int value = number * arr[i];

               vec[value].push_back(arr[i]);
          }

          //sorted individual bucket
          for (auto i = 0; i < number; i++)
          {
               //std::sort is a function from algorithim header to sort array
               std::sort(vec[i].begin(), vec[i].end());
          }

          //concenate all array
          int index = 0;
          for (auto i = 0; i < number; i++)
          {
               for (auto j = 0; j < vec[i].size(); j++)
               {
                    arr[index++] = vec[i][j];
               }
          }
     }

     void printBucketSort(double arr[], int number)
     {
          std::cout << "Values bucket sort: ";
          for (auto i = 0; i < number; i++)
          {
               std::cout << arr[i] << " ";
          }
     }
}

using namespace Sorting;

int main(void)
{
     /*This sorting algorithm work when input floating numbers
     * Input size: 5
     * Sample input numbers: 0.34 0.25 0.78 0.56 0.42
     */

     size_t size;

     std::cout << "Enter size: ";
     std::cin >> size;

     double arr[size];

     std::cout << "Enter numbers to sort (Max " << size << "): ";
     for (auto i = 0; i < size; i++)
     {
          std::cin >> arr[i];
     }

     int number = sizeof(arr) / sizeof(arr[0]);

     bucketSort(arr, number);
     printBucketSort(arr, number);

     return 0;
}