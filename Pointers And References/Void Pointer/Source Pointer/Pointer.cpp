#include <iostream>

using namespace std;

void printNum(int *numPtr)
{
     cout << *numPtr << endl;
}

void printLetter(char *letterPtr)
{
     cout << *letterPtr << endl;
}

void printNumAndLetter(void *Ptr, char type)
{
     switch (type)
     {
     case 'i': //Handle int*
          cout << *((int *)Ptr) << endl;
          break;
     case 'c': //Handle char*
          cout << *((char *)Ptr) << endl;
          break;
     }
}

int triple(int &i)
{

     i = i * 3;

     return i;
}

int main()
{
     int number = 7;
     char letter = 'b';

     printNum(&number);
     printLetter(&letter);

     cout << endl;

     printNumAndLetter(&number, 'i');
     printNumAndLetter(&letter, 'c');

     cout << endl;

     //Basics references
     int soda = 89;
     int &pop = soda;
     pop++; //Can use pop += 1 or pop + 1 or another operators

     cout << soda << endl;
     cout << &pop << endl;

     cout << endl;

     int num = 1;

     cout << triple(num) << "\n";
     cout << triple(num) << "\n";

     return 0;
}