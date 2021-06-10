#include <iomanip>
#include <iostream>

using namespace std;

void rectangleShape()
{
     int height, width;
     char symbol;

     cout << "Height: ";
     cin >> height;

     cout << "Width: ";
     cin >> width;

     cout << "Symbol: ";
     cin >> symbol;

     for (int h = 0; h < height; h++)
     {
          for (int w = 0; w < width; w++)
          {
               cout << setw(3) << symbol;
          }
          cout << endl;
     }
}

void triangleShape()
{
     int length;
     char symbol;

     cout << "Length: ";
     cin >> length;

     cout << "Symbol: ";
     cin >> symbol;

     for (int l = 1; l <= length; l++)
     {
          for (int s = 1; s < l; s++)
          {
               cout << setw(3) << symbol;
          }

          cout << endl;
     }

     cout << endl;

     for (int l = length; l >= 1; l--)
     {
          for (int s = 1; s < l; s++)
          {
               cout << setw(3) << symbol;
          }
          cout << endl;
     }
}

//Prototype
void printNumLoops();

void numbersTriangle(int n)
{

     for (int i = 1; i <= n; i++)
     {
          for (int j = 1; j <= i; j++)
          {
               cout << j << " ";
          }
          cout << endl;
     }

     cout << endl;

     int x = 1;

     for (int m = 1; m <= n; m++)
     {
          for (int p = 1; p <= m; p++)
          {
               cout << x++ << " ";
          }
          cout << endl;
     }
}

void alphabetTriangle(int n)
{
     char alphabet = 'a';

     for (int i = 1; i < n; i += 1)
     {
          for (int j = 1; j <= i; j += 1)
          {
               cout << alphabet << " ";
          }
          alphabet++;
          cout << endl;
     }

     cout << endl;

     for (int a = 1; a <= n; a++)
     {
          char alphabet = 'a';

          for (int b = 1; b <= a; b++)
          {
               cout << alphabet++ << " ";
          }
          cout << endl;
     }

     cout << endl;

     char Alphabet = 'A';

     for (int c = 1; c <= n; c++)
     {
          for (int d = 1; d <= c; d++)
          {
               cout << Alphabet++ << " ";
          }
          cout << endl;
     }
}

void mirrorAlphabetTriangle(int n)
{
     char alphabet = 'a';

     for (int i = n; i > 0; i--)
     {
          for (int j = 1; j <= i; j++)
          {
               cout << alphabet;
          }
          cout << endl;
          alphabet++;
     }

     cout << endl;

     char Alphabet = 'a';

     for (int x = 1; x < n; x++)
     {
          for (int y = n - x; y > 0; y--)
               cout << " ";
          for (int z = 1; z <= x; z++)
          {
               cout << Alphabet; //Add " " to make normal triangle
          }
          cout << endl;
          Alphabet++;
     }

     cout << endl;

     char ALphabet = 'A';

     for (int k = n; k > 0; k--)
     {
          for (int l = n - k; l > 0; l--)
               cout << " ";
          for (int m = 1; m <= k; m++)
          {
               cout << ALphabet;
          }
          cout << endl;
          ALphabet++;
     }
}

int main()
{
     rectangleShape();

     cout << endl;

     triangleShape();

     cout << endl;

     printNumLoops();

     cout << endl;

     //Numbers triangle
     int num;

     cout << "Enter num = ";
     cin >> num;

     numbersTriangle(num);

     cout << endl;

     int n;

     cout << "Num = ";
     cin >> n;

     alphabetTriangle(n);

     cout << endl;

     int in;

     cout << "Num : ";
     cin >> in;

     mirrorAlphabetTriangle(in);

     return 0;
}

void printNumLoops()
{
     //Print number program loops
     int n = 4;
     int m = 1;

     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j <= i; j++)
          {
               cout << m << " ";
               m = m + 2;
          }
          m++;
          if (m == 16)
          {
               m++;
          }
          cout << endl;
     }
}