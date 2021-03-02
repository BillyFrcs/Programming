#include <iostream>
#include <cmath>
#include "Convert.hpp"

using namespace std;

//Binary to decimal converted prototype
int convertedBinToDec(long long n);

int main()
{
     long long inputBin;

     cout << "Enter binary number: ";
     cin >> inputBin;

     cout << "Convert binary " << inputBin << " to decimal is " << convertedBinToDec(inputBin) << "\n";

     return 0;
}