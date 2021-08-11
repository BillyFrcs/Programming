using System;

namespace QuizApp
{
     class Quiz
     {
          private string answer1;
          private string answer2;

          private string answer3;

          private int score = 0;

          static protected string[] answer = { "Correct", "Incorrect!" };

          public void Questions()
          {
               Console.Write("1.What is the data type to storing integer number ? ");
               answer1 = Console.ReadLine();

               if (answer1 == "Int" || answer1 == "int")
               {
                    Console.WriteLine(answer[0]);
                    score++;
               }
               else
               {
                    Console.WriteLine(answer[1]);
               }

               Console.Write("\n2.What is the most popular Game Engine with C# ? ");
               answer2 = Console.ReadLine();

               if (answer2 == "Unity" || answer2 == "unity")
               {
                    Console.WriteLine(answer[0]);
                    score++;
               }
               else
               {
                    Console.WriteLine(answer[1]);
               }

               Console.Write("\n3.What programming language that Unreal Engine use as scripting language ? ");
               answer3 = Console.ReadLine();

               switch (answer3)
               {
                    case "C++":
                         Console.WriteLine(answer[0]);
                         score++;
                         break;

                    case "c++":
                         Console.WriteLine(answer[0]);
                         score++;
                         break;

                    default:
                         Console.WriteLine(answer[1]);
                         break;
               }

               int countScore = ((score / 3) * 100);

               if (countScore == 100)
               {
                    Console.WriteLine("\nYour score = " + countScore);
               }
          }
     }

     class Program
     {
          static void Main(string[] args)
          {
               Quiz quiz = new Quiz();

               quiz.Questions();
          }
     }
}