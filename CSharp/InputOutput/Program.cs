using System;

namespace InputOutput
{
     class Program
     {
          static void Main(string[] args)
          {
               // Input output with strings
               Console.Write("Enter something: ");
               String something = Console.ReadLine();
               Console.WriteLine("You entered: " + something);

               // Input output with numbers
               double num1;
               double num2;

               Console.Write("Enter first number: ");
               num1 = Convert.ToDouble(Console.ReadLine());

               Console.Write("Enter second number: ");
               num2 = Convert.ToDouble(Console.ReadLine());

               double calculate = (num1 * num2) / (num1 * num2);
               Console.WriteLine("The result is: " + calculate);

               // Object from ChallengeProgram
               ChallengeProgram challenge = new ChallengeProgram();

               challenge.ChallengeAverageNumber();

               SumNumber();
          }

          private static void SumNumber()
          {
               Console.Write("Input a number: ");
               var input = int.Parse(Console.ReadLine());

               var total = 0;

               for (var i = 2; i <= input; i += 2)
               {
                    total += i;

                    Console.Write($"{i} + ");
               }

               Console.Write(" = " + total);
          }
     }

     class ChallengeProgram
     {
          public void ChallengeAverageNumber()
          {
               double a, b, c;

               Console.Write("Enter a number: ");
               a = Convert.ToDouble(Console.ReadLine());

               Console.Write("Enter a second number: ");
               b = Convert.ToDouble(Console.ReadLine());

               Console.Write("Enter a third number: ");
               c = Convert.ToDouble(Console.ReadLine());

               double result = (a + b + c) / 3;

               Console.WriteLine("The result is: " + result);
          }
     }
}
