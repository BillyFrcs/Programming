#include <iostream>

int main(int argc, char **argv)
{
     //1. Run program
     //2. ./Main some inputs
     std::cout << "Entered " << argc << " arguments: ";

     for (int i = 0; i < argc; i++)
     {
          std::cout << "Value argv: " << argv[i] << '\n';
     }

     argc = 10;

     std::cout << "Argc value = " << argc << std::endl;

     return 0;
}