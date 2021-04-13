#include <iostream>

class Number
{
private:
     size_t num = 5;

public:
     int getNum() const; //Read only
     void printNum(int n);
};

int Number::getNum() const //Cannot modify the function
{
     return num;
}

void Number::printNum(int n) //Modify the number member
{
     num = n;
     std::cout << num;
}

template <typename T>
const int print(const T size)
{
     return size;
}

int main(int argc, char const *argv[])
{
     //Const with int
     const int MAX = 60;

     //When adding const annot modify the pointer
     int *a = new int;

     *a = 19;

     //Reassigned
     a = (int *)&MAX;

     std::cout << *a << "\n\n";

     //Using const for object or variable cannot modify
     const char *name = "B";

     const char *Name = name;

     std::cout << *Name << "\n\n";

     //Const function
     std::cout << print(42) << "\n\n";

     //Class object
     Number N;

     std::cout << N.getNum() << "\n";

     N.printNum(6);

     return 0;
}