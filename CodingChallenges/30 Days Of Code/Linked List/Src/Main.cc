#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
     int data;
     Node *next;
     Node(int d)
     {
          data = d;
          next = NULL;
     }
};

class Solution
{
public:
     //Without reversing
     Node *insert(Node *head, int newData) //This function should return value
     {
          //Complete this method
          if (head == nullptr)
          {
               return new Node(newData);
          }
          else if ((head->next) == nullptr)
          {
               (head->next) = new Node(newData);
          }
          else
          {
               insert((head->next), newData); //recursion
          }

          return head;
     }

     void display(Node *head)
     {
          Node *start = head;
          while (start)
          {
               cout << start->data << " ";
               start = start->next;
          }
     }
};

int main()
{
     /* Sample input
     4
     2   
     3
     4
     1
     */

     Node *head = NULL;
     Solution myList;
     int T, data;
     cin >> T;
     while (T-- > 0)
     {
          cin >> data;
          head = myList.insert(head, data);
     }
     myList.display(head);
}