#include <bits/stdc++.h>
#include <cmath>
#include <cstddef>

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
     //Method 1
     Node *removeDuplicate(Node *head)
     {
          //Write your code here
          unordered_set<int> value;

          Node *current = head;
          Node *previous = NULL;

          while (current != NULL)
          {
               if (value.find(current->data) != value.end())
               {
                    previous->next = current->next;
                    delete (current);
               }
               else
               {
                    value.insert(current->data);
                    previous = current;
               }
               current = previous->next;
          }
          return head;
     }

     //Method 2
     Node *removeDuplicates(Node *head)
     {
          vector<int> value;

          Node *current = head, *previous = head;

          if (head == nullptr)
          {
               return nullptr;
          }

          while (current != nullptr)
          {
               if (find(value.begin(), value.end(), current->data) != value.end())
               {
                    previous->next = current->next;
               }
               else
               {
                    value.push_back(current->data);
                    previous = current;
               }
               current = current->next;
          }
          return head;
     }

     Node *insert(Node *head, int data)
     {
          Node *p = new Node(data);
          if (head == NULL)
          {
               head = p;
          }
          else if (head->next == NULL)
          {
               head->next = p;
          }
          else
          {
               Node *start = head;
               while (start->next != NULL)
               {
                    start = start->next;
               }
               start->next = p;
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
     /*Sample input
       6
       1
       2
       2
       3
       3
       4
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
     //head = myList.removeDuplicate(head);
     head = myList.removeDuplicates(head);

     myList.display(head);
}