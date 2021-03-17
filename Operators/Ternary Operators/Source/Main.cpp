#include <iostream>

using namespace std;

//Guessing app program with ternary operator
void guessingApp()
{
     int hostUserNum, guessUserNum;

     cout << "User number: ";
     cin >> hostUserNum;

     system("cls");

     cout << "Guess number: ";
     cin >> guessUserNum;

     (hostUserNum == guessUserNum) ? cout << "Correct :)" : cout << "False! \n";
}

int main()
{
     //Concept ternary operator
     //variable = (condition) ? expressionTrue : expressionFalse;
     int number = 16;
     string result = (number < 18) ? "Condition is true" : "Condition is false";

     cout << result << endl;

     cout << endl;

     guessingApp();

     return 0;
}