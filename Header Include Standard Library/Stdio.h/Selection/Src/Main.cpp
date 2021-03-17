#include <stdio.h>

using namespace std;

int main()
{

     //Selection
     //if, else if, else
     //Even number and odd number
     int num = 2;

     if (num == 0)
     {
          printf("NULL \n");
     }
     else if (num % 2 == 0)
     {
          printf("Even number \n\n");
     }
     else if (num % 2 == 1) //This can remove the condition and change to else
     {
          printf("Odd number \n");
     }

     //switch case
     int number = 2;

     switch (number)
     {
     case 1:
          printf("One \n");
          break;

     case 2:
          printf("Two \n\n");
          break;

     default:
          printf("Not found \n");
          break;
     }

     //Ternary if
     //Condition ? true : false
     printf("%s", (num > 0 ? "Positive \n" : num < 0 ? "Negative \n"
                                                    : "NULL"));

     int input, upperLimit, lowerLimit; // ==> Batas atas and batas bawah

     //Example input 5 | 1 10
     scanf("%d", &input);
     scanf("%d %d", &upperLimit, &lowerLimit);

     if (input >= upperLimit && input <= lowerLimit)
     {
          printf("%d Among %d and %d", input, upperLimit, lowerLimit);
     }
     else
     {
          printf("%d Not among %d and %d", input, upperLimit, lowerLimit);
     }

     return 0;
}