#include <iostream>
#include <string>

class Entity
{
public:
     //Using static cannot modify the value or method
     static std::string value;

     static float printStatic(float num);
};

std::string Entity::value = "Billy";

float Entity::printStatic(float num)
{

     std::cout << "Static method: " << num << std::endl;

     return num;
}

int main()
{
     Entity e;
     e.printStatic(12.8);

     std::cout << "Static variable = " << e.value << std::endl;
}