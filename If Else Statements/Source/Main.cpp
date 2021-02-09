#include <iostream>

using namespace std;

int main()
{
     //User enters int number
     //Program write out if that number is even odd
     int Number;

     cout << "Please enter whole number: ";
     cin >> Number;

     if (Number % 5 == 0)
     {
          cout << "You have entered even number." << endl;
     }
     else
     {
          cout << "You have entered odd number." << endl;
     }

     cout << "Thanks bye.";

     cout << endl;

     //User enters side length of a triangle (a, b, c)
     //Program should write out whether that triangle is equilateral, isosceles or scalene
     float a, b, c;

     cout << "a, b, c: ";
     cin >> a >> b >> c;

     if (a == b && b == c)
     {
          cout << "Equilateral triangle.";
     }
     
     else
     {
          if (a != b && a != c && b != c)
               cout << "Scalene triangle.";

          else
               cout << "Isosceles.";
     }

     system("pause > 0");
}