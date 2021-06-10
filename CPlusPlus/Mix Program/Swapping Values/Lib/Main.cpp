#include <iostream>

//Pass by value, address and reference
void passingValue(float *a, float *b)
{
     float c = *a;
     *a = *b;
     *b = c;
}

//Note: when using function to make swap program it should pass by pointer
void passValue(int *c, int *d)
{
     *c = *c + *d;
     *d = *c - *d;
     *c = *c - *d;
}

int main()
{
     float a = 30.0f, b = 50.0f;

     std::cout << "Before swap = " << a << "\n";
     std::cout << "Before swap = " << b << "\n";

     passingValue(&a, &b);

     std::cout << "After swap = " << a << "\n";
     std::cout << "After swap = " << b << "\n\n";

     int c = 2, d = 6;

     std::cout << "Before swap = " << c << "\n";
     std::cout << "Before swap = " << d << "\n";

     passValue(&c, &d);

     std::cout << "After swap = " << c << "\n";
     std::cout << "After swap = " << d << "\n";

     return 0;
}