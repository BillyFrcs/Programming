#include <iostream>

//Node class
class Node
{
public:
     int key, data;
     Node *next;

     //Node contructor
     Node()
     {
          key = 0;
          data = 0;
          next = NULL;
     }

     Node(int k, int d)
     {
          key = k;
          data = d;
     }
};

//Singly linked list class
class SinglyLinkedList
{
public:
     Node *head;

     //SinglyLinkedList contructor
     SinglyLinkedList()
     {
          head = NULL;
     }

     SinglyLinkedList(Node *n)
     {
          head = n;
     }

     //Check if the node exist using key value
     Node *nodeExists(int k)
     {
          Node *temp = NULL;
          Node *ptr = head;

          while (ptr != NULL)
          {
               if (ptr->key == k)
               {
                    temp = ptr;
               }

               ptr = ptr->next;
          }
          return temp;
     }

     //Append a node to the list
     void appendNode(Node *n)
     {
          if (nodeExists(n->key) != NULL)
          {
               std::cout << "Node already exists with key value: " << n->key << " append to another node with different key value \n";
          }

          else
          {
               if (head == NULL)
               {
                    head = n;
                    std::cout << "Node appended \n";
               }

               else
               {
                    Node *ptr = head;

                    while (ptr->next != NULL)
                    {
                         ptr = ptr->next;
                    }

                    ptr->next = n;
                    std::cout << "Node appended \n";
               }
          }
     }

     //Prepending node (attach a node at the start)
     void prependNode(Node *n)
     {
          if (nodeExists(n->key) != NULL)
          {
               std::cout << "Node already exists with key value: " << n->key << " append to another node with different key value \n";
          }

          else
          {
               n->next = head;
               head = n;
               std::cout << "Node prepended \n";
          }
     }

     //Insert a node after the particular node in the last
     void insertNodeAfter(int k, Node *n)
     {
          Node *ptr = nodeExists(k);

          if (ptr == NULL)
          {
               std::cout << "No node exists wit key value: " << k << "\n";
          }

          else
          {
               if (nodeExists(n->key) != NULL)
               {
                    std::cout << "Node already exists with key value: " << n->key << " append to another node with different key value \n";
               }

               else
               {
                    n->next = ptr->next;
                    ptr->next = n;
                    std::cout << "Node inserted \n";
               }
          }
     }
};

int main()
{

     return 0;
}