using System;
using System.Collections.Generic;

namespace Arrays
{
     class Program
     {
          static void Main(string[] args)
          {
               string[] favGames = { "PUBG", "Mobile Legends", "GTA", "Pou", "Angry Birds" };

               // Print all the elements
               for (int i = 0; i < favGames.Length; i++)
               {
                    Console.WriteLine((i + 1) + "." + favGames[i]);
               }

               Program program = new Program();

               program.Food();
               program.ListItems();
               program.Students();
               program.Names();
          }

          private void Food()
          {
               // New array to store elements
               string[] food = new string[5];

               Console.Write("Enter 5 of your favorite food: ");
               for (int i = 0; i < food.Length; i++)
               {
                    food[i] = Console.ReadLine();
               }

               Array.Sort(food); // Sorting ascending the characters

               Console.WriteLine("Here's your favorite food: ");
               for (int i = 0; i < food.Length; i++)
               {
                    Console.WriteLine(food[i]);
               }
          }

          protected void ListItems()
          {
               List<int> items = new List<int>();

               items.Add(63);
               items.Add(20);
               items.Add(71);
               items.Add(87);
               items.Add(12);

               foreach (int i in items)
               {
                    Console.WriteLine($"{i}");
               }

               List<string> myHobby = new List<string>();
               myHobby.Add("Coding");
               myHobby.Add("Programming");
               myHobby.Add("Gaming");

               // items.Clear();
               for (int i = 0; i < myHobby.Count; i++)
               {
                    Console.WriteLine($"{myHobby[i]}");
               }

               items.Remove(63); // Remove at element
               items.RemoveAt(0); //REmove at index
               for (int i = 0; i < items.Count; i++)
               {
                    Console.WriteLine($"{items[i]}");
               }
          }

          public void Students()
          {
               Console.Write("How many students are in your class: ");

               int size = Convert.ToInt32(Console.ReadLine());

               string[] nameStudent = new string[size];

               for (int i = 0; i < nameStudent.Length; i++)
               {
                    nameStudent[i] = Console.ReadLine();
               }

               Array.Sort(nameStudent);

               Console.WriteLine("-------------------------");

               for (int i = 0; i < nameStudent.Length; i++)
               {
                    Console.WriteLine(nameStudent[i]);
               }
          }

          public void Names()
          {
               Console.WriteLine("How many name do you want to enter: ");

               int size = Convert.ToInt32(Console.ReadLine());

               List<string> names = new List<string>();

               Console.WriteLine("Please enter " + size + " names: ");
               for (int i = 0; i < size; i++)
               {
                    names.Add(Console.ReadLine());
               }

               names.Sort();

               Console.WriteLine("-------------------------");

               foreach (string name in names)
               {
                    Console.WriteLine(name);
               }
          }
     }
}