using System;

namespace VariablesDataTypes
{
     class Program
     {
          static void Main(string[] args)
          {
               // Numbers
               int number = 19;
               Console.WriteLine("Number is : " + number);

               float floatingNumber = 1.5f;
               Console.WriteLine("Floating number is : " + floatingNumber);

               double doubleNumber = 3.14d;
               Console.WriteLine("Double number is : " + doubleNumber);

               // Strings
               String name = "Billy";
               Console.WriteLine("Name is : " + name);

               char character = 'B';
               Console.WriteLine("Character is : " + character);

               // Guess the type of the variable
               var value = "Franscois";
               Console.WriteLine("Value is : " + value);

               // Boolean
               bool isTrue = true;
               Console.WriteLine("Is true : " + isTrue);

               bool isFalse = false;
               Console.WriteLine("Is false : " + isFalse);

               // Constants
               const int constantNumber = 10;
               Console.WriteLine("Constant number is : " + constantNumber);

               const float constantFloatingNumber = 1.5f;
               Console.WriteLine("Constant floating number is : " + constantFloatingNumber);

               const double constantDoubleNumber = 3.14d;
               Console.WriteLine("Constant double number is : " + constantDoubleNumber);
          }
     }
}
