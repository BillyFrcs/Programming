#include <iostream>

void timesPtr(int *N)
{
     *N = (*N * *N);
}

int main(int argc, char *argv[])
{
     int num = 5, *counter = &num;

     timesPtr(&num);

     std::cout << "Value ptr = " << num << "\n";

     return 0;
}