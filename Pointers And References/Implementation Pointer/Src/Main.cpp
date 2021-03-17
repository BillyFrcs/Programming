#include <iostream>
#include <string>

using namespace std;

int main()
{
    //Memory address represented in hexadecimal.
    //int* makes it a pointer rather than a normal variable.
    //Pointer(*) and reference(&)
    string Name = "Billy";

    cout << Name << " at address " << &Name << endl;

    //Method 1
    string *valuePtr1 = &Name;

    cout << "Value pointer 1: " << valuePtr1 << endl;

    //Method 2
    string name = "Franscois";
    string* valuePtr2;
    valuePtr2 = &name;

    cout << name << " Value pointer 2: " << valuePtr2 << endl;
    
    cout << endl;

    //Deference / indirection
    int Value = 19;
    int *Ptr = &Value;

    cout << "Value: " << Value << endl;
    cout << "&Value: " << &Value << endl;
    cout << "Ptr: " << Ptr << endl;
    cout << "&Ptr: " << *Ptr << endl;

    string *ptrName = &Name;
    cout << "Ptr name " << ptrName << endl;
    cout << "Value at address ptrName: " << *ptrName << endl;

    cout << endl;

    //Manipulation value
    *ptrName = "Kolibonso";
    cout << "Manipulation value ptrName: " << *ptrName << endl;

    int valueNum = 8;
    int *ptrValueNum = &valueNum;

    cout << "valueNum: " << valueNum << endl;

    *ptrValueNum = 10;

    cout << "Value manipulation ptrValueNum: " << *ptrValueNum << endl;

    //Arithmetics 
    *ptrValueNum += 5;
    cout << "Count ptrValueNum: " << *ptrValueNum << endl;

    //Increment and decrement
    (*ptrValueNum)++; //It can change with this --
    cout << "Increment ptrValueNum: " << *ptrValueNum << endl;

    return 0;
}