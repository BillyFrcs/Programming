#include <iostream>

namespace Data
{
     size_t Value = 19, show;
     void printData()
     {
          show = Value;
          std::cout << "Value = " << show << "\n";
     }
}

int main()
{
     //Without using namespace Data, that should invoke
     Data::printData();

     return 0;
}