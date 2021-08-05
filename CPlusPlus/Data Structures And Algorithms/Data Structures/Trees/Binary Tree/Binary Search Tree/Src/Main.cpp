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

     //Print graphical binary search tree
     void printGraphicalBST(TreeNode *r, int space)
     {
          if (r == NULL) //Base case
          {
               return;
          }

          space += SPACE; //Increase distance between space

          printGraphicalBST(r->right, space); //Process the right child (first)

          std::cout << "\n";

          for (int i = SPACE; i < space; i++)
          {
               std::cout << " ";
          }

          std::cout << (r->value) << "\n";

          printGraphicalBST(r->left, space); //Process the left child
     }

     //Print Pre-Order
     void printPreOrder(TreeNode *r) //Root
     {
          if (r == NULL)
          {
               return;
          }

          //Print the first value of the node
          std::cout << (r->value) << " ";

          printPreOrder(r->left);  //Recursive left TreeNode
          printPreOrder(r->right); //Recursive right TreeNode
     }

     //Print In-Order
     void printInOrder(TreeNode *r)
     {
          if (r == NULL)
          {
               return;
          }

          printInOrder(r->left); //Recursive on left

          //Print the value
          std::cout << (r->value) << " ";

          printInOrder(r->right); //Recursive on right
     }

     //Print Post-Order
     void printPostOrder(TreeNode *r)
     {
          if (r == NULL)
          {
               return;
          }

          printPostOrder(r->left); //Left subtree

          printPostOrder(r->right); //Right subtree

          std::cout << (r->value) << " "; //Print the value
     }

     //Iterative search BST
     TreeNode *iterativeSearch(int v) //value
     {
          if (root == NULL)
          {
               return root;
          }
          else
          {
               TreeNode *temp = root;

               while (temp != NULL)
               {
                    if (v == (temp->value))
                    {
                         return temp;
                    }
                    else if (v < (temp->value))
                    {
                         temp = (temp->left);
                    }
                    else
                    {
                         temp = (temp->right);
                    }
               }
               return NULL;
          }
     }

     //Find the height of binary search tree
     int findHeight(TreeNode *r)
     {
          if (r == NULL)
          {
               return -1;
          }
          else
          {
               int leftHeight = findHeight(r->left),
                   rightHeight = findHeight(r->right);

               if (leftHeight > rightHeight)
               {
                    return (leftHeight + 1);
               }
               else
               {
                    return (rightHeight + 1);
               }
          }
     }

     //Print level order BSF(Breadth First Search)
     void printLevelOrder(TreeNode *r)
     {
          int height = findHeight(r); //Calculate the height of tree

          for (int i = 0; i <= height; i++)
          {
               //Called the printGivenLevel function to set as recursion
               printGivenLevel(r, i);
          }
     }

     //Print given level BFS
     void printGivenLevel(TreeNode *r, int level)
     {
          if (r == NULL)
          {
               return;
          }
          else if (level == 0)
          {
               std::cout << (r->value) << " ";
          }
          else
          {
               //Print recursion left, right and level - 1
               printGivenLevel(r->left, level - 1);
               printGivenLevel(r->right, level - 1);
          }
     }

     //Minimum value node binary search tree
     TreeNode *minimumValueNode(TreeNode *node)
     {
          TreeNode *current = node;

          //Loops to find the leftmost
          while ((current->left) != NULL)
          {
               current = (current->left);
          }

          return current;
     }

     //Delete node binary search tree
     TreeNode *deleteNode(TreeNode *r, int v)
     {
          if (r == NULL)
          {
               return r;
          }
          else if (v < (r->value))
          {
               r->left = deleteNode(r->left, v);
          }
          else if (v > (r->value))
          {
               r->right = deleteNode(r->right, v);
          }
          else
          {
               if ((r->left) == NULL)
               {
                    TreeNode *temp = r->right;
                    delete r;
                    return temp;
               }
               else if ((r->right) == NULL)
               {
                    TreeNode *temp = r->left;
                    delete r;
                    return temp;
               }
               else
               {
                    TreeNode *temp = minimumValueNode(r->right);
                    r->value = temp->value;
                    r->right = deleteNode(r->right, temp->value);
               }
          }
          return r;
     }
};

void displayBinarySearchTree()
{
     BinarySearchTree *BST = new BinarySearchTree();

     int options, value;

     do
     {
          /*Enter numbers(Max 6)
          *Recomendation enter numbers (n1 = 30, n2 = 18, n3 = 45, n4 = 10, n5 = 25, n6 = 65)
          */
          std::cout << "\nSelect option (0 to exit): \n";
          std::cout << "1.) Insert node \n";
          std::cout << "2.) Search node \n";
          std::cout << "3.) Delete node \n";
          std::cout << "4.) Height of (BST) \n";
          std::cout << "5.) Print traversal (BST) \n";
          std::cout << "6.) Clear console \n";

          std::cout << "Choose option: ";
          std::cin >> options;

          TreeNode *newNode = new TreeNode(); //Heap memory

          if (options == 0)
          {
               if (EXT == true)
                    exit(EXT);
          }
          else if (options == 1)
          {
               std::cout << "Enter value of three node to insert in BST: ";
               std::cin >> value;

               newNode->value = value;
               BST->insertNode(newNode);
          }
          else if (options == 2)
          {
               std::cout << "Enter value to search in BST: ";
               std::cin >> value;

               newNode = BST->iterativeSearch(value);

               if (newNode != NULL)
                    std::cout << "Found value. \n";
               else
                    std::cout << "Value not found. \n";
          }
          else if (options == 3)
          {
               std::cout << "Enter value to delete: ";
               std::cin >> value;

               newNode = BST->iterativeSearch(value);

               if (newNode != NULL)
               {
                    BST->deleteNode(BST->root, value);
                    std::cout << "Value deleted. \n";
               }
               else
               {
                    std::cout << "Value not found, make sure to check the value again.\n";
               }
          }
          else if (options == 4)
          {
               std::cout << "\nHeight of BST is: " << BST->findHeight(BST->root);
          }
          else if (options == 5)
          {
               std::cout << "Print graphical BST \n";
               BST->printGraphicalBST(BST->root, VALUE_SPACE);

               std::cout << "\nPrint Pre-Order \n";
               BST->printPreOrder(BST->root);

               std::cout << "\n\nPrint In-Order \n";
               BST->printInOrder(BST->root);

               std::cout << "\n\nPrint Post-Order \n";
               BST->printPostOrder(BST->root);

               std::cout << "\n\nPrint level order BFS\n";
               BST->printLevelOrder(BST->root);
          }
          else if (options == 6)
          {
               system("cls");
          }
          else
          {
               std::cout << "Not found try again ! \n";
          }
     } while (options != 100);
}

int main()
{
     displayBinarySearchTree();

     return 0;
}