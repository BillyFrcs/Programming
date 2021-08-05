#include <array>
#include <iostream>
#include <vector>

void arrLoops()
{
     std::array<int, 5> arr = {3, 1, 4, 5, 6};

     for (auto it = arr.begin(); it != arr.end(); it++)
     {
          std::cout << *it << " ";
     }
}

int main()
{
     arrLoops();

     std::cout << "\n";

     std::vector<int> vec = {1, 2, 3, 4, 5};

     for (auto i = vec.begin(); i != vec.end(); i++){
          std::cout << *i << " ";
     }

     std::cout << "\n";

     auto vecIt = vec.begin() + 2;

     std::cout << "vecIt => " << *vecIt << "\n"; //Dereference
     std::cout << "vecIt - begin => " << vecIt - vec.begin() << "\n";

     vec.insert(vecIt, 56); //Insert the vec value

     std::cout << "Insert vec => " << vec[2] << std::endl;

     return 0;
}