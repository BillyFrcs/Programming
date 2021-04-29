#include <iostream>

void timesPtr(int *N)
{
     *N = (*N * *N);
}

void valuePtr(int *num)
{
     std::cout << "Value ptr function = " << *num << "\n";
     std::cout << "Value ptr address = " << &num << "\n";
}

int main(int, char **)
{
     int num = 5, *counter = &num;

     timesPtr(&num);

     std::cout << "Value ptr = " << num << "\n\n";

     //Print ptr function
     int Value = 20;

     valuePtr(&Value);

     return 0;
}