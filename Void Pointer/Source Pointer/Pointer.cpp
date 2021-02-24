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

int main()
{
     int number = 7;
     char letter = 'b';

     printNum(&number);
     printLetter(&letter);

     cout << endl;

     printNumAndLetter(&number, 'i');
     printNumAndLetter(&letter, 'c');

     return 0;
}