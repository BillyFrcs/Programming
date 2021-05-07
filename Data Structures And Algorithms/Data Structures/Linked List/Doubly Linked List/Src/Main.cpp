#include <iostream>

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
     next = nullptr;
     previous = nullptr;
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
          head = nullptr;
     }

     DoublyLinkedList(Node *n)
     {
          head = n;
     }

     //Check te node if already exist by key value with return function
     Node *nodeExists(int k)
     {
          Node *temp = nullptr;
          Node *ptr = head;

          while (ptr != nullptr)
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
};

//Append a node to the list
void DoublyLinkedList::appendNode(Node *n)
{
     if (nodeExists(n->key) != nullptr)
     {
          std::cout << "Node already exists with key value: " << n->key << " append another node with different key value \n";
     }

     else
     {
          if (head == nullptr)
          {
               std::cout << "Node appended by head node \n";
          }

          else
          {
               Node *ptr = head;

               while (ptr->next != nullptr)
               {
                    ptr = ptr->next;
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
     if (nodeExists(n->key) != nullptr)
     {
          std::cout << "Node already exists with key value: " << n->key << " append another node with different key value \n";
     }

     else
     {
          if (head == nullptr)
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

     if (ptr == nullptr)
     {
          std::cout << "No node exists by key value: " << k << "\n";
     }

     else
     {
          if (nodeExists(n->key) != nullptr)
          {
               std::cout << "Node already exists with key value: " << n->key << " append another node with different key value \n";
          }

          else
          {
               std::cout << "Inserting \n";

               Node *nextNode = ptr->next;

               //Inserting at the end node
               if (nextNode == nullptr)
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

void showDoublyLinkedList()
{
}

int main()
{

     return 0;
}