#include <iostream>
#include <stdlib.h>

//Define macro
#define SPACE 10
#define VALUE_SPACE 5
#define EXT true

//Class tree node
class TreeNode
{
public:
     //Data members
     int value; //Key or data
     TreeNode *left, *right;

     //Members functions (constructor)
     TreeNode();

     TreeNode(int v);
};

TreeNode::TreeNode()
{
     value = 0;
     left = NULL;
     right = NULL;
}

TreeNode::TreeNode(int v)
{
     value = v;
     left = NULL;
     right = NULL;
}

//Class binary search tree
class BinarySearchTree : public TreeNode
{
public:
     //Data members
     TreeNode *root;

     BinarySearchTree()
     {
          root = NULL;
     }

     //Member functions (method)
     bool isEmpty()
     {
          if (root == NULL)
          {
               return true;
          }
          else
          {
               return false;
          }
     }

     //Insert node
     void insertNode(TreeNode *newNode)
     {
          if (root == NULL)
          {
               root = newNode;
               std::cout << "Value node inserted as root \n";
          }
          else
          {
               TreeNode *temp = root;

               while (temp != NULL)
               {
                    if ((newNode->value) == (temp->value))
                    {
                         std::cout << "Value already exists, insert another value \n";

                         return; //No duplicate allowed
                    }
                    else if ((newNode->value < temp->value) && (temp->left == NULL))
                    {
                         temp->left = newNode;
                         std::cout << "Value inserted on the left \n";
                         break; //Get out
                    }
                    else if ((newNode->value) < (temp->value))
                    {
                         temp = temp->left;
                    }
                    else if ((newNode->value > temp->value) && (temp->right == NULL))
                    {
                         temp->right = newNode;
                         std::cout << "Value inserted on the right \n";
                         break; //Get out
                    }
                    else
                    {
                         temp = temp->right;
                    }
               }
          }
     }

     //Print 2D
     void printTwoD(TreeNode *R, int space)
     {
          if (R == NULL) //Base case
          {
               return;
          }

          space += SPACE; //Increase distance between space

          printTwoD(R->right, space); //Proces the right child (first)

          std::cout << "\n";

          for (int i = SPACE; i < space; i++)
          {
               std::cout << " ";
          }

          std::cout << (R->value) << "\n";

          printTwoD(R->left, space); //Process the left child
     }

     //Print Pre-Order
     void printPreOrder(TreeNode *R) //Root
     {
          if (R == NULL)
          {
               return;
          }

          //Print the first value of the node
          std::cout << (R->value) << " ";

          printPreOrder(R->left);  //Recursive left TreeNode
          printPreOrder(R->right); //Recursive right TreeNode
     }

     //Print In-Order
     void printInOrder(TreeNode *R)
     {
          if (R == NULL)
          {
               return;
          }

          printInOrder(R->left); //Recursive on left

          //Print the value
          std::cout << (R->value) << " ";

          printInOrder(R->right); //Recursive on right
     }

     //Print Post-Order
     void printPostOrder(TreeNode *R)
     {
          if (R == NULL)
          {
               return;
          }

          printPostOrder(R->left); //Left subtree

          printPostOrder(R->right); //Right subtree

          std::cout << (R->value) << " "; //Print the value
     }
};

void displayBinarySearchTree()
{
     BinarySearchTree *BST = new BinarySearchTree();

     int options, v;

     do
     {
          //Enter numbers(Max 6)
          std::cout << "\nSelect option (0 to exit): \n";
          std::cout << "1.) Insert node \n";
          std::cout << "2.) Search node \n";
          std::cout << "3.) Delete node \n";
          std::cout << "4.) Print traversal (BST) \n";
          std::cout << "5.) Clear screen \n";

          std::cout << "Choose option: ";
          std::cin >> options;

          TreeNode *newNode = new TreeNode(); //Heap memory

          //Todo:
          if (options == 0)
          {
               if (EXT == true)
                    exit(EXT);
          }
          else if (options == 1)
          {
               std::cout << "Enter value of three node to insert in BST: ";
               std::cin >> v;

               newNode->value = v;
               BST->insertNode(newNode);
          }
          else if (options == 2)
          {
          }
          else if (options == 3)
          {
          }
          else if (options == 4)
          {
               std::cout << "Print 2D \n";
               BST->printTwoD(BST->root, VALUE_SPACE);

               std::cout << "\nPrint Pre-Order \n";
               BST->printPreOrder(BST->root);

               std::cout << "\n\nPrint In-Order \n";
               BST->printInOrder(BST->root);

               std::cout << "\n\nPrint Post-Order \n";
               BST->printPostOrder(BST->root);
          }
          else if (options == 5)
          {
               system("cls");
          }
          else
          {
               std::cout << "Not found \n";
          }
     } while (options != 100);
}

int main()
{
     displayBinarySearchTree();

     return 0;
}