#include <iostream>

class Arrow
{
public:
     int value = 19;
     float num = 1.4f;

public:
     void printArrow() const
     {

          std::cout << "Floating num = " << num << std::endl;
          std::cout << "Value = " << value << std::endl;
          std::cout << "Welcome to arrow operator" << std::endl;
     }
};

//Scope from arrow class
class scopePtr
{
private:
     size_t Num = 5;
     Arrow *mObj;

public:
     scopePtr(Arrow *arrow) : mObj(arrow)
     {
     }

     ~scopePtr()
     {
          delete mObj;
     }

     Arrow *getObj()
     {
          return mObj;
     }

     Arrow *operator->()
     {
          return mObj;
     }

     const Arrow *operator->() const
     {
          return mObj;
     }

     void printScope() const
     {
          std::cout << "Number: " << Num << std::endl;
     }
};

struct Vector
{
     float a, b, c;
};

int main(int argc, char const *argv[])
{
     //Arrow obj
     Arrow obj;

     Arrow *ptr = &obj;

     ptr->value;
     ptr->num = 1.4f;
     ptr->printArrow();

     std::cout << std::endl;

     //Scope ptr obj
     const scopePtr arrow = new Arrow();

     //This can use to print the same output with Arrow class
     //arrow.getObj()->printArrow(); //Comment this when using const
     arrow->printArrow();
     arrow.printScope();

     // int Offset = (int)&((Vector *)nullptr)->a;

     // std::cout << Offset << std::endl;

     std::cin.get();
}