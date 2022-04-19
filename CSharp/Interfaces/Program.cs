using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace Interfaces
{
     // Addition interface
     interface IAddition
     {
          int AddTwo(int num1, int num2);
     }

     // Calculator Class Implementing the Addition Interface
     class Calculator : IAddition
     {
          // Overriding the add method of Addition interface
          public int AddTwo(int num1, int num2)
          {
               return num1 + num2;
          }
     }

     class Demo
     {
          public static void Main(string[] args)
          {
               Calculator cal = new Calculator();

               Console.WriteLine(cal.AddTwo(80, 20));
          }
     }
}