#include <iostream>

int main()
{
     //Computeters surface area and volume of a pyramid
     int baseArea, heightPyramid;

     std::cout << "Base area: ";
     std::cin >> baseArea;

     std::cout << "Height pyramid: ";
     std::cin >> heightPyramid;

     int Value = (baseArea * heightPyramid) * 1/3;

     std::cout << "Result: " << Value << std::endl;

     std::cin.get();
}