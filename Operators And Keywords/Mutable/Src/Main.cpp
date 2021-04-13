#include <iostream>

using std::cout;

//Mutable keyword for modify the const
class Ordered
{
private:
     //Mutable here
     mutable std::string food;
     mutable int price;

public:
     Ordered(std::string Food, int Price)
     {
          food = Food;
          price = Price;
     }

     void modifyFoodName(std::string f) const
     {
          food = f;
     }

     void modifyPrice(int p) const
     {
          price = p;
     }

     void display()
     {
          std::cout << "Food " << food << "\n";
          std::cout << "Price " << price << "\n";
     }
};

class Testing
{
public:
     int a;
     mutable int b;

     Testing()
     {
          a = 7;
          b = 9;
     }
};

int main(int argc, char const *argv[])
{
     Ordered O1("Pasta", 100);

     //Modify the const mutable
     O1.modifyFoodName("Pizza");
     O1.modifyPrice(50);

     //Display the const mutable
     O1.display();

     std::cout << "\n";

     const Testing *T1;

     Testing Tptr;

     T1 = &Tptr;
     T1->b = 10; //Can modify

     std::cout << T1->b << "\n";

     T1->a; //Cannot modify

     std::cout << T1->a;

     return false;
}