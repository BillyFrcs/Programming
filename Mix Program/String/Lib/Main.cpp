#include <iostream>
#include <string>

struct Data
{
     char Name[30];
};

int main(int, char **)
{
     //Set data
     Data D1;

     std::cout << "Enter name = ";
     std::cin.get(D1.Name, 30);

     std::ios_base::sync_with_stdio(false);
     std::cin.tie(NULL);

     //Get data
     std::cout << "Name = " << D1.Name << "\n";

     return 0;
}
