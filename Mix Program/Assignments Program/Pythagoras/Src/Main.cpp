#include <cmath>
#include <iostream>
#include <stdio.h>

const double pythagoras(double a, double b)
{
     //With function
     const double result = sqrt((a * a) + (b * b));

     printf("%.2f", result);

     return result;
}

int main()
{
     pythagoras(5, 9);

     std::cin.get();
     return 0;
}