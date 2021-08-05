#include <iostream>

namespace Families
{
     class Family
     {
     private:
          std::string Type[5] = {"Father", "Mother", "Child"};

     public:
          void Print()
          {
               for (auto &type : Type)
               {
                    std::cout << Type[2] << "\n";
               }
          }
     };
}

int main(int argc, char const *argv[])
{
     //Invoke class and create object
     Families::Family *FM = new Families::Family;

     FM->Print();

     return 0;
}