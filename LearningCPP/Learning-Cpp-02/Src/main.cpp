#include <iostream>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <cmath>

using namespace std;

//Prototype factorial
int factorial(int a);

//Prototype fibonacci
int fibonacci (int b);

//Prototype function pointer
void function (int *);

void squares (int *);



//Prototype function reference
void fungsi (int &);

void kuadrat (int &);



int main (int argc, char const *argv[])
{
    //Recursive factorial
    int number, result;

    cout << "Count factorial from: ";
    cin >> number;

    result = factorial(number);
    cout << "\nResult factorial is: " << result << endl << endl;

    cout << endl;



    //Fibonacci recursive
    int angka, hasil;

    cout << "Count fibonacci to: ";
    cin >> angka;

    hasil = fibonacci(angka);

    cout << "Value is: ";
    cout << hasil << endl << endl;

    cout << endl;


    
    //Pointer value and address
    int c = 5;

    //int *cPtr = &c;
    int *cPtr = nullptr;
    cPtr = &c;
    
    cout << "Value from c: " << c << endl;
    cout << "Address c is: "<< cPtr << endl;
    //cout << sizeof(int) << " Byte" << endl;

    //Dereferencing take data from a pointer
    c = 10;
    cout << "Take value from pointer cPtr: " << *cPtr << endl << endl;

    cout << endl;



    //Reference
    int d = 50;

    cout << "Address from d: " << &d << endl;
    cout << "Value from d: " << d << endl;

    int &e = d;

    cout << "Value from e: " << e << endl;
    cout << "Address form e: " << &e << endl;

    d = 30;
    cout << "Value from d: " << d << endl;
    cout << "Value from e: " << e << endl;

    e = 40;
    cout << "Value from d: " << d << endl;
    cout << "Value from e: " << e << endl << endl;

    cout << endl;



    //Function with pointer
    int f = 8;

    cout << "Address from f " << &f << endl;
    cout << "Value from f " << f << endl;

    function (&f); //Function with input pointer

    squares (&f);

    cout << "Value kuadrat from f " << f << endl << endl;;

    cout << endl;



    //Function with reference
    int h = 3;

    cout << "Address of h: " << &h << endl;
    cout << "Value of h: " << h << endl;

    int &i = h;

    cout << "Address of i: " << &i << endl;
    cout << "Value of i: " << i << endl;

    fungsi (h);

    cout << "Value of h: " << h << endl;

    kuadrat (h);

    cout << "Value of h: " << h << endl;

    system("pause > 0");
    cin.get();
    return 0;
}


//Factorial
int factorial(int a)
{
    if (a <= 1) {
        cout << a;
        return a;
    }

    else {
        cout << a << " * ";
        return a * factorial(a - 1);
    }
}

//FIbonacci
int fibonacci (int b) 
{
    //cout << "Function fibonacci: " << b << endl;

    if ((b == 0) || (b == 1) ){
        return b;
    }

    else { 
         return fibonacci (b - 1) + fibonacci (b - 2);
    }
}

//Function pointer
void function (int *g) 
{
    cout << "Address from g " << g << endl;
    cout << "Value from g " << *g << endl; //Dereferencing
}

void squares (int *valPtr)
{
    *valPtr = (*valPtr) * (*valPtr); 
}

//Function reference
void fungsi (int &h)
{
    h = 2;

    cout << "Address of h: " << &h << endl;
    cout << "Value of h: " << h << endl;
} 

void kuadrat (int &valueRef)
{
    valueRef = valueRef * valueRef;
}