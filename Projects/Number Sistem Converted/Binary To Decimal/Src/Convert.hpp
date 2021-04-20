#include <cmath>

//Binary to decimal converted
int convertedBinToDec(long long num)
{
     int decNum = 0, i = 0, remainder;

     while (num != 0)
     {
          remainder = num % 10;
          num /= 10;
          decNum += remainder * pow(2, i);
          i++;
     }
     return decNum;
}