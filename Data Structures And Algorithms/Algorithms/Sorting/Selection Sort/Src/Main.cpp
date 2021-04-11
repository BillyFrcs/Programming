#include <iostream>

class selectionSort
{
private:
     int arr[5];

public:
     virtual void getUnsorted()
     {
          std::cout << "Enter 5 random index to sorted: ";
          for (int i = 0; i < 5; i++)
          {
               std::cin >> arr[i];
          }

          std::cout << "Unsorted values: ";
          for (int i = 0; i < 5; ++i)
          {
               std::cout << arr[i] << " ";
          }

          std::cout << "\n";
     }

     virtual void getSorted()
     {
          for (int i = 0; i < 4; i++)
          {
               //Set minimum element
               size_t min = i;

               //Check the minimum element
               for (int j = i + 1; j < 5; j++)
               {
                    //Modify this operator to (>) to descending the values
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
     }

     virtual void printSortedValues()
     {
          std::cout << "Sorted values: ";
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
     SS->getSorted();
     SS->printSortedValues();

     return false;
}