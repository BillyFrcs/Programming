#include <iostream>
#include <stdio.h>

using namespace std;

class bmiCalculator
{
public:
     //Body max index Calculator
     //Weight(kg) / Height * height(m)
     //Underweight < 18.5
     //Normal weight 18.5 - 24.9
     //Overweight > 25
     float weight, height, bmi;

     bmiCalculator()
     {
          cout << "Weight(kg): ";
          cin >> weight;

          cout << "Height(m): ";
          cin >> height;

          bmi = weight / (height * height);

          if (bmi < 18.5)
               cout << "Underweight \n";

          else if (bmi > 25)
               cout << "Overweight \n";

          else
               cout << "Normal weight \n";

          cout << "BMI is: " << bmi << endl;
     }
};

class changeMToCm
{
public:
     int m, cm;

     changeMToCm()
     {
          cout << "Enter meter value: ";
          cin >> m;

          cm = m * 100;

          cout << "Result m to cm = " << cm  << " cm" << endl;
     }
};

int main()
{
     bmiCalculator();

     cout << endl;

     changeMToCm();

     return 0;
}