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

     printf("\n");

     //Random sentence program
     srand(time(NULL));
     int fortune = rand() % 10;

     if (fortune == 0)
     {

          std::cout << "Flattery will go far tonight.\n";
     }
     else if (fortune == 1)
     {

          std::cout << "Don't behave with cold manners.\n";
     }
     else if (fortune == 2)
     {

          std::cout << "May you someday be carbon neutral\n";
     }
     else if (fortune == 3)
     {

          std::cout << "You have rice in your teeth.\n";
     }
     else if (fortune == 4)
     {

          std::cout << "A conclusion is simply the place where you got tired of thinking.\n";
     }
     else if (fortune == 5)
     {

          std::cout << "No snowflake feels responsible in an avalanche.\n";
     }
     else if (fortune == 6)
     {

          std::cout << "He who laughs last is laughing at you.\n";
     }
     else if (fortune == 7)
     {

          std::cout << "If you look back, you'll soon be going that way.\n";
     }
     else if (fortune == 8)
     {

          std::cout << "You will die alone and poorly dressed.\n";
     }
     else if (fortune == 9)
     {

          std::cout << "The fortune you seek is in another cookie.\n";
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

     cout << endl;

     quizProgram();

     cin.get();
     return 0;
}