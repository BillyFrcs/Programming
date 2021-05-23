#include <iostream>
#include <stdlib.h>

//Node class
class Node
{
public:
     //Data members
     int key, data;

     Node *next, *previous;

     //Node contructor
     Node();

     Node(int k, int d);
};

Node::Node()
{
     key = 0;
     data = 0;
     next = NULL;
     previous = NULL;
}

Node::Node(int k, int d)
{
     key = k;
     data = d;
}

//Doubly linked list class
class DoublyLinkedList : public Node
{
public:
     Node *head;

     DoublyLinkedList()
     {
          head = NULL;
     }

     DoublyLinkedList(Node *n)
     {
          head = n;
     }

     //Check te node if already exist by key value with return function
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

     //Append node
     void appendNode(Node *n);

     //Prepend node
     void prependNode(Node *n);

     //Insert node
     void insertNode(int k, Node *n);

     //Delete node
     void deleteNode(int k);

     //Update node
     void updateNode(int k, int d);

     //Print node
     void printListDoublyLinkedList();
};

//Append a node to the list
void DoublyLinkedList::appendNode(Node *n)
{
     if (nodeExists(n->key) != NULL)
     {
          std::cout << "Node already exists with key value: " << n->key << " append another node with different key value \n";
     }

     else
     {
          if (head == NULL)
          {
               head = n;
               std::cout << "Node appended by head node \n";
          }

          else
          {
               Node *ptr = head;

               while (ptr->next != NULL)
               {
                    ptr = (ptr->next);
               }

               ptr->next = n;
               n->previous = ptr;
               std::cout << "Node appended \n";
          }
     }
}

//Prepend the node at the first node
void DoublyLinkedList::prependNode(Node *n)
{
     if (nodeExists(n->key) != NULL)
     {
          std::cout << "Node already exists with key value: " << n->key << " append another node with different key value \n";
     }

     else
     {
          if (head == NULL)
          {
               std::cout << "Node prepended by head node \n";
          }

          else
          {
               head->previous = n;
               n->next = head;

               head = n;
               std::cout << "Node prepended \n";
          }
     }
}

void DoublyLinkedList::insertNode(int k, Node *n)
{
     Node *ptr = nodeExists(k);

     if (ptr == NULL)
     {
          std::cout << "No node exists by key value: " << k << "\n";
     }

     else
     {
          if (nodeExists(n->key) != NULL)
          {
               std::cout << "Node already exists with key value: " << n->key << " append another node with different key value \n";
          }

          else
          {
               Node *nextNode = ptr->next;

               //Inserting at the end node
               if (nextNode == NULL)
               {
                    ptr->next = n;
                    n->previous = ptr;

                    std::cout << "Node inserted at the end \n";
               }

               //Inserting in between the node
               else
               {
                    n->next = nextNode;
                    nextNode->previous = n;
                    n->previous = ptr;
                    ptr->next = n;

                    std::cout << "Node inserted in between \n";
               }
          }
     }
}

//Delete node by key value
void DoublyLinkedList::deleteNode(int k)
{
     Node *ptr = nodeExists(k);

     if (ptr == NULL)
     {
          std::cout << "No node exists with key value: " << k << "\n";
     }
     else
     {
          if (head == NULL)
          {
               std::cout << "Doubly linked list is empty, couldn't delete \n";
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
                    Node *nextNode = (ptr->next);
                    Node *prevNode = (ptr->previous);

                    //Deleted at the end of node
                    if (nextNode == NULL)
                    {
                         prevNode->next = nullptr;
                         std::cout << "Node deleted at the end \n";
                    }

                    //Deleted in between the node
                    else
                    {
                         prevNode->next = nextNode;
                         nextNode->previous = prevNode;
                         std::cout << "Node deleted in between \n";
                    }
               }
          }
     }
}

//Update the node
void DoublyLinkedList::updateNode(int k, int d)
{
     Node *ptr = nodeExists(k);

     if (ptr != NULL)
     {
          ptr->data = d;
          std::cout << "Node data updated successfully \n";
     }
     else
     {
          std::cout << "Node doesn't exists with key value: " << k << "\n";
     }
}

//Print the node
void DoublyLinkedList::printListDoublyLinkedList()
{
     if (head == NULL)
     {
          std::cout << "No node in doubly linked list \n";
     }
     else
     {
          std::cout << "\nDoubly linked list values: ";
          Node *temp = head;

          while (temp != NULL)
          {
               std::cout << "(" << temp->key << ", " << temp->data << ") <--> ";
               temp = (temp->next);
          }
     }
}

void showDoublyLinkedList()
{
     DoublyLinkedList *DLL = new DoublyLinkedList();

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
               DLL->appendNode(n1);
               break;

          case 2:
               std::cout << "Enter key & data to prepend: ";
               std::cin >> key1 >> data;
               n1->key = key1;
               n1->data = data;
               DLL->prependNode(n1);
               break;

          case 3:
               std::cout << "Enter existing key of node after insert the new node: ";
               std::cin >> key2;

               std::cout << "Enter key & data to the new first node: ";
               std::cin >> key1 >> data;

               n1->key = key1;
               n1->data = data;
               DLL->insertNode(key2, n1);
               break;

          case 4:
               std::cout << "Enter key of the node to deleted: ";
               std::cin >> key2;
               DLL->deleteNode(key2);
               break;

          case 5:
               std::cout << "Enter key & new data to update: ";
               std::cin >> key1 >> data;
               DLL->updateNode(key1, data);
               break;

          case 6:
               DLL->printListDoublyLinkedList();
               break;

          case 7:
               system("cls");
               break;

          default:
               std::cout << "Not found! \n";
               break;
          }
     } while (Options != 100);
}

int main()
{
     showDoublyLinkedList();

     return 0;
}