using System;

namespace Generic
{
     public class Program
     {
          private class Stack<T>
          {
               private int _index = 0;

               private T[] _innerArray = new T[150];

               public T Push(T value)
               {
                    return _innerArray[_index++] = value;
               }

               public T Pop()
               {
                    return default(T);

                    // return _innerArray[_index--];
               }

               public T Get(int value)
               {
                    return _innerArray[value];
               }
          }

          public static void Main(string[] args)
          {
               string a = "Billy";
               string b = "Sendy";

               Console.WriteLine("Before swapping: a = {0}, b = {1}", a, b);

               Swap<String>(ref a, ref b);

               Console.WriteLine("After swapping: a = {0}, b = {1}", a, b);

               // Create stack 
               Stack<int> stack = new Stack<int>();

               int x = 5;

               Console.WriteLine($"Push x = {stack.Push(x)}");

               Console.WriteLine($"Pop x = {stack.Pop()}");
          }

          static void Swap<T>(ref T a, ref T b)
          {
               T temp = a;
               a = b;
               b = temp;
          }
     }
}