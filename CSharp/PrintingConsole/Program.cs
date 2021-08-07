using System;

namespace Basics
{
     class Program
     {
          static void Main(string[] args)
          {
               // Basics printing on the console
               Console.Title = "Billy";
               Console.ForegroundColor = ConsoleColor.Blue; // Set color

               Console.WriteLine("Hello World!");

               Console.WriteLine("A proud knight named...");
               Console.ReadLine();

               Console.WriteLine("...Walked into a bar. At the counter he met a...");
               Console.ReadLine();

               Console.WriteLine("...Who asked him what he wanted to drink ?");
               Console.ReadLine();

               Console.WriteLine("...shouted the knight! the bartender shushed him quickly");

               Console.ForegroundColor = ConsoleColor.Red;
               Console.WriteLine("But it was to late... A dragon ate them both");

               // Console.ReadKey(); // To pause the program on the console
          }
     }
}