#include <iostream>
#include <string>
#include <stdio.h>
#include "Header.h"

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




    system ("pause > 0");
    std::cin.get();
    return 0;
}