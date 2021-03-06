#include <stdio.h>
#include <string>

using namespace std;

int main()
{
     //Print and show output
     //printf ==> print format
     int numInteger = 18;
     float numFloating = 1.8f;
     char typeCharacter = 'B';
     char displayString[100] = {"Billy"};
     double numDouble = 5.6;

     //%d is use for print data type int
     //scanf for ask input from user
     scanf("%d", &numInteger);
     getchar(); //To take one character under scanf
     printf("Num int= %d \n\n", numInteger);

     //%f is use for floating number or data type
     scanf("%f", &numFloating);
     getchar();
     printf("FLoating num = %.1f \n\n", numFloating); //.1 means to remove many zero at the end of floating number

     //%c is use for data type char
     scanf("%c", &typeCharacter);
     getchar();
     printf("Char type = %c \n\n", typeCharacter);

     //%s is use for data type string
     scanf("%[^\n]", displayString); //Without & to use string it's alright
     //Use this [^\n] to print all input string characters
     getchar();
     printf("Display = %s \n\n", displayString);

     printf("Num double = %f", numDouble); //Same with float

     return 0;
}