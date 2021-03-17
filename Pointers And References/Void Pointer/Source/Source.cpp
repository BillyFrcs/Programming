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

//Const can be used for a function where the parameter(s) won’t change inside the function.
int square(int const &i)
{
     return i + i;
}

int main()
{
     /*/Concepts 
     Reference
     int &reference = original;
 
     Pointer
     int* pointer = &original;*/

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

     cout << endl;

     //Const reference
     int code = 9;

     cout << square(code) << endl;

     cout << endl;

     //Basics references
     int value = 6;

     cout << &value << endl;

     //Basics Pointers
     /*nullptr is a new keyword introduced in C++11. 
     It provides a typesafe pointer value representing an 
     empty pointer.*/

     int attackPower = 1000;

     int *ptr = nullptr;

     ptr = &attackPower;

     cout << ptr << endl; //It can change with & or *

     return 0;
}