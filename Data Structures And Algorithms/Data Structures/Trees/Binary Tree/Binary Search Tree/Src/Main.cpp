#include <iostream>

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
};

void displayBinarySearchTree()
{
     int options;
     bool exit = false;

     do
     {
          std::cout << "Select option (0 to exit): \n";
          std::cout << "1.) Insert node \n";
          std::cout << "2.) Search node \n";
          std::cout << "3.) Delete node \n";
          std::cout << "4.) Print binary search tree values \n";
          std::cout << "5.) Clear screen \n";

          std::cout << "Choose option: ";
          std::cin >> options;

          switch (options)
          {
          case 0:
               if (exit == 0)
                    exit = true;
               break;
          //Todo:
          case 1:
               break;

          case 2:
               break;

          case 3:
               break;

          case 4:
               break;

          case 5:
               system("cls");
               break;

          default:
               std::cout << "Not found! \n";
          }

     } while (options != 0);
}

int main()
{
     displayBinarySearchTree();

     return 0;
}