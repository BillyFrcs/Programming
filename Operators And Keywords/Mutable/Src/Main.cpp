#include <iostream>

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

int main(int argc, char const *argv[])
{
     Ordered O1("Pasta", 100);
     
     //Modify the const
     O1.modifyFoodName("Pizza");
     O1.modifyPrice(50);

     //Display the const
     O1.display();

     return false;
}