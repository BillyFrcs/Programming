#include <iostream>
#include <string>
#include <stdio.h>
#include "Header.hpp"
#include <typeinfo>

using namespace std;

//using namespace Number;

namespace Number
{
    int b = 19;

    //With function
    void Func ()
    {
        std::cout << "Namespace with function void" << std::endl;
    }

    void Print (int a)
    {
        std::cout << a << std::endl;
    }
}

void Hello()
{
    cout << "Hello world" << endl;
}


void printInt (int Content)
{
    cout << Content << endl;
}

void printDouble (double Data)
{
    cout << Data << endl;
}

void printChar (char Character)
{
    cout << Character << endl;
}

//Template
template <typename T>
void Printf (T Data)
{
    cout << Data << endl;
}

template <typename T>
int toInt (T Data)
{
    return int (Data);
}

/*template <typename T, typename U>
T max (T Data1, U Data2)
{
    return (Data1 > Data2) ? Data1 : Data2; //Ternary
}*/

template <typename T, typename U>
auto max (T a, U b)
{
    return (a > b) ? T(a) : U(b);
}

int main ()
{
    Hello ();

    std::cout << Number::b << std::endl;

    Number::Func ();

    Number::Print (300);

    Data::Name ();
    Data::Printf (2002);

    cout << "hell \n";

    cout << endl;



    //Typedef ==> contruction for data type
    typedef int B;
    typedef int iVector [3];
    typedef unsigned long Billy;
    typedef double Vector [2];
    typedef string Name;
    typedef float decimalNumbers;

    using Numbers = double;

    B A = 19;
    iVector C = {1, 2, 3}; //Add [3] to check address
    Billy D = 19082002;
    Vector X = {10, 19};
    Numbers Y = 12345;
    Name N = "Billy";
    decimalNumbers O = 19.08;

    cout << "value A: " << A << endl;

    cout << "Value C: " << C [0] << ", " << C [1] << " and " << C [2] << endl;
    
    cout << "value D = " << D << endl;

    cout << "Value X: " << X [0] << " and " << X [1] << endl;

    cout << "Value Y: " << Y << endl;

    cout << "Name: " << N << endl;

    cout << "Value O: " << O << endl;

    cout << endl;



    //Function template
    printInt (19);
    printDouble (19.08);
    printChar ('B');

    printf ("\n");

    Printf (20);
    Printf (1.2);
    Printf ('F');
    Printf ("Billy");

    printf ("\n");

    cout << toInt (30.000) << endl;

    printf ("\n");

    //cout << max (10,400.50) << endl;

    Printf <double> (70.95);

    //cout << max <double, int> (1.10,15) << endl;

    cout << endl;



    //Auto
    int a = 23;
    string b = "Billy";
    double c = 19.200;
    float d = 35.5f;

    auto e = max (a, c);

    cout << a << "\tData type: " << typeid (a).name() << endl;
    cout << b << "\tData type: " << typeid (b).name() << endl;
    cout << c << "\tData type: " << typeid (c).name() << endl;
    cout << d << "\tData type: " << typeid (d).name() << endl;
    
    cout << e << "\tData type: " << typeid (e).name() << endl;

    return 0;
}