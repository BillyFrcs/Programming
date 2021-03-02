#include <iostream>
#include <list>

using namespace std;

class foodsRecipe
{
private:
     int caloriesFoods;
     string firstRecipe, secondRecipe, thirdRecipe;

protected: //Is use to access inheritance class
     string namesFoods;

public:
     foodsRecipe(string namesfoods, int caloriesfoods, string firstrecipe, string secondrecipe, string thirdrecipe)
     {
          namesFoods = namesfoods;
          caloriesFoods = caloriesfoods;
          firstRecipe = firstrecipe;
          secondRecipe = secondrecipe;
          thirdRecipe = thirdrecipe;
     }

     void showFoodsRecipe()
     {
          cout << "Name food: " << namesFoods << endl;
          cout << "Calories Foods: " << caloriesFoods << " calories" << endl;
          cout << "Ingredients foods" << endl;
          cout << "1. " << firstRecipe << endl;
          cout << "2. " << secondRecipe << endl;
          cout << "3. " << thirdRecipe << endl;
     }

     void showPracticeToMakeFoods()
     {
          //Access data type from the first class
          cout << "Practice to make " << namesFoods << endl;
     }
};

//Inheritance for connect with the first class
class roastChikenRecipe : public foodsRecipe
{
public:
     //Initialize contructor property
     roastChikenRecipe(string namesfoods, int caloriesfoods, string firstrecipe, string secondrecipe, string thirdrecipe) : foodsRecipe(namesfoods, caloriesfoods, firstrecipe, secondrecipe, thirdrecipe)
     {
     }

     //Create methods
     void showPracticeToMakeFoods()
     {
          //Access data type from the first class
          cout << "Practice to make " << namesFoods << endl;
     }
};

int main(int argc, char const *argv[])
{
     foodsRecipe omeletteRecipe("Omelette", 60, "Eggs", "Salt", "Pepper");
     omeletteRecipe.showPracticeToMakeFoods();
     omeletteRecipe.showFoodsRecipe();

     cout << endl;

     //Called class inheritance and create object
     //The called class can change to foodRecipe or roastChikenRecipe
     roastChikenRecipe roastChikenRecipe("Roast Chiken", 100, "Chiken", "Oil", "Powder");
     roastChikenRecipe.showPracticeToMakeFoods();
     roastChikenRecipe.showFoodsRecipe();

     return 0;
}