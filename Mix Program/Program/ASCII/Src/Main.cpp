#include <iostream>
#include <stdio.h>

using namespace std;

void asciiProgram()
{
     char c1, c2, c3, c4, c5;

     cout << "Enter 5 leters: ";
     cin >> c1 >> c2 >> c3 >> c4 >> c5;

     cout << "ASCII: " << int(c1) << " " << int(c2) << " " << int(c3) << " "
          << int(c4) << " " << int(c5) << endl;
}

void additionProgram()
{
     int a = 20, b = 20;
     int c = ++a + ++b;

     printf("%d \n", c);
}

void name()
{
     string value = "6673767689", print;

     size_t num = 0;

     while (num < value.length())
     {
          print += char(10 * (int(value[num]) - 48) + (int(value[num + 1]) - 48));
          num += 2;
     }
     cout << print << endl;
}

int main()
{
     //Abbreviated American Standard Code for Information Interchange
     //Concepts
     cout << (int)'a' << endl;
     cout << int('a') << endl;
     cout << int('A') << endl;
     cout << char(65) << endl;

     printf("\n");

     asciiProgram();

     printf("\n");

     additionProgram();

     printf("\n");

     name();

     return 0;
}