#include <iostream>

using namespace std;

class bmiCalculator
{
private:
     //Body max index (BMI) calculator
     //Weight(kg) / Height * height(m)
     //Underweight < 18.5
     //Normal weight 18.5 - 24.9
     //Overweight > 25
     double Weight, Height, Bmi;

public:
     bmiCalculator()
     {
          this->Weight = 0;
          this->Height = 0;
          this->Bmi = 0;
     }

     void inputBMI()
     {
          cout << "Weight(kg): ";
          cin >> Weight;

          cout << "Height(m): ";
          cin >> Height;
     }

     void counterBMI()
     {
          Bmi = (Weight) / (Height * Height);

          if (Bmi < 18.5)
               cout << "Underweight \n";

          else if (Bmi > 25)
               cout << "Overweight \n";

          else
               cout << "Normal weight \n";

          cout << "Your BMI is: " << Bmi << "\n";
     }
};

int main()
{
     bmiCalculator *BMI = new bmiCalculator();

     BMI->inputBMI();
     BMI->counterBMI();

     return 0;
}