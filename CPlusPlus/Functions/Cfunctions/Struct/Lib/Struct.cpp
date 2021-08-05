#include <stdio.h>
#include <string.h>
#include <windows.h>

struct Data
{
     char name[200];
     int age;
};

struct Sum
{
     int height, weight;
};

struct getInfo
{
     Data user;
     Sum totalCount;
};

getInfo infoData[100];
int totalData = 0;

getInfo addData()
{
     char name[200];
     int age, height, weight;

     printf("Name: ");
     scanf("%s", name);
     getchar();

     printf("Age: ");
     scanf("%d", &age);
     getchar();

     printf("Height: ");
     scanf("%d", &height);
     getchar();

     printf("Weight: ");
     scanf("%d", &weight);
     getchar();

     getInfo newInfo = {{"", age}, {height, weight}};
     strcpy(newInfo.user.name, name);

     return newInfo;
}

void showData()
{
     for (int i = 0; i < totalData; i++)
     {
          getInfo Total = infoData[i];

          printf("%s is %d years old total count height and weight is %d\n",
                 Total.user.name, Total.user.age, Total.totalCount.height + Total.totalCount.weight);
     }
}

int main()
{
     int input = 0;

     do
     {
          system("cls");

          printf("1. Add Data\n");
          printf("2. Show Data\n");
          printf("3. Exit\n");
          scanf("%d", &input);
          getchar();

          switch (input)
          {
          case 1:
               infoData[totalData++] = addData();
               break;

          case 2:
               showData();
               getchar();
               break;
          }
     } while (input != 3);

     return 0;
}