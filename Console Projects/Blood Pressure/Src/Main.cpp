#include "BloodPressure.hpp"

int main()
{
     bool exit = true;
     char Continue;

     while (exit)
     {
          getInfoPatient();

          bloodPressure();

          std::cout << "Try again ? (y/n): ";
          std::cin >> Continue;

          if (Continue == 'y' || Continue == 'Y')
          {
               exit = true;
          }
          else
          {
               if (Continue == 'n' || Continue == 'N')
               {
                    exit = false;
               }
          }
     }

     return 0;
}