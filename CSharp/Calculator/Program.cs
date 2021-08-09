using System;
using System.Collections.Generic;

namespace Calculator
{
     class CalculatorApp
     {
          private double firstNumber;
          private double secondNumber;
          private double calculate;
          static private char operators;

          public CalculatorApp(double first_number, double second_number)
          {
               firstNumber = first_number;
               secondNumber = second_number;
          }

          ~CalculatorApp()
          {
          }

          public void SetInput()
          {
               Console.Write("Enter first number: ");
               firstNumber = Convert.ToDouble(Console.ReadLine());

               Console.Write("Enter second number: ");
               secondNumber = Convert.ToDouble(Console.ReadLine());

               Console.Write("Choose operator(+, -, *, /, %): ");
               operators = Console.ReadLine()[0];
          }

          public void GetCalculate()
          {
               if (operators == '+')
               {
                    calculate = (firstNumber + secondNumber);
               }
               else if (operators == '-')
               {
                    calculate = (firstNumber - secondNumber);
               }
               else if (operators == '*')
               {
                    calculate = (firstNumber * secondNumber);
               }
               else if (operators == '/')
               {
                    calculate = (firstNumber / secondNumber);
               }
               else if (operators == '%')
               {
                    calculate = (firstNumber % secondNumber);
               }
               else
               {
                    Console.WriteLine("Invalid operator!");
               }

               Console.WriteLine("Result calculate " + firstNumber + " " + operators + " " + secondNumber + " = " + calculate);
          }
     }

     class Program
     {
          static void Main(string[] args)
          {
               CalculatorApp calculator = new CalculatorApp(0, 0);

               calculator.SetInput();
               calculator.GetCalculate();
          }
     }
}