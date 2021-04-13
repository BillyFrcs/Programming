#include <iostream>

int bitwiseAnd(int a, int b)
{
     //Bitwise (& And)
     return (a & b);
}

void bitwiseOr()
{
     //Bitwise (| Or)
     int c = 5, d = 9;
     std::cout << "Or = " << (c | d) << "\n";
}

void bitwiseXor()
{
     //Bitwise (^ Xor)
     int e = 4, f = 16;
     std::cout << "Xor = " << (16 ^ 4) << "\n \n";
}

void bitwiseShift()
{
     //Bitwise shift operator (Right and Left)
     int number = 95;

     //Bitwise (<< Right)
     for (int i = 1; i < 6; i++)
     {
          std::cout << "Shift right = " << (number >> i) << "\n";
     }

     std::cout << "\n";

     //Bitwise (>> Left)
     for (int j = 1; j < 6; j++)
     {
          std::cout << "Shift left = " << (number << j) << "\n";
     }
}

int main()
{
     std::cout << "And = " << bitwiseAnd(13, 21) << "\n";

     bitwiseOr();

     bitwiseXor();

     bitwiseShift();

     return 0;
}