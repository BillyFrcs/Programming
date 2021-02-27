#include <iostream>
#include "Template.hpp"

using namespace std;

//Template function
template <class T> // T is generic data type
//class can change with typename
void Swap(T &a, T &b)
{
     T Temp = a;
     a = b;
     b = Temp;
}

int main()
{

     int a = 9, b = 7;

     cout << a << " = " << b << endl;

     Swap<int>(a, b); //int use to change the data typ of T

     cout << a << " = " << b << endl;

     cout << endl;

     char c = 'b', d = 'i';

     cout << c << " = " << d << endl;

     Swap<char>(c, d);

     cout << c << " = " << d << endl;

     cout << endl;

     //Declare from file hpp
     cout << getBiggerNum(100, 50) << endl;
     cout << getBiggerNum(345.6, 567.8) << endl;

     return 0;
}