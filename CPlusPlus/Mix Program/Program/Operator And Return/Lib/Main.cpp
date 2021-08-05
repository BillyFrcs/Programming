#include <iostream>

void converdMetersToCentimeters()
{
     float m, cm;

     std::cout << "Enter meter value: ";
     std::cin >> m;

     cm = (m * 100);

     std::cout << "Result m to cm = " << cm << " cm" << std::endl;
}

int main()
{
     converdMetersToCentimeters();

     return 0;
}