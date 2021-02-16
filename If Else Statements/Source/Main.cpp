#include <iostream>

using namespace std;

void evenAndOddNumber()
{
     //User enters int number
     //Program write out if that number is even odd
     int Number;

     cout << "Please enter whole number: ";
     cin >> Number;

     if (Number % 2 == 0)
          cout << "You have entered even number." << endl;

     else
          cout << "You have entered odd number." << endl;
}
void lengthTriangle()
{
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
}

void studentsPassOrFail()
{
     int n1, n2, n3, n4, value;

     cout << "value 1: ";
     cin >> n1;

     cout << "value 2: ";
     cin >> n2;

     cout << "value 3: ";
     cin >> n3;

     cout << "value 4: ";
     cin >> n4;

     value = (n1 + n2 + n3 + n4) / 4;

     if (value < 50)
          cout << "fail" << endl;

     else
          cout << "Pass" << endl;
}

void discountProgram()
{
     int buy, discount;

     if (buy > 100000)
     {
          discount = 0.1 * buy;
     }
     else
     {
          discount = 0;
     }
}

int main()
{

     evenAndOddNumber();

     cout << endl;

     //lengthTriangle();

     cout << endl;

     studentsPassOrFail();

     cout << endl;

     discountProgram();
     
     system("pause > 0");
}