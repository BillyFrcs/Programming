using System;

namespace Program
{
    class Program
    {
        static void Main(string[] args)
        {
            Random rand = new Random();

            int coin = rand.Next(0, 2);

            Console.Write("Coin flip result: ");

            Console.WriteLine((coin == 0) ? "Heads" : "Tails");
        }
    }
}
