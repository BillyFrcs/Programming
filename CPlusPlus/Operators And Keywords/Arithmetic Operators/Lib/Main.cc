#include <cmath>
#include <iostream>

//Power (pangkat)
uint_fast64_t power(int number, int value)
{
     int result = std::pow(number, value);

     return result;
}

int main()
{
     const int number = 3, value = 5;

     std::cout << power(number, value) << std::endl;

     return 0;
}