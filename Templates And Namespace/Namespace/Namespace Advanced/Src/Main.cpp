#include <iostream>
#include <string>
#include "Header.hpp"
#include <typeinfo>

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
    std::cout << "Hello world" << std::endl;
}


void printInt (int Content)
{
    std::cout << Content << std::endl;
}

void printDouble (double Data)
{
    std::cout << Data << std::endl;
}

void printChar (char Character)
{
    std::cout << Character << std::endl;
}

//Template
template <typename T>
void Printf (T Data)
{
    std::cout << Data << std::endl;
}

template <typename T>
int toInt (T Data)
{
    return int (Data);
}

template <typename T, typename U>
T max (T Data1, U Data2)
{
    return (Data1 > Data2) ? Data1 : Data2; //Ternary
}

template <typename T, typename U>
auto Max (T a, U b)
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

    std::cout << "hell \n";

    std::cout << std::endl;



    //Typedef ==> contruction for data type
    typedef int B;
    typedef int iVector [3];
    typedef unsigned long Billy;
    typedef double Vector [2];
    typedef std::string Name;
    typedef float decimalNumbers;

    using Numbers = double;

    B A = 19;
    iVector C = {1, 2, 3}; //Add [3] to check address
    Billy D = 19082002;
    Vector X = {10, 19};
    Numbers Y = 12345;
    Name N = "Billy";
    decimalNumbers O = 19.08;

    std::cout << "value A: " << A << std::endl;

    std::cout << "Value C: " << C [0] << ", " << C [1] << " and " << C [2] << std::endl;
    
    std::cout << "value D = " << D << std::endl;

    std::cout << "Value X: " << X [0] << " and " << X [1] << std::endl;

    std::cout << "Value Y: " << Y << std::endl;

    std::cout << "Name: " << N << std::endl;

    std::cout << "Value O: " << O << std::endl;

    std::cout << std::endl;



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

    std::cout << toInt (30.000) << std::endl;

    printf ("\n");

    //cout << max (10,400.50) << endl;

    Printf <double> (70.95);

    //cout << max <double, int> (1.10,15) << endl;

    std::cout << std::endl;



    //Auto
    int a = 23;
    std::string b = "Billy";
    double c = 19.200;
    float d = 35.5f;

    auto e = Max (a, c);

    std::cout << a << "\tData type: " << typeid (a).name() << std::endl;
    std::cout << b << "\tData type: " << typeid (b).name() << std::endl;
    std::cout << c << "\tData type: " << typeid (c).name() << std::endl;
    std::cout << d << "\tData type: " << typeid (d).name() << std::endl;
    
    std::cout << e << "\tData type: " << typeid (e).name() << std::endl;

    return 0;
}