#include <iostream>
#include <memory>

namespace Memory
{
     std::shared_ptr<float> Val = std::make_shared<float>(10.5f);

     //Using auto
     auto Value = std::make_shared<int>(50);
     auto showVal = std::make_shared<std::pair<int, int>>(30, 60);

     void SharedPtr()
     {
          //Print
          std::cout << "Val = " << *Val << "\n";
          std::cout << "Value = " << *Value << "\n";
          std::cout << "Show val = " << showVal->first << ' ' << showVal->second;
     }
}

int main(int argc, char *argv[])
{
     Memory::SharedPtr();

     return 0;
}