#include <iostream>

//Node class
class Node
{
public:
     int key, data;
     Node *next;

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

//Circular linked list class
class CircularLinkedList
{
public:
     Node *head;

     CircularLinkedList()
     {
          head = NULL;
     }

     //Check node exists with key value
     Node *nodeExists(int k)
     {
          Node *temp = NULL;
          Node *ptr = head;

          if (ptr == NULL)
          {
               return temp;
          }
          else
          {
               do
               {
                    if (ptr->key == k)
                    {
                         temp = ptr;
                    }

                    ptr = (ptr->next);
               } while (ptr != head);

               return temp;
          }
     }

     //Append node to the list
     void appendNode(Node *newNode)
     {
          if (nodeExists(newNode->key) != NULL)
          {
               std::cout << "Node already exists with key value: " << newNode->key << " append another node with different key value \n";
          }
          else
          {
               if (head == NULL)
               {
                    head = newNode;
                    newNode->next = head;
                    std::cout << "Node appended at first head \n";
               }
               else
               {
                    Node *ptr = head;

                    while ((ptr->next) != head)
                    {
                         ptr = (ptr->next);
                    }

                    ptr->next = newNode;
                    newNode->next = head;
                    std::cout << "Node appended \n";
               }
          }
     }

     //Prepend node at the start list
     void prependNode(Node *newNode)
     {
          if (nodeExists(newNode->key) != NULL)
          {
               std::cout << "Node already exists with key value: " << newNode->key << " append another node with different key value \n";
          }
          else
          {
               if (head == NULL)
               {
                    head = newNode;
                    newNode->next = head;
                    std::cout << "Node prepended at first head \n";
               }
               else
               {
                    Node *ptr = head;

                    while ((ptr->next) != head)
                    {
                         ptr = (ptr->next);
                    }

                    ptr->next = newNode;
                    newNode->next = head;
                    head = newNode;
                    std::cout << "Node prepended \n";
               }
          }
     }

     //Insert node after the particular
     void insertNode(int k, Node *newNode)
     {
          Node *ptr = nodeExists(k);

          if (ptr == NULL)
          {
               std::cout << "No node exitsts with key value: " << k << "\n";
          }
          else
          {
               if (nodeExists(newNode->key) != NULL)
               {
                    std::cout << "Node already exists with key value: " << newNode->key << " append another node with different key value \n";
               }
               else
               {
                    if ((ptr->next) == head)
                    {
                         newNode->next = head;
                         ptr->next = newNode;
                         std::cout << "Node inserted at the end \n";
                    }
                    else
                    {
                         newNode->next = (ptr->next);
                         ptr->next = newNode;
                         std::cout << "Node inserted in between \n";
                    }
               }
          }
     }

     //Delete node by key
     void deleteNode(int k)
     {
          Node *ptr = nodeExists(k);

          if (ptr == NULL)
          {
               std::cout << "Node node exists with key value: " << k << "\n";
          }
          else
          {
               if (ptr == head)
               {
                    if ((head->next) == NULL)
                    {
                         head = NULL;
                         std::cout << "Head node unlinked...(list empty)";
                    }
                    else
                    {
                         Node *ptr1 = head;

                         while ((ptr1->next) != head)
                         {
                              ptr1 = ptr1->next;
                         }

                         ptr1->next = (head->next);
                         head = (head->next);
                         std::cout << "Node unlinked with key value: " << k << "\n";
                    }
               }
               else
               {
                    Node *temp = NULL;
                    Node *previousPtr = head;
                    Node *currentPtr = (head->next);

                    while (currentPtr != NULL)
                    {
                         if ((currentPtr->key) == k)
                         {
                              temp = currentPtr;
                              currentPtr = NULL;
                         }
                         else
                         {
                              previousPtr = (previousPtr->next);
                              currentPtr = (currentPtr->next);
                         }
                    }
                    previousPtr->next = (temp->next);
                    std::cout << "Node unlinked with key value: " << k << "\n";
               }
          }
     }

     //Update the node by key
     void updateNode(int k, int newData)
     {
          Node *ptr = nodeExists(k);

          if (ptr != NULL)
          {
               ptr->data = newData;
               std::cout << "Updated node data successfully \n";
          }
          else
          {
               std::cout << "Node doesn't exitsts with key value: " << k << "\n";
          }
     }

     //Print circular linked list
     void printListCircularLinkedList()
     {
          if (head == NULL)
          {
               std::cout << "No nodes in circular linked list \n";
          }
          else
          {
               std::cout << "\nHead address: " << head << "\n";
               std::cout << "Circular linked list values: \n";

               Node *temp = head;

               do
               {
                    std::cout << "(" << temp->key << ", " << temp->data << ", " << temp->next << ") --> ";

                    temp = temp->next;
               } while (temp != head);
          }
     }
};

void displayCircularLinkedList()
{
     CircularLinkedList *CLL = new CircularLinkedList();

     int Options, key1, key2, data;
     bool exit = false;

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

          Node *n1 = new Node(); //Heap memory

          //Enter numbers
          switch (Options)
          {
          case 0:
               if (exit == 0)
               {
                    exit == true;
               }
               break;

          case 1:
               std::cout << "Enter key & data to append: ";
               std::cin >> key1 >> data;

               n1->key = key1;
               n1->data = data;
               CLL->appendNode(n1);
               break;

          case 2:
               std::cout << "Enter key & data to prepend: ";
               std::cin >> key1 >> data;
               n1->key = key1;
               n1->data = data;
               CLL->prependNode(n1);
               break;

          case 3:
               std::cout << "Enter existing key of node after insert the new node: ";
               std::cin >> key2;

               std::cout << "Enter key & data to the new first node: ";
               std::cin >> key1 >> data;

               n1->key = key1;
               n1->data = data;
               CLL->insertNode(key2, n1);
               break;

          case 4:
               std::cout << "Enter key of the node to deleted: ";
               std::cin >> key2;

               CLL->deleteNode(key2);
               break;

          case 5:
               std::cout << "Enter key & new data to update: ";
               std::cin >> key1 >> data;

               CLL->updateNode(key1, data);
               break;

          case 6:
               CLL->printListCircularLinkedList();
               break;

          case 7:
               system("cls");
               break;

          default:
               std::cout << "Not found! \n";
               break;
          }
     } while (Options != exit);
}

int main()
{
     displayCircularLinkedList();

     return 0;
}