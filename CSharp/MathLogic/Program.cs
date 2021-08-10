using System;
using System.Collections.Generic;

namespace MathLogic
{
     class Program
     {
          static void Main(string[] args)
          {
               // Min and Max
               int a = 10;
               int b = 80;

               Console.WriteLine("Max = " + Math.Max(a, b));
               Console.WriteLine("Min = " + Math.Min(a, b));

               // Sqrt (square root)
               Console.WriteLine("Sqrt(25) = " + Math.Sqrt(25));

               // Absolute value
               Console.WriteLine("Abs(15.9) = " + Math.Abs(15.9f));

               // Round
               Console.WriteLine("Round(29.8) = " + Math.Round(29.8D));

               // Swapping
               int x = 10;
               int y = 20;
               Console.WriteLine("x = " + x + ", y = " + y);

               int z = y;
               y = x;
               x = z;

               Console.WriteLine("x = " + x + ", y = " + y);
          }
     }
}
