#include <iostream>

struct Sorting
{
     class MergeSort
     {
     public:
          void setMergeSort(int arr[], int left, int merge, int right, int sizeArr)
          {
               //Left, right, temp subarray
               int i = left, j = (merge + 1), k = left, temp[sizeArr];

               while ((i <= merge) && (j <= right))
               {
                    //Comparison
                    if (arr[i] <= arr[j])
                    {
                         temp[k] = arr[i]; //Array [i] is smaller than array [j]
                         i++;
                         k++;
                    }

                    else
                    {
                         temp[k] = arr[j]; //Array [j] is smaller than array [i]
                         j++;
                         k++;
                    }
               }

               //Copying the left element from temp subarray
               while (i <= merge)
               {
                    temp[k] = arr[i];
                    i++;
                    k++;
               }

               //Copying the right element from temp subarray
               while (j <= right)
               {
                    temp[k] = arr[j];
                    j++;
                    k++;
               }

               //Copy the temp to array
               for (int x = left; x <= right; x++)
               {
                    arr[x] = temp[x];
               }
          }

          void getMergeSort(int arr[], int left, int right, int sizeArr)
          {
               if (left < right)
               {
                    int merge = (left + right) / 2;

                    getMergeSort(arr, left, merge, sizeArr);
                    getMergeSort(arr, merge + 1, right, sizeArr);

                    setMergeSort(arr, left, merge, right, sizeArr);
               }
          }
     };
};

void PrintMergeSort()
{
     //Called method and create object
     Sorting::MergeSort *MS = new Sorting::MergeSort;

     int sizeArr;

     //Input size index array
     std::cout << "Enter size array: ";
     std::cin >> sizeArr;

     int arr[sizeArr];

     //Input numbers
     std::cout << "\nInput " << sizeArr << " values to sorted: ";
     for (size_t i = 0; i < sizeArr; i++)
     {
          std::cin >> arr[i];
     }

     //Obj and method
     MS->getMergeSort(arr, 0, (sizeArr - 1), sizeArr);

     //Show value sorted with size
     std::cout << "\nValues sorted: ";
     for (size_t i = 0; i < sizeArr; i++)
     {
          std::cout << arr[i] << " ";
     }
}

int main()
{
     PrintMergeSort();

     return 0;
}