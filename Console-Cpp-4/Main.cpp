#include <iostream>
#include <string>
#include <stdio.h>
#include "Header.h"

using namespace std;

using namespace Number;

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


    system ("pause > 0");
    std::cin.get();
    return 0;
}