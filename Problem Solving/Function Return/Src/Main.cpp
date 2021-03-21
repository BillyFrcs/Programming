#include <bits/stdc++.h>
#include <iostream>

using namespace std;

//Return maximum and minimum number
int maximumNumber(int a, int b, int c, int d)
{
     //The relational operator can change to < for find minimum number
     int max;

     if (a > b && a > c && a > d)
     {
          max = a;
     }
     else if (b > c && b > d)
     {
          max = b;
     }
     else if (c > d)
     {
          max = c;
     }
     else
     {
          max = d;
     }
     return max;
}

int main()
{
     int a, b, c, d;

     cout << "Enter four digits number: ";
     cin >> a >> b >> c >> d;

     int getMaxNumber = maximumNumber(a, b, c, d);
     cout << "Maximum number is: " << getMaxNumber;

     return 0;
}