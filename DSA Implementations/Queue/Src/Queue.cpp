#include <iostream>

using namespace std;

class Queue
{
     int size;
     int *queue;

public:
     Queue()
     {
          size = 0;
          queue = new int[100];
     }

     void add(int data)
     {
          queue[size] = data;
          size++;
     }

     void remove()
     {
          if (size == 0)
          {
               cout << "Queue is empty" << endl;
               return;
          }
          else
          {
               for (int i = 0; i < size - 1; i++)
               {
                    queue[i] = queue[i + 1];
               }
               size--;
          }
     }

     void print()
     {
          if (size == 0)
          {
               cout << "Queue is empty" << endl;
               return;
          }
          for (int i = 0; i < size; i++)
          {
               cout << queue[i] << " <- ";
          }
          cout << endl;
     }

     Queue operator+(Queue q2)
     {
          Queue q3;
          for (int i = 0; i < this->size; i++)
          {
               q3.queue[i] = this->queue[i];
               q3.size++;
          }
          for (int i = 0; i < q2.size; i++)
          {
               q3.queue[q3.size] = q2.queue[i];
               q3.size++;
          }
          return q3;
     }
};

class Queue2 : public Queue
{
     int size;
     int *queue;

public:
     void print()
     {
          if (size == 0)
          {
               cout << "Queue is empty" << endl;
               return;
          }
          for (int i = 0; i < size; i++)
          {
               cout << queue[i] << endl;
          }
          cout << endl;
     }
};

int main()
{
     Queue q1;
     q1.add(42);
     q1.add(2);
     q1.add(8);
     q1.add(1);
     Queue q2;
     q2.add(3);
     q2.add(66);
     q2.add(128);
     q2.add(5);
     Queue q3 = q1 + q2;
     q3.print();

     cout << endl;

     Queue q4;
     q1.add(42);
     q1.add(2);
     q1.add(8);
     q1.add(1);
     q1.print();

     Queue2 q5;
     q2.add(3);
     q2.add(66);
     q2.add(128);
     q2.add(5);
     q2.add(111);
     q2.add(77890);
     q2.print();

     return 0;
}
