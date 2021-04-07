#include <iostream>

class linearSearch
{
public:
     int arr[5];
     int num;
     
     //Called the functions here
     void inputLinerSearch();
     void LinearSearch();
};

//Input elements to search
void linearSearch::inputLinerSearch()
{
     std::cout << "Enter 5 elements: ";

     for (int i = 0; i < 5; i++)
     {
          std::cin >> arr[i];
     }
}

//Search the elements
void linearSearch::LinearSearch()
{
     int temp = -1;

     std::cout << "Enter elements to search: ";
     std::cin >> num;

     for (int i = 0; i < 5; i++) //Less than total index array
     {
          if (arr[i] == num)
          {
               //Using i + 1 to increase the array
               std::cout << "Found element at location: " << i + 1 << std::endl;
               temp = 0;
          }
     }
     if (temp == -1)
     {
          std::cout << "Element not found" << std::endl;
     }
}

int main(int argc, char const *argv[])
{
     linearSearch Ls;

     Ls.inputLinerSearch();
     Ls.LinearSearch();
}