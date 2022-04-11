using System;

namespace Loops
{
     class Program
     {
          static void Main(string[] args)
          {
               // For loops
               Console.Write("Enter a number: ");
               int number = Convert.ToInt32(Console.ReadLine());

               for (int i = 1; i <= number; i++)
               {
                    Console.WriteLine("i = {0}", i); // Repeat
               }

               for (int i = number; i >= 1; i--)
               {
                    Console.WriteLine("i = {0}", i); // Reverse
               }

               // Array for loops
               int[] arrLoops = { 1, 2, 3, 4, 5 };

               for (int i = 0; i < arrLoops.Length; i++)
               {
                    Console.WriteLine(arrLoops[i]);
               }

               Program program = new Program();

               Console.Write("Enter and then get some cool numbers: ");
               double numbers = Convert.ToDouble(Console.ReadLine());

               program.CoolNumbers(numbers);
               program.RolledNumbers();
               program.DiceGame();
               program.EvenNumbers();
          }

          private void CoolNumbers(double numbers)
          {
               for (int i = 1; i <= numbers; i++)
               {
                    double printResult = Math.Pow(2, i);

                    Console.WriteLine(printResult);
               }
          }

          protected void RolledNumbers()
          {
               Random randomGenerator = new Random();

               int roll = 0;
               int attemp = 0;

               Console.WriteLine("Rolling the number...please enter to continue.....");

               while (roll != 10)
               {
                    Console.ReadKey();

                    roll = randomGenerator.Next(1, 20);
                    attemp++;

                    Console.WriteLine("Rolled: " + roll);
               }

               Console.WriteLine("It took you " + attemp + " attemp to roll a 10");
          }

          protected void DiceGame()
          {
               Random randomDice = new Random();

               int dice1 = 0;
               int dice2 = 0;

               int attemp = 0;

               Console.WriteLine("Press enter to roll the dice...");

               while (dice1 != 6)
               {
                    Console.ReadKey();

                    dice1 = randomDice.Next(1, 7);
                    dice2 = randomDice.Next(1, 7);
                    attemp++;

                    Console.WriteLine("Roll 1: " + dice1);
                    Console.WriteLine("Roll 2: " + dice2 + "\n");
               }

               Console.WriteLine("It took you " + attemp + " attemps to roll two of a kind.");
          }

          private void EvenNumbers()
          {
               for (var i = 0; i < 100; i++)
               {
                    if (i % 2 != 0)
                    {
                         continue;
                    }

                    Console.WriteLine("Even number: {0}", i);
               }
          }
     }
}