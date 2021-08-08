using System;
using System.Collections.Generic;

namespace Methods
{
     class Program
     {
          static void Main(string[] args)
          {
               for (int i = 1; i < 5; i++)
               {
                    RandomNumber();
               }

               int loop = 0;
               while (loop < 5)
               {
                    Alien();

                    Console.WriteLine("\n");
                    loop++;
               }

               int number1 = Convert.ToInt32(Console.ReadLine());
               int number2 = Convert.ToInt32(Console.ReadLine());

               if (Square(number1, number2) % 2 == 0)
               {
                    Console.Write(Square(number1, number2) + " is even number.\n");
               }
               else
               {
                    Console.Write(Square(number1, number2) + " is uneven number.\n");
               }

               Console.Write("Enter a sentence: ");
               string sentence = Console.ReadLine();

               CountNumberSentence(sentence);
          }

          static void RandomNumber()
          {
               Random rand = new Random();

               int randNumber = rand.Next(0, 20);

               Console.WriteLine(randNumber);
          }

          static void Alien()
          {
               Random randomAlien = new Random();

               string alien = "B." + randomAlien.Next(0, 999999);
               int age = randomAlien.Next(0, 1000);

               Console.WriteLine("Hi i'm " + alien);
               Console.WriteLine("I'm " + age + " years old");
               Console.WriteLine("Oh, i'm an alien :)");
          }

          static int Square(int number1, int number2)
          {
               return number1 * number2;
          }

          static void CountNumberSentence(string sentence)
          {
               string[] words = sentence.Split(' ');

               if (words.Length > 0)
               {
                    Console.WriteLine("There are " + words.Length + " words in that sentence.");
               }
          }
     }
}