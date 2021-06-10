#include <iostream>
#include <memory>

struct MyStruct
{
     MyStruct()
     {
          std::cout << "Created \n";
     }

     ~MyStruct()
     {
          std::cout << "Destroyed \n";
     }

     void getPtr(std::shared_ptr<size_t> value = std::make_unique<size_t>())
     {
          std::cout << *value << std::endl;
     }
};

int main()
{
     //To reduce memory leak
     std::shared_ptr<float> value = std::make_unique<float>(10.56f);

     std::cout << "Address = " << value << std::endl; //This for access the address

     //dereference to print the value
     std::cout << "Value = " << *value << std::endl;

     //Additional scope
     {
          //Called struct
          std::shared_ptr<MyStruct> data = std::make_unique<MyStruct>();

          std::cout << &data << std::endl; //access anddress
     }
     
     //Called function in struct using parameter
     std::shared_ptr<size_t> number = std::make_unique<size_t>(23);

     MyStruct ms;

     ms.getPtr(number);

     return 0;
}