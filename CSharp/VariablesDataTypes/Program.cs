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
          }
     }
}
