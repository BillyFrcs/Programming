#include <iostream>
#define VALUE 2

namespace Sorting
{
     // Function to short array elements in shell sort
     void ShellSort(int arr[], int number)
     {
          // Rearrange the array elements
          for (int interval = (number / VALUE); interval > 0; interval /= VALUE)
          {
               for (int i = interval; i < number; i++)
               {
                    int temp = arr[i], j;

                    for (j = i; j >= interval && arr[j - interval] > temp; j -= interval)
                    {
                         arr[j] = arr[j - interval];
                    }
                    
                    arr[j] = temp;
               }
          }
     }

     // Print the sorted array elements in shell sort
     void PrintShellSort(int arr[], int number)
     {
          std::cout << "Values shell short: ";
          for (int i = 0; i < number; i++)
          {
               std::cout << arr[i] << " ";
          }
     }
} // namespace Sorting

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

     Sorting::ShellSort(arr, number);
     Sorting::PrintShellSort(arr, number);

     return 0;
}