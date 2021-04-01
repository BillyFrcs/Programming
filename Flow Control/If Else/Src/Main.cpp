#include <cstdlib>
#include <iostream>

using namespace std;

void petProgam();

void evenAndOddNumber()
{
     //User enters int number
     //Program write out if that number is even odd
     int Number;

     cout << "Please enter whole number: ";
     cin >> Number;

     if (Number % 2 == 0)
          cout << "You have entered even number." << endl;
     //return true;

     else
          cout << "You have entered odd number." << endl;
     //return false;
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

void quizProgram()
{
     //Question program
     int Score = 0;
     char Answer;

     cout << "Question 1" << endl;
     cout << "Who is ceo of Microsoft ?" << endl;
     cout << "A. Mark\t B.Bill Gates\t C.Ellon Musk\t D.Billy" << endl;

     cout << "Enter answer: ";
     cin >> Answer;

     if (Answer == 'B' || Answer == 'b')
     {
          cout << "Yeah, that's right \n";
     }
     else
     {
          cout << "Nope, it's wrong \n";
     }
}

int main()
{
     //Advance if else statements
     int i = 6;

     bool comparisonResult = i == 6; //True condition

     if (comparisonResult) //This can change to 1 = true and 0 = false
          cout << "Comparison true" << endl;

     else
          cout << "Comparison false" << endl;

     cout << endl;

     const char *ptr = "Hello";

     if (ptr != "Hello")
     {
          cout << ptr << endl;
     }
     else if (ptr == "Billy")
     {
          cout << "Billy ptr" << endl;
     }
     else
     {
          cout << "Ptr is null" << endl;
     }

     cout << endl;

     evenAndOddNumber();

     cout << endl;

     lengthTriangle();

     cout << endl;

     studentsPassOrFail();

     cout << endl;

     discountProgram();

     cout << endl;

     quizProgram();

     cout << endl;

     //Palindrome
     int n, r, sum = 0, temp;
     cout << "Enter number: ";
     cin >> n;

     cout << n;
     temp = n;

     while (n > 0)
     {
          r = n % 10;
          sum = (sum * 10) + r;
          n = n / 10;
     }

     if (temp == sum)
          cout << " is a palindrome" << endl;
     else
          cout << " is not a palindrome" << endl;

     cout << endl;

     petsProgram();

     return 0;
}

void petsProgram()
{
     string favAnimal, Pet;

     cout << "Favorite animal: ";
     cin >> favAnimal;

     cout << "So do you have " << favAnimal << " as your pet? (y/n) ? ";
     cin >> Pet;

     if (Pet == "y" || Pet == "y")
     {
          cout << "Wow " << favAnimal << " that's cool. \n";
     }
     else
     {
          cout << "Oh that's to bad. \n";
     }
}