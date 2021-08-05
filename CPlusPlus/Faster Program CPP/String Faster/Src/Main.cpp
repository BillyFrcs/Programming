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

//#define STR_VIEW 1
#if STR_VIEW
void printName(std::string_view Name) //View
{
     std::cout << Name << std::endl;
}

#else
void printName(const std::string &name) //Reference
{
     std::cout << name << std::endl;
}

#endif


int main()
{
     std::string name = "Billy Franscois";
     const char *Name = "Billy Franscois";

#if STR_VIEW

     std::string_view firstName(name.c_str(), 5);
     std::string_view lastName(name.c_str() + 6, 10);

#else

     std::string firstName = name.substr(0, 5);
     std::string lastName = name.substr(6, 10);

     std::string FirstName(Name, 5);
     std::string LastName(Name + 6, 10);

#endif
     //printName(firstName);
     //printName(lastName);

     printName(FirstName);
     printName(LastName);

     std::cout << strAllocatedCount << " allocation" << std::endl;

     std::cin.get();
     return 0;
}