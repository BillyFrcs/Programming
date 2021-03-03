#include <iostream>

using namespace std;

void arithmeticOperators()
{
     // +, -, *, /, %
     cout << 6 * 6 << endl;
     cout << 5 / 2.0 << endl;
     cout << 5 + 5 << endl;
     cout << 2 - 4 << endl;
     cout << 10 % 5 << endl;

     printf("\n");

     //++(Increment), --(Decrement)
     int counter = 10;

     counter++;
     cout << counter << endl;

     counter--;
     cout << counter << endl;

     int counter2 = 20;

     cout << ++counter2 << endl;
     cout << counter2-- << endl;

     printf("\n");

     //Relational operators (<, >, <=, >=, ==, !=)
     int a = 5, b = 10;

     cout << (a < 10) << endl; //It can change with another operators

     printf("\n");

     //Logical operators (&&, ||, !)
     int c = 10, d = 10;

     cout << !(c == 10 || d == 10) << endl; //It should be true
     cout << (c == 10 && d == 5 + 5) << endl;

     printf("\n");

     //Assignment operators (=, +=, -=, *=, /=, %=)
     int x = 19;

     x += 5; //It can change with another operators 

     cout << x << endl;
}

int main()
{
     arithmeticOperators();

     return 0;
}