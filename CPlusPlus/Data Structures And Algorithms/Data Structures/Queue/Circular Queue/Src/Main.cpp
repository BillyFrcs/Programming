#include <iostream>

using namespace std;

class circularQueue
{
private:
     int front, rear, itemsCount;
     int arr[5];

public:
     circularQueue()
     {
          itemsCount = 0;
          front = -1;
          rear = -1;

          for (int i = 0; i < 5; i++)
          {
               arr[i] = 0;
          }
     }

     bool isEmpty()
     {
          if (front == -1 && rear == -1)
               return true;
          else
               return false;
     }

     bool isFull()
     {
          if ((rear + 1) % 5 == front)
               return true;
          else
               return false;
     }

     void Enqueue(int value)
     {
          if (isFull())
          {
               cout << "Circular queue is full" << endl;

               return;
          }
          else if (isEmpty())
          {
               rear = 0;
               front = 0;
               arr[rear] = value;
          }
          else
          {
               rear = (rear + 1) % 5;
               arr[rear] = value;
          }

          itemsCount++;
     }

     int Dequeue()
     {
          int temp = 0;

          if (isEmpty())
          {
               cout << "Circular queue is empty" << endl;

               return temp;
          }
          else if (rear == front)
          {
               temp = arr[rear];
               arr[front] = 0;
               rear = -1;
               front = -1;
               itemsCount--;

               return temp;
          }
          else
          {
               temp = arr[front];
               arr[front] = 0;
               front = (front + 1) % 5;
               itemsCount--;

               return temp;
          }
     }

     int count()
     {
          return (itemsCount);
     }

     void display()
     {
          cout << "Values circular queue" << endl;

          for (int i = 0; i < 5; i++)
          {
               cout << arr[i] << " ";
          }
     }
};

int main()
{

     circularQueue q1;

     int option, value;

     do
     {
          cout << "Select number: " << endl;
          cout << "1. Enqueue" << endl;
          cout << "2. Dequeue" << endl;
          cout << "3. Is empty" << endl;
          cout << "4. Is full" << endl;
          cout << "5. Count" << endl;
          cout << "6. Dislay" << endl;
          cout << "7. Clear Console" << endl;
          cout << "0. Exit" << endl
               << endl;

          cout << "Choose number: ";
          cin >> option;

          switch (option)
          {
          case 0:
               break;

          case 1:
               cout << "Add enqueue value: ";
               cin >> value;
               q1.Enqueue(value);
               break;

          case 2:
               cout << "Dequeue value: " << q1.Dequeue() << endl;
               break;

          case 3:
               if (q1.isEmpty())
                    cout << "Circular queue is empty" << endl;
               else
                    cout << "Circular queue is not empty" << endl;

               break;

          case 4:
               if (q1.isFull())
                    cout << "Circular queue is full" << endl;
               else
                    cout << "Circular queue is not full" << endl;
               break;

          case 5:
               cout << "Count items circular queue: " << q1.count() << endl;
               break;

          case 6:
               cout << "All value circular queue: " << endl;
               q1.display();
               break;

          case 7:
               system("cls");
               break;

          default:
               cout << "Not found" << endl;
               break;
          }
     } while (option != 0);

     return 0;
}