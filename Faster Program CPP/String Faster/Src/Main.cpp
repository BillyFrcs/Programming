#include <iostream>
#include <string>
#include <string_view>

static uint32_t strAllocatedCount = 0;

void *operator new(size_t size)
{
     strAllocatedCount++;
     std::cout << "Allocating size = " << size << " bytes\n";

     return malloc(size);
}

void printName(const std::string &name) //Reference
{
     std::cout << name << std::endl;
}

void showName(std::string_view Name) //View
{
     std::cout << Name << std::endl;
}

int main()
{
     std::string name = "Billy Franscois";

#if 0
     std::string firstName = name.substr(0, 5);
     std::string lastName = name.substr(6, 10);

#else
     std::string_view firstName(name.c_str(), 5);
     std::string_view lastName(name.c_str() + 6, 10);

#endif
     showName(firstName);
     showName(lastName);

     std::cout << strAllocatedCount << " allocation" << std::endl;

     std::cin.get();
     return 0;
}