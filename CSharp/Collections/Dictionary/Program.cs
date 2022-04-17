using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Collections.Dictionary
{
     class Program
     {
          static void Main(string[] args)
          {
               Console.Write("Input discount: ");
               int discount = Convert.ToInt32(Console.ReadLine());

               Dictionary<string, int> coffee = new Dictionary<string, int>();
               coffee.Add("Americano", 50);
               coffee.Add("Latte", 70);
               coffee.Add("Flat White", 60);
               coffee.Add("Espresso", 60);
               coffee.Add("Cappuccino", 80);
               coffee.Add("Mocha", 90);

               foreach (var entry in coffee)
               {
                    Console.WriteLine($"{entry.Key}: {entry.Value - entry.Value * discount / 100}");
               }
          }
     }
}