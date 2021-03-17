#include <iostream>

using namespace std;

//Function count digits number
void countDigitsNumber(int Number = 0)
{
     cout << "Enter number: ";
     cin >> Number;

     if (Number == 0)
     {
          cout << "You have entered 0. \n";
     }
     else
     {
          if (Number < 0)
               Number = -1 * Number;

          int Counter = 0;

          while (Number > 0)
          {
               Number /= 10;
               Counter++;
          }

          cout << "Number contains " << Counter << " digits \n";
     }
}

//Class reserved program
void reversedProgram()
{
     int number, reversedNumber;

     cout << "Enter number: ";
     cin >> number;

     while (number != 0)
     {
          reversedNumber *= 10;

          int lastDigits = number % 10;
          reversedNumber += lastDigits;
          number /= 10;
     }

     cout << "Reversed: " << reversedNumber << endl;
}

//Prototype nameLines
void nameLines(string name, int x);

void whileProgram()
{
     //Guess program
     int Guess, Tries = 0;

     cout << "Guess number 1 - 10: ";
     cin >> Guess;

     while (Guess != 9 && Tries < 50)
     {
          cout << "Wrong guess, try again: ";
          cin >> Guess;

          Tries++;
     }

     if (Guess == 9)
     {
          cout << "You got it \n";
     }

     cout << endl;

     //Square program
     int I = 0;
     int Square = 0;

     while (I < 10)
     {
          cout << I << " " << I * I << "\n";
          I++;
     }
}

void testsWhileProgram()
{
     int Counter = 100; //100

     while (Counter <= 500) //500
     {
          if (Counter % 3 == 0 && Counter % 5 == 0)
          {
               cout << Counter << " is divisible \n";
               Counter++;
          }
     }

     cout << endl;
}

void breakWhileLoops()
{
     int i = 0;

     while (i < 10)
     {
          i++;
          cout << i << endl;
          if (i == 5)
          {
               break;
          }
     }
}

void continueWhileLoops()
{
     int x = 1;

     while (x < 20)
     {
          if (x == 5)
          {
               x++;
               continue;
          }
          cout << x << endl;
          x++;
     }
}

int main()
{
     //Advance while loops
     int i = 0;
     bool condition = true;

     while (condition)
     {
          cout << "Hello Billy \n";
          i++;
          if (!(i < 7))
               condition = false;
     }

     cout << endl;

     //Program count digits of a number
     countDigitsNumber();

     cout << endl;

     //Program reversing digits of a number
     reversedProgram();

     cout << endl;

     whileProgram();

     cout << endl;

     //Declare nameLines
     string Name = "Billy ";
     int numLines = 5;

     nameLines(Name, numLines);

     cout << endl;

     int n = 10;

     while (n > 0)
     {
          cout << n << ", ";
          --n;
     }

     cout << endl;

     //Countdown
     int x;
     cout << "x = ";
     cin >> x;

     while (x > 0)
     {
          cout << x << endl;
          if (x % 5 == 0)
          {
               cout << "Beep" << endl;
          }
          x--;
     }

     cout << endl;

     breakWhileLoops();

     cout << endl;

     continueWhileLoops();

     return 0;
}

void nameLines(string name, int x)
{
     while (x > 0)
     {
          cout << name;
          x--;
     }
}