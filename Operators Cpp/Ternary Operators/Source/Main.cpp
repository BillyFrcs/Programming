#include <iostream>

using namespace std;

//Guessing app program
void guessingApp()
{
     int hostUserNum, guessUserNum;

     cout << "Host number: ";
     cin >> hostUserNum;

     system("clear");

     cout << "Guess number: ";
     cin >> guessUserNum;

     //Method 1
     if (hostUserNum == guessUserNum)
          cout << "Correct :)\n";

     else
          cout << "Wrong! \n";

     //Method 2
     //(hostUserNum == guessUserNum) ? cout << "Correct :)" : cout << "Wrong! \n";
     
}

int main()
{

     guessingApp();

     return 0;
}