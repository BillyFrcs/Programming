#include <iostream>

using namespace std;

class Queue
{
private:
     int front, rear, arr[5];

public:
     Queue()
     {
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
          if (rear == 4)
               return true;
          else
               return false;
     }

     void Enqueue(int value)
     {
          if (isFull())
          {
               cout << "Queue is full" << endl;
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
               rear++;
               arr[rear] = value;
          }
     }

     int Dequeue()
     {
          int temp = 0;

          if (isEmpty())
          {
               cout << "Queue is empty" << endl;
               return temp;
          }
          else if (front == rear)
          {
               temp = arr[rear];
               arr[front] = 0;
               rear = -1;
               front = -1;
               return temp;
          }
          else
          {
               temp = arr[front];
               arr[front] = 0;
               front++;
               return temp;
          }
     }

     int count()
     {
          return (rear - front + 1);
     }

     void display()
     {
          cout << "Values queue" << endl;

          for (int i = 0; i < 5; i++)
          {
               cout << arr[i] << " ";
          }
     }
};

int main()
{
     Queue q1;

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
                    cout << "Queue is empty" << endl;
               else
                    cout << "Queue is not empty" << endl;

               break;

          case 4:
               if (q1.isFull())
                    cout << "Queue is full" << endl;
               else
                    cout << "Queue is not full" << endl;
               break;

          case 5:
               cout << "Count items queue: " << q1.count() << endl;
               break;

          case 6:
               cout << "All value queue: " << endl;
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