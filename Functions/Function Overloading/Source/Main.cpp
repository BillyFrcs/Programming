#include <iostream>

using namespace std;

int multiply(int x, int z);

long sumLong(long a, long b);

double sumDouble(double a, double b);

float sumFloat(float a, float b, float c);

int main()
{
     int multiplyNum = multiply(5, 5);
     cout << "Result int: " <<  multiplyNum << endl;

     cout << sumLong(5, 10) << endl;
     cout << sumDouble(9.5, 3.4) << endl;
     cout << sumFloat(6.5, 3.2, 4.6) << endl;

     return 0;
}

int multiply(int x, int z)
{
     return x * z;
}

long sumLong(long a, long b)
{
     return a + b;
}

double sumDouble(double a, double b)
{
     return a - b;
}

float sumFloat(float a, float b, float c)
{
     return a + b * c;
}