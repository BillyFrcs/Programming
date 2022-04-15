using System;

namespace Matrix
{
     class Program
     {
          private static int _row;
          private static int _column;

          public static void Main(string[] args)
          {
               Matrix2x2();

               Matrix4x4();

               CalculateMatrix();
          }

          private static void Matrix2x2()
          {
               Console.WriteLine("Matrix 2 x 2");

               int[,] matrix2x2 = new int[2, 2] { { 19, 26 }, { 38, 40 } };

               for (var i = 0; i < 2; i++)
               {
                    for (int j = 0; j < 2; j++)
                    {
                         Console.Write($"{matrix2x2[i, j]} ");
                    }

                    Console.WriteLine();
               }
          }

          private static void Matrix4x4()
          {
               // Second
               Console.WriteLine("\nMatrix 4 x 4");

               int[,] newMatrix2x2 = new int[4, 4];

               // Row
               newMatrix2x2[0, 0] = 19;
               newMatrix2x2[0, 1] = 20;
               newMatrix2x2[0, 2] = 97;
               newMatrix2x2[0, 3] = 76;

               // Column
               newMatrix2x2[1, 0] = 17;
               newMatrix2x2[1, 1] = 99;
               newMatrix2x2[1, 2] = 77;
               newMatrix2x2[1, 3] = 91;

               newMatrix2x2[2, 0] = 25;
               newMatrix2x2[2, 1] = 29;
               newMatrix2x2[2, 2] = 36;
               newMatrix2x2[2, 3] = 59;

               newMatrix2x2[3, 0] = 65;
               newMatrix2x2[3, 1] = 89;
               newMatrix2x2[3, 2] = 89;
               newMatrix2x2[3, 3] = 94;

               for (var i = 0; i < 4; i++)
               {
                    for (int j = 0; j < 4; j++)
                    {
                         Console.Write($"{newMatrix2x2[i, j]} ");
                    }

                    Console.WriteLine();
               }
          }

          private static void CalculateMatrix()
          {
               Console.Write("\nEnter a number of row: ");
               _row = int.Parse(Console.ReadLine());

               Console.Write("Enter a number of column: ");
               _column = int.Parse(Console.ReadLine());

               int[,] matrix1 = new int[_row, _column];
               int[,] matrix2 = new int[_row, _column];
               int[,] matrixResult = new int[_row, _column];

               Console.WriteLine("\nInput matrix1: ");

               for (var x = 0; x < _row; x++)
               {
                    for (var y = 0; y < _column; y++)
                    {
                         Console.Write("Enter Matrix1[" + x + ", " + y + "]: ");

                         matrix1[x, y] = Convert.ToInt32(Console.ReadLine());
                    }
               }

               Console.WriteLine("\nInput matrix2: ");

               for (var x = 0; x < _row; x++)
               {
                    for (var y = 0; y < _column; y++)
                    {
                         Console.Write("Enter Matrix1[" + x + ", " + y + "]: ");

                         matrix1[x, y] = Convert.ToInt32(Console.ReadLine());
                    }
               }

               for (var x = 0; x < _row; x++)
               {
                    for (var y = 0; y < _column; y++)
                    {
                         matrixResult[x, y] = matrix1[x, y] + matrix2[x, y];
                    }
               }

               Console.WriteLine("\nResult calculate matrix: ");

               for (var x = 0; x < _row; x++)
               {
                    for (var y = 0; y < _column; y++)
                    {
                         Console.Write($"{matrixResult[x, y]} ");
                    }

                    Console.WriteLine();
               }
          }
     }
}