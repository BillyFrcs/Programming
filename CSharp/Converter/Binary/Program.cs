using System;

namespace Converter.Binary
{
     public class Converter
     {
          public static String ToBinary(int num)
          {
               String binary = "";

               while (num > 0)
               {
                    binary = (num % 2) + binary;

                    num /= 2;
               }

               return binary;
          }
     }

     public class Program
     {
          private static void Main(string[] args)
          {
               Console.Write("Input number: ");
               int inputNumber = Convert.ToInt32(Console.ReadLine());

               Console.WriteLine(Converter.ToBinary(inputNumber));
          }
     }
}