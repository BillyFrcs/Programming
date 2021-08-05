#include <stdio.h>

//Function display
void display()
{
     printf("Yo");
}

//Function return
int getNum()
{
     int x = 8;
     return x;
}

//Passing by value
int sum(int firstNum, int secondNum)
{
     int total = firstNum * secondNum;

     return total;
}

//Passing by reference
int sumReference(int *firstNum, int *secondNum)
{
     //Access address
     printf("Address firstNum = %d \n", firstNum);
     printf("Address secondNum = %d \n", secondNum);

     int total = *firstNum + *secondNum;

     return total;
}

void arrayAddress()
{
     int arrNum[10];

     for (int i = 0; i < 10; i++)
     {
          arrNum[i] = 0;
          printf("%d = %d \n", i, &arrNum[i]);
     }

     int *a;
     int b;

     scanf("%d %d", &a, &b);

     *a = b;

     for (int i = 0; i < 10; i++)
     {
          printf("%d = %d \n", i, arrNum[i]);
     }
}

int main()
{
     //Pointer
     int b = 19;

     int *p;
     int *p2;

     p = &b;
     p2 = p;

     //printf("%d \n", p);
     printf("%d \n \n", b);

     //Called function
     display();

     int showNum = getNum();

     printf("\n");

     printf("%d \n", showNum); //This can change with getNum();

     //Passing by value
     int showSum = sum(10, 10);

     printf("%d \n \n", showSum);

     //Passing by reference
     int firstNum = 3, secondNum = 5;
     int showSumReference = sumReference(&firstNum, &secondNum);

     printf("%d \n \n", showSumReference);

     //Access array address
     arrayAddress();

     return 0;
}