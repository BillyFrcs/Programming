#include <iostream>
#include <cmath>

using namespace std;

//Find average number
double averageProgram(double num1, double num2)
{
     return (num1 + num2) / 2;
}

int testFunctionPow(int num)
{
     return pow(num, 2);
}

int main()
{

     cout << averageProgram(25.05, 35.56) << "\n";

     cout << endl;

     cout << testFunctionPow(5) << endl;
}