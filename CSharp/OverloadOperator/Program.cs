using System;
using System.Collections.Generic;

namespace OverloadOperator
{
     class Program
     {
          static void Main(string[] args)
          {
               string name1 = Console.ReadLine();
               int points1 = Convert.ToInt32(Console.ReadLine());

               string name2 = Console.ReadLine();
               int points2 = Convert.ToInt32(Console.ReadLine());

               DancerPoints dancer1 = new DancerPoints(name1, points1);
               DancerPoints dancer2 = new DancerPoints(name2, points2);

               DancerPoints total = dancer1 + dancer2;
               Console.WriteLine(total.name);
               Console.WriteLine(total.points);

               /*Sample input
               Dave
               8
               Jessica
               7
               */
          }
     }

     class DancerPoints
     {
          public string name;
          public int points;

          public DancerPoints(string name, int points)
          {
               this.name = name;
               this.points = points;
          }

          //overload the + operator
          public static DancerPoints operator +(DancerPoints n, DancerPoints p)
          {
               string name = $"{n.name} & {p.name}";
               int points = n.points + p.points;

               DancerPoints dancer = new DancerPoints(name, points);

               return dancer;
          }
     }
}