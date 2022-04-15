using System;

namespace TypeCasting
{
     class Program
     {
          static void Main(string[] args)
          {
               // Implicit Casting
               int myInt = 19;
               double myDouble = myInt;

               Console.WriteLine(myDouble);

               // Explicit Casting
               float myFloat = 1.4f;
               int number = (int)myFloat;

               Console.WriteLine(myFloat);
               Console.WriteLine(number);

               // Convertion any data types
               int intNumber = 15;
               double doubleNumber = 18.5D;
               string isPlay = "false";

               Console.WriteLine(Convert.ToString(intNumber));
               Console.WriteLine(Convert.ToInt64(doubleNumber));
               Console.WriteLine(Convert.ToBoolean(isPlay));
          }
     }
}
