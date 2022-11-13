#include <stdio.h>

int searchArr[] = {23, 45, 55, 56, 76, 89, 102, 456, 48,
                   34, 89, 20, 130, 133, 245, 567, 345,
                   234, 459, 576};

int length = 25;

//Linear search
int linearSearch(int search)
{
     for (int i = 0; i < length; i++)
     {
          if (searchArr[i] == search)
          {
               return i;
          }
     }
     
     return -1;
}

//Binary search
int binarySearch(int search)
{
     int low = 0;
     int high = length - 1;

     do
     {
          int mid = (low + high) / 2;

          if (searchArr[mid] == search)
               return mid;
          else if (search < searchArr[mid])
               high = mid - 1;
          else if (search > searchArr[mid])
               low = mid + 1;

     } while (low <= high);

     return -1;
}

int main()
{
     //Linear search
     int resultIndexLinear = linearSearch(576); //Search index array

     if (resultIndexLinear == -1)
          printf("Not found linear\n");
     else
          printf("Search index linear = %d \n", resultIndexLinear);

     //Binary search
     int resultIndexBinary = binarySearch(55);

     if (resultIndexBinary == -1)
          printf("Not found binary \n");
     else
          printf("Search index binary = %d \n", resultIndexBinary);

     return 0;
}