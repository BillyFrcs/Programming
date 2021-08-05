#include <iostream>
#include <time.h>

void randFunction(int num)
{
     //Time function
     srand(time(NULL)); //NULL can change to 0

     for (size_t i = 1; i <= num; i++)
          std::cout << (rand() % 100) << "\n";
}

int main(int argc, char *argv[])
{
     //Get the random numbers
     randFunction(5);

     __debugbreak;
}