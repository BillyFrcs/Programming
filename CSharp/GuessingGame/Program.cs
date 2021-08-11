using System;
using System.Collections.Generic;

namespace GuessingGame
{
     class GuessingNumber
     {
          private int number;

          public void GuessNumber()
          {
               do
               {
                    Console.Write("Guessing a number between 1 to 20: ");
                    number = Convert.ToInt32(Console.ReadLine());

                    if (number < 11)
                    {
                         Console.WriteLine("Too low!");
                    }
                    else if (number > 11)
                    {
                         Console.WriteLine("Too high!");
                    }

                    if (number == 11)
                    {
                         Console.WriteLine("You guess it, congrats...:D");
                    }
               } while (number != 11);
          }
     }
     class Program
     {
          static void Main(string[] args)
          {
               Console.ForegroundColor = ConsoleColor.Blue;

               GuessingNumber guessingNumber = new GuessingNumber();

               guessingNumber.GuessNumber();
          }
     }
}
