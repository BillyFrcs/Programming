using System;

namespace Conditions
{
     class Program
     {
          static void Main(string[] args)
          {
               // If else condition
               Console.Write("Pay $10 to buy a fried rice: ");

               int pay = Convert.ToInt32(Console.ReadLine());

               if (pay < 10)
               {
                    Console.WriteLine("Sorry, you have to pay $10.");
               }
               else if (pay == 10)
               {
                    Console.WriteLine("You have bought a fried rice. thanks");
               }
               else
               {
                    Console.WriteLine("Thank for your paying, here's your change: $" + (pay - 10));
               }

               // Switch case condition
               Console.Write("Enter a number 1 to 3: ");
               int num = Convert.ToInt32(Console.ReadLine());

               switch (num)
               {
                    case 1:
                         Console.WriteLine("You've entered one");
                         break;

                    case 2:
                         Console.WriteLine("You've entered two");
                         break;

                    case 3:
                         Console.WriteLine("You've entered three");
                         break;

                    default:
                         Console.WriteLine("Not found!");
                         break;
               }

               Program RC = new Program();

               RC.RollerCoster();
               RC.MathProblemCondition();
          }

          private void RollerCoster()
          {
               int age;
               int height;

               Console.Write("How old are you: ");
               age = Convert.ToInt32(Console.ReadLine());

               Console.Write("What is your height: ");
               height = Convert.ToInt32(Console.ReadLine());

               int minAge = 15;
               int minHeight = 150;

               if (age < minAge && height < minHeight)
               {
                    Console.WriteLine("Sorry you're still young and short.");
               }

               else
               {
                    if (age >= minAge)
                    {
                         if (height >= minHeight)
                         {
                              Console.WriteLine("Cool you can play Roller Coster now.");
                         }
                    }
               }
          }

          private void MathProblemCondition()
          {
               Console.Write("15 + 2 * 2 = ");
               int result = Convert.ToInt32(Console.ReadLine());

               int answer = 15 + 2 * 2;

               if (result == answer)
               {
                    Console.WriteLine("You're right!");
               }
               else
               {
                    Console.WriteLine("You're wrong!");
               }

               Console.Write("10 * 2 / 4 = ");
               int result2 = Convert.ToInt32(Console.ReadLine());

               int answer2 = 10 * 2 / 4;

               if (result2 == answer2)
               {
                    Console.WriteLine("You're right!");
               }
               else
               {
                    Console.WriteLine("You're wrong!");
               }

               Console.Write("(4 + 3 + 2 + 1) / 2 = ");
               int result3 = Convert.ToInt32(Console.ReadLine());

               int answer3 = (4 + 3 + 2 + 1) / 2;

               if (result3 == answer3)
               {
                    Console.WriteLine("You're right!");
               }
               else
               {
                    Console.WriteLine("You're wrong!");
               }
          }
     }
}
