#include <iostream>
#include <list>
#include <vector>

int main()
{
     std::vector<int> vec = {1, -2, 3};
     
     std::list<int> List = {12, 34, 65};
     
     //Insert the vector element using list
     vec.insert(vec.begin(), List.begin(), List.end());

     std::cout << vec[0] << ", " << vec[1] << ", " << vec[2] << "\n";
     
     vec.pop_back(); //Erase the element
     vec.erase(vec.begin() + 1);
     std::cout << vec[0] << ", " << vec[1] << ", " << vec[2] << "\n";

     return 0;
}