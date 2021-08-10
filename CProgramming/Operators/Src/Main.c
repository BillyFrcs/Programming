#include <stdio.h>

int main()
{
     //Arithmetic operators
     printf("Arithmetic operators \n");
     printf("Addition: %d \n", 5 + 5); //Can change with another data type and operators
     printf("Subtrac: %f \n", 5.5 - 3.6);
     printf("Multiply: %d \n", 10 * 10);
     printf("Division: %d \n", 50 / 10);
     printf("Modulo: %d \n", 20 % 6); //Can change to decimal or floating number
     printf("Arithmetic: (%d + %d) / %d =  %d \n \n", 10, 3, 6, (10 + 3) / 6);

     //Bitwise
     printf("Bitwise \n");
     printf("AND: %d \n", 5 & 1);
     printf("NOR: %d \n", 3 | 6);
     printf("XOR: %d \n", 4 ^ 9);
     printf("Shift right: %d \n", 3 << 8);
     printf("Shift left: %d \n \n", 6 << 5);

     //Increment and decrement
     printf("Increment and decrement \n");
     int number = 9;
     printf("Number: %d \n", ++number);

     int num = 0;
     printf("Num: %d \n", --num);

     //Arithmetic program
     printf("Arithmetic program \n");
     int inputNum, inputNum2;

     scanf("%d %d", &inputNum, &inputNum2);
     printf("%d \n", inputNum + inputNum2);

     scanf("%d %d", &inputNum, &inputNum2);
     printf("%d \n", inputNum - inputNum2);

     scanf("%d %d", &inputNum, &inputNum2);
     printf("%d \n", inputNum * inputNum2);

     scanf("%d %d", &inputNum, &inputNum2);
     printf("%d \n", inputNum / inputNum2);

     scanf("%d %d", &inputNum, &inputNum2);
     printf("%d \n", inputNum % inputNum2);

     return 0;
}