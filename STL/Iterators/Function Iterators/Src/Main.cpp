#include <iostream>
#include <unordered_map>
#include <vector>

void Iterators()
{
     std::vector<int> vector2 = {6, 7, 8, 9, 10};

     for (std::vector<int>::iterator val = vector2.begin(); val != vector2.end(); val++)
     {
          //Deference to print the values
          std::cout << *val << std::endl;
     }
}

void unorderedMap()
{
     using scoreMap = std::unordered_map<std::string, size_t>;
     scoreMap Map;

     //Const iterator
     //using constScoreMapIterator = scoreMap::const_iterator;

     Map["Billy"] = 19;
     Map["C++"] = 20;

     //Default
     for (scoreMap::const_iterator it = Map.begin(); it != Map.end(); ++it)
     {
          auto &key = (it->first);
          auto &value = (it->second);

          std::cout << key << " = " << value << "\n";
     }

     std::cout << "\n";

     //Simple
     for (auto &keyValue : Map)
     {
          auto &key = keyValue.first;
          auto &value = keyValue.second;

          std::cout << key << " = " << value << "\n";
     }

     std::cout << "\n";

     //Clear code (available for C++ 17)
     for (auto &[key, value] : Map)
     {
          std::cout << key << " = " << value << "\n";
     }
}

int main()
{
     std::vector<int> vec = {1, 2, 3, 4, 5}; //Start from 0

     //Dereference
     std::cout << "Vec(begin) => " << *vec.begin() << "\n";

     //Change and modify the address
     int *v = &vec[4];
     v++;
     *v = 50;

     std::cout << "Vec(end) => " << *vec.end() << "\n\n";

     std::cout << "Vec(rbegin) => " << *vec.rbegin() << "\n";
     std::cout << "Vec(rend) => " << *vec.rend() << "\n";

     //Loops iterator
     for (auto &Vector : vec)
     { //More fast instead of using for (int i = 0; i < vec.size(); i++)
          std::cout << Vector << " ";
     }

     std::cout << std::endl;

     Iterators();

     std::cout << std::endl;

     unorderedMap();

     return 0;
}