#include <iostream>

class selectionSort
{
private:
     int arr[5];

public:
     virtual void getUnsorted()
     {
          std::cout << "Enter 5 random index to sorted: ";
          for (int i = 0; i < 5; ++i)
          {
               std::cin >> arr[i];
          }

          std::cout << "Unsorted values: ";
          for (int i = 0; i < 5; ++i)
          {
               std::cout << arr[i] << " ";
          }
     }

     virtual void getSortedAscending()
     {
          for (int i = 0; i < 4; i++)
          {
               //Set minimum element
               size_t min = i;

               //Check the minimum element
               for (int j = i + 1; j < 5; j++)
               {
                    //Ascending logic
                    if (arr[j] < arr[min])
                         min = j;
               }

               //Swap the minimum and current element
               if (min != i)
               {
                    int swap = arr[min];
                    arr[min] = arr[i];
                    arr[i] = swap;
               }
          }

          std::cout << "Sorted ascending values: ";
          for (int i = 0; i < 5; ++i)
          {
               std::cout << arr[i] << " ";
          }
     }

     virtual void
     getShortedDescending()
     {
          for (int i = 0; i < 4; i++)
          {
               size_t min = i;

               for (int j = i + 1; j < 5; j++)
               {
                    //Descending logic
                    if (arr[j] > arr[min])
                         min = j;
               }

               if (min != i)
               {
                    int swap = arr[min];
                    arr[min] = arr[i];
                    arr[i] = swap;
               }
          }

          std::cout << "Sorted descending values: ";
          for (int i = 0; i < 5; ++i)
          {
               std::cout << arr[i] << " ";
          }
     }
};

int main(int argc, char const *argv[])
{
     //Ascending (From smallest number to largest number)
     //Descending (From the largest number to smallest number)

     //Object from class selectionSort and virtual function
     selectionSort *SS;
     selectionSort ss;

     SS = &ss;

     SS->getUnsorted();
     std::cout << "\n\n";
     SS->getSortedAscending();
     SS->getShortedDescending();

     __debugbreak;
     return false;
}