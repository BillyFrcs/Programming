#include <iostream>

class InsertionSort
{
protected:
     int arr[5];

public:
     InsertionSort();

     void inputInertionSort();

     virtual void insertionSortConditionAscending();

     virtual void insertionSortConditionDescending();
};

InsertionSort::InsertionSort()
{
     arr[5] = 0;
}

void InsertionSort::inputInertionSort()
{
     std::cout << "Enter 5 random numbers: ";
     for (size_t i = 0; i < 5; i++)
     {
          std::cin >> arr[i];
     }
}

void InsertionSort::insertionSortConditionAscending()
{
     int a = 0, key;

     for (int i = 1; i < 5; i++)
     {
          key = arr[i]; //Picking the elements
          a = (i - 1);

          while ((a >= 0) && (arr[a] > key))
          {
               arr[a + 1] = arr[a];
               a--;
          }

          arr[a + 1] = key;
     }

     std::cout << "Sorting values ascending: ";
     for (size_t i = 0; i < 5; i++)
     {
          std::cout << arr[i] << " ";
     }

     std::cout << "\n";
}

void InsertionSort::insertionSortConditionDescending()
{
     int b = 0, key;

     for (int i = 1; i < 5; i++)
     {
          key = arr[i];
          b = (i - 1);

          while ((b >= 0) && (arr[b] < key))
          {
               arr[b + 1] = arr[b];
               b--;
          }

          arr[b + 1] = key;
     }

     std::cout << "Sorting values descending: ";
     for (size_t i = 0; i < 5; i++)
     {
          std::cout << arr[i] << " ";
     }
}

int main(int argc, char const *argv[])
{
     InsertionSort *IS = new InsertionSort();

     IS->inputInertionSort();
     IS->insertionSortConditionAscending();
     IS->insertionSortConditionDescending();

     return 0;
}