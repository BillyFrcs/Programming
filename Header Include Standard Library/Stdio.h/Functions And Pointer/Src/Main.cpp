#include <stdio.h>

using namespace std;

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

int main()
{
     //Pointer
     int b = 19;

     int *p;
     int **p2;

     p = &b;
     p2 = &p;

     printf("%d \n", *p2);
     printf("%d \n \n", &b);

     display();

     int showNum = getNum();

     printf("\n");

     printf("%d \n", showNum);

     return 0;
}