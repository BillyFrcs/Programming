#include <iostream>

class Entity
{
private:
     double x;
     float y;

public:
     Entity()
     {
          x = 7.5;
          y = 4.3f;

          std::cout << "Created Entity \n";
     }
     
     //Destructor
     ~Entity()
     {
          std::cout << "Destroyed Entity! \n";
     }

     void Print()
     {
          std::cout << "x = " << x << ", y = " << y << std::endl;
     }
};

void Object()
{
     Entity *E = new Entity;

     E->Print();
     E->~Entity();
}

int main(int argc, char const *argv[])
{
     Object();

     return 0;
}