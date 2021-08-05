#include <iostream>

class Bases
{
protected:
     int value = 19;

public:
     //Member function
     virtual void print()
     {
          std::cout << "Print Bases class \n";
          std::cout << value << std::endl;
     }

     virtual void printFunc() //Change the variable for print
     {
          std::cout << "Print virtual bases" << std::endl;
     }
};

class Data : public Bases
{
public:
     void print()
     {
          std::cout << "Show Data class \n";
          std::cout << value << std::endl;
     }

     void printFunc()
     {
          std::cout << "Print data class" << std::endl;
     }
};

int main(int argc, char const *argv[])
{
     Bases *pB;

     Data data;

     pB = &data;

     pB->print();

     pB->printFunc();

     __debugbreak;
}