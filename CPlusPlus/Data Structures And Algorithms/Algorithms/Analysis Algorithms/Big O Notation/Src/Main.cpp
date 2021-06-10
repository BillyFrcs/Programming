#include <iostream>

//Time complexity
class BigONotation
{
private:
     double N, sum = 0;

public:
     //Algorithm program
     double sumOfNProgram()
     {
          std::cout << "Enter number: ";
          std::cin >> N;

          for (int i = 1; i < N; ++i){
               sum += i;
          }
          std::cout << "Value program = " << sum << "\n";

          return sum;
     }

     //Algorithm with math (more clear and faster)
     void sumOfNMath(double Sum);
};

void BigONotation::sumOfNMath(double Sum)
{
     Sum = (N * (N + 1)) / 2;

     std::cout << "Values math = " << Sum << "\n";
}

int main()
{
     BigONotation BON;

     BON.sumOfNProgram();

     double N;
     std::cout << "Enter number: ";
     std::cin >> N;

     BON.sumOfNMath(N);

     return 0;
}