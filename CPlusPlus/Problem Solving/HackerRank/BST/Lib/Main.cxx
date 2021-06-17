#include <bits/stdc++.h>

using namespace std;

//BST Level-Order Traversal
class Node
{
public:
     int data;
     Node *left, *right;
     Node(int d)
     {
          data = d;
          left = right = NULL;
     }
};

class Solution
{
public:
     Node *insert(Node *root, int data)
     {
          if (root == NULL)
          {
               return new Node(data);
          }
          else
          {
               Node *cur;
               if (data <= root->data)
               {
                    cur = insert(root->left, data);
                    root->left = cur;
               }
               else
               {
                    cur = insert(root->right, data);
                    root->right = cur;
               }
               return root;
          }
     }

     int height(Node *root)
     {
          if (root == NULL)
          {
               return -1;
          }
          else
          {
               int leftHeight = height(root->left), rightHeight = height(root->right);

               if (leftHeight > rightHeight)
               {
                    return leftHeight + 1;
               }
               else
               {
                    return rightHeight + 1;
               }
          }
     }

     void levelOrder(Node *root)
     {
          //int h = height(root);
          //Write your code here
          for (int i = 0; i <= height(root); i++)
          {
               printCurLevel(root, i);
          }
     }

     void printCurLevel(Node *root, int level)
     {
          if (root == NULL)
          {
               return;
          }
          else if (level == 0)
          {
               std::cout << root->data << " ";
          }
          else
          {
               printCurLevel(root->left, level - 1);
               printCurLevel(root->right, level - 1);
          }
     }

}; //End of Solution

int main()
{
     /*Sample input
       6
       3
       5
       4
       7
       2
       1
     */

     Solution myTree;
     Node *root = NULL;
     int T, data;
     cin >> T;
     while (T-- > 0)
     {
          cin >> data;
          root = myTree.insert(root, data);
     }

     myTree.levelOrder(root);

     return 0;
}