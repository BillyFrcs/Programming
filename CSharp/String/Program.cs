﻿using System;
using System.Collections.Generic;

namespace String
{
     class Program
     {
          static void Main(string[] args)
          {
               string[] words = {
                "home",
                "programming",
                "victory",
                "C#",
                "football",
                "sport",
                "book",
                "learn",
                "dream",
                "fun"
               };

               Console.Write("Enter a letter: ");
               string letter = Console.ReadLine();

               int count = 0;

               foreach (string word in words)
               {
                    if (word.Contains(letter))
                    {
                         Console.WriteLine(word);

                         count++;
                    }
               }

               if (count == 0)
               {
                    Console.WriteLine("No match");
               }
          }
     }
}