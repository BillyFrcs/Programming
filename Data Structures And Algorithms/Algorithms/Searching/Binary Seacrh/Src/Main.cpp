#include <iostream>

class binarySearch
{
public:
     int BinarySearch(int arr[], int left, int right, int temp)
     {
          do
          {
               size_t mid = left + (right - left) / 2;

               if (arr[mid] == temp)
               {
                    return mid;
               }

               else if (arr[mid] < temp)
               {
                    left = (mid + 1);
               }

               else
               {
                    right = (mid + 1);
               }
          } while (left <= right);

          return -1;
     }
};

int main(int argc, char const *argv[])
{
     //Class object binary class
     {
          binarySearch BS;

          int num, myArr[10], Out;

          //Input (Sequence => berurutan)
          std::cout << "Enter number (sequence): ";
          for (int i = 0; i < 10; i++)
          {
               std::cin >> myArr[i];
          }

          std::cout << "Enter number to search: ";
          std::cin >> num;

          Out = BS.BinarySearch(myArr, 0, 9, num);

          //Check the index binary search
          if (Out == -1)
               std::cout << "Not found! \n";

          else
               std::cout << "Found value at index: " << (Out + 1)<< "\n";
     }

     return 0;
}