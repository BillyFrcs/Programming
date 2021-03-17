#include <iostream>

using namespace std;

int Fibonacci(int b)
{
     if (b == 0)
          return 0;

     if (b == 1)
          return 1;

     return Fibonacci(b - 1) + Fibonacci(b - 2);
}

void conceptRecursive(int r)
{
     if (r == 5)
          return;

     //Move printf under conceptRecursive it's gonna change the rotation 
     printf("%d \n", r); //This can modification

     conceptRecursive(r + 1);
}

int main()
{
     int f = Fibonacci(7);

     printf("%d \n\n", f);

     conceptRecursive(0);

     return 0;
}