#include <iostream>

using namespace std;

class foodsRecipe
{
private:
     int caloriesFoods;
     string firstRecipe, secondRecipe, thirdRecipe;

     //Property
protected: //Is use to access inheritance class
     string namesFoods;
     int ratesFoods;

public:
     //Constructor for all the class
     foodsRecipe(string namesfoods, int caloriesfoods, string firstrecipe, string secondrecipe, string thirdrecipe)
     {
          namesFoods = namesfoods;
          caloriesFoods = caloriesfoods;
          firstRecipe = firstrecipe;
          secondRecipe = secondrecipe;
          thirdRecipe = thirdrecipe;
          ratesFoods = 0; //Can change the value
     }

     //Show all methods to print for the class
     void showFoodsRecipe()
     {
          cout << "Name food: " << namesFoods << endl;
          cout << "Calories Foods: " << caloriesFoods << " calories" << endl;
          cout << "Ingredients foods" << endl;
          cout << "1. " << firstRecipe << endl;
          cout << "2. " << secondRecipe << endl;
          cout << "3. " << thirdRecipe << endl;
     }

     //For show the greetings
     void showPracticeToMakeFoods()
     {
          //Access data type from the first class
          cout << "Practice to make " << namesFoods << endl;
          ratesFoods++;
     }

     //Display the rates of foodsRecipe
     void displayRatesFoods()
     {
          if (ratesFoods < 2)
          {
               cout << namesFoods << " is not intresting." << endl;
          }
          else
          {
               cout << namesFoods << " is really good." << endl;
          }
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
          ratesFoods++;
     }
};

//Polymorphism
class cookiesRecipe : public foodsRecipe
{
public:
     cookiesRecipe(string namesfoods, int caloriesfoods, string firstrecipe, string secondrecipe, string thirdrecipe) : foodsRecipe(namesfoods, caloriesfoods, firstrecipe, secondrecipe, thirdrecipe)
     {
     }

     void showPracticeToMakeFoods()
     {
          cout << "Practice to make cookies " << namesFoods << endl;
          ratesFoods++;
     }
};

int main(int argc, char const *argv[])
{
     foodsRecipe omeletteRecipe("Omelette", 60, "Eggs", "Salt", "Pepper");
     omeletteRecipe.showPracticeToMakeFoods();
     omeletteRecipe.showPracticeToMakeFoods();
     omeletteRecipe.showFoodsRecipe();

     //Check comment of these foods
     foodsRecipe *ptrFoodsRecipe = &omeletteRecipe;
     ptrFoodsRecipe->displayRatesFoods();

     cout << endl;

     //Called class inheritance and create object
     //The called class can change to foodRecipe or roastChikenRecipe
     roastChikenRecipe roastchikenrecipe("Roast Chiken", 100, "Chiken", "Oil", "Powder");
     roastchikenrecipe.showPracticeToMakeFoods();
     roastchikenrecipe.showFoodsRecipe();

     //Check comment of these foods
     foodsRecipe *ptrFoodsRecipeTwo = &roastchikenrecipe;
     ptrFoodsRecipeTwo->displayRatesFoods();

     cout << endl;

     //Called class Polymorphism and object
     cookiesRecipe cookiesrecipe("Chocolate Cookie", 10, "Sugar", "Flour", "Eggs");
     cookiesrecipe.showPracticeToMakeFoods();
     cookiesrecipe.showFoodsRecipe();

     //Check comment of these foods
     foodsRecipe *ptrFoodsRecipeThree = &cookiesrecipe;
     ptrFoodsRecipeThree->displayRatesFoods();

     return 0;
}