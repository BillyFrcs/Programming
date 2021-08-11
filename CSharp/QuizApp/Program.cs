using System;

namespace QuizApp
{
    class Quiz 
    {
        private string answer1;
        private string answer2;

        static protected string[] answer = {"Correct", "Incorect!"};

        public void Questions()
        {
            Console.Write("1.What is data type to storing integer number ? ");
            answer1 = Console.ReadLine();

            if (answer1 == "Int" || answer1 == "int")
            {
                Console.WriteLine(answer[0]);
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
            }
            else
            {
                Console.WriteLine(answer[1]);
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