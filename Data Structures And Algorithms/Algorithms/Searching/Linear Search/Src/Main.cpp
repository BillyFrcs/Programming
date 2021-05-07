#include <iostream>

class linearSearch
{
private:
     int arr[10] = {19, 54, 6, 78, 23, 54, 46, 98, 21, 10};
     int num;

public:
     //Input elements to search
     void inputLinerSearch()
     {
          std::cout << "Enter number = ";
          std::cin >> num;
     }

     //Search the elements
     void LinearSearch()
     {
          int temp = -1;

          for (int i = 0; i < 10; i++) //Less than total index array
          {
               if (arr[i] == num)
               {
                    //Using i + 1 to increase the array
                    std::cout << "Found element at location: " << i << std::endl;
                    temp = 0;
               }
          }
          if (temp == -1)
               std::cout << "Element not found" << std::endl;
     }
};

int main()
{
     linearSearch Ls;

     Ls.inputLinerSearch();
     Ls.LinearSearch();
}