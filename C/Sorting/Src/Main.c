#include <stdbool.h>
#include <stdio.h>

//Array bubble sort
int arrBubbleSort[] = {20, 19, 23, 56, 35};

//Array selection sort
int arrSelectionSort[] = {54, 18, 40, 32, 60};

int length = 5;

//Bubble sort
void bubbleSort()
{
     for (int i = 0; i < length; i++)
     {
          bool swapped = false;
          for (int j = 0; j < length - i - 1; j++)
          {
               if (arrBubbleSort[j] > arrBubbleSort[j + 1])
               {
                    int temp = arrBubbleSort[j];
                    arrBubbleSort[j] = arrBubbleSort[j + 1];
                    arrBubbleSort[j + 1] = temp;
                    swapped = true;
               }
          }
          if (swapped == false)
               break;
     }
}

void printBubbleSort()
{
     printf("Bubble sort = ");

     for (int a = 0; a < length; a++)
     {
          printf("%d ", arrBubbleSort[a]);
     }

     printf("\n");
}

//Selection sort
void selectionSort();

void printSelectionSort();

int main()
{

     //Ascending / descending
     //Bubble sort
     bubbleSort();
     printBubbleSort();

     //Selection sort
     selectionSort();
     printSelectionSort();

     return 0;
}

//Selection sort
void selectionSort()
{
     for (int i = 0; i < length; i++)
     {
          int min = i;
          for (int j = i + 1; j < length; j++)
          {
               if (arrSelectionSort[j] < arrSelectionSort[min])
               {
                    min = j;
               }
          }
          int temp = arrSelectionSort[min];
          arrSelectionSort[min] = arrSelectionSort[i];
          arrSelectionSort[i] = temp;
     }
}

void printSelectionSort()
{
     printf("Selection sort = ");

     for (int b = 0; b < length; b++)
     {
          printf("%d ", arrSelectionSort[b]);
     }

     printf("\n");
}