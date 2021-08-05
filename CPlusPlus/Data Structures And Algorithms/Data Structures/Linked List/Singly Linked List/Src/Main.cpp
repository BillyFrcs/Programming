#include <iostream>
#include <stdlib.h>

//Node class
class Node
{
public:
     int key, data;
     Node *next;

     //Node contructor
     Node();

     Node(int k, int d);
};

Node::Node()
{
     key = 0;
     data = 0;
     next = NULL;
}

Node::Node(int k, int d)
{
     key = k;
     data = d;
}

//Singly linked list class
class SinglyLinkedList : public Node
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
     void insertNode(int k, Node *n)
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
                    n->next = (ptr->next);
                    ptr->next = n;
                    std::cout << "Node inserted \n";
               }
          }
     }

     //Delete the node by key
     void deleteNode(int k)
     {
          if (head == NULL)
          {
               std::cout << "Singly linked list is empty, couldn't delete it \n";
          }

          else if (head != NULL)
          {
               if (head->key == k)
               {
                    head = (head->next);
                    std::cout << "Node unlinked with key value: " << k << "\n";
               }

               else
               {
                    Node *temp = NULL;
                    Node *prevPtr = head;
                    Node *currentPtr = (head->next);

                    while (currentPtr != NULL)
                    {
                         if (currentPtr->key == k)
                         {
                              temp = currentPtr;
                              currentPtr = NULL;
                         }

                         else
                         {
                              prevPtr = (prevPtr->next);
                              currentPtr = (currentPtr->next);
                         }
                    }

                    if (temp != NULL)
                    {
                         prevPtr->next = (temp->next);
                         std::cout << "Node unlinked with key value: " << k << "\n";
                    }

                    else
                    {
                         std::cout << "Node doesn't exists with key value: " << k << "\n";
                    }
               }
          }
     }

     //Update the node by key
     void updateNode(int k, int d)
     {
          Node *ptr = nodeExists(k);

          if (ptr != NULL)
          {
               ptr->data = d;
               std::cout << "Update data Node successfully \n";
          }

          else
          {
               std::cout << "Node doesn't exists with key value: " << k << "\n";
          }
     }

     void printListSinglyLinkedList()
     {
          if (head == NULL)
          {
               std::cout << "No nodes in singly linked list \n";
          }

          else
          {
               std::cout << "Singly linked list value: ";
               Node *temp = head;

               while (temp != NULL)
               {
                    std::cout << "(" << temp->key << ", " << temp->data << ") --> ";
                    temp = (temp->next);
               }
          }
     }
};

//Show singly linked list
void showSinglyLinkedList()
{
     SinglyLinkedList *SLL = new SinglyLinkedList();

     int Options, key1, key2, data;
     bool ext = true;

     do
     {
          std::cout << "\nSelect option (0 to exit): \n";
          std::cout << "1.) Append Node \n";
          std::cout << "2.) Prepend Node \n";
          std::cout << "3.) Insert Node \n";
          std::cout << "4.) Delete Node \n";
          std::cout << "5.) Update Node \n";
          std::cout << "6.) Print Node \n";
          std::cout << "7.) Clear console \n";

          std::cout << "Choose option: ";
          std::cin >> Options;

          Node *n1 = new Node();

          //Enter numbers
          switch (Options)
          {
          case 0:
               if (ext == true)
               {
                    exit(ext);
               }
               break;

          case 1:
               std::cout << "Enter key & data to append: ";
               std::cin >> key1 >> data;

               n1->key = key1;
               n1->data = data;
               SLL->appendNode(n1);
               break;

          case 2:
               std::cout << "Enter key & data to append: ";
               std::cin >> key1 >> data;

               n1->key = key1;
               n1->data = data;
               SLL->prependNode(n1);
               break;

          case 3:
               std::cout << "Enter existing key of node after insert the new node: ";
               std::cin >> key2;

               std::cout << "Enter key & data to the new first node: ";
               std::cin >> key1 >> data;

               n1->key = key1;
               n1->data = data;
               SLL->insertNode(key2, n1);
               break;

          case 4:
               std::cout << "Enter key of the node to deleted: ";
               std::cin >> key2;

               SLL->deleteNode(key2);
               break;

          case 5:
               std::cout << "Enter key & new data to updated: ";
               std::cin >> key1 >> data;

               SLL->updateNode(key1, data);
               break;

          case 6:
               SLL->printListSinglyLinkedList();
               break;

          case 7:
               system("cls");
               break;

          default:
               std::cout << "Not found \n";
          }
     } while (Options != 100);
}

int main()
{
     showSinglyLinkedList();

     return 0;
}