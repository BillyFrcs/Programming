#include <algorithm>
#include <cassert>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
using namespace std;

struct Node
{
     Node *next;
     Node *prev;
     int value;
     int key;
     Node(Node *p, Node *n, int k, int val) : prev(p), next(n), key(k), value(val){};
     Node(int k, int val) : prev(NULL), next(NULL), key(k), value(val){};
};

class Cache
{

protected:
     map<int, Node *> mp;            //map the key to the node in the linked list
     int cp;                         //capacity
     Node *tail;                     // double linked list tail pointer
     Node *head;                     // double linked list head pointer
     virtual void set(int, int) = 0; //set function
     virtual int get(int) = 0;       //get function
};

class LRUCache : public Cache
{
public:
     LRUCache(int i) : Cache()
     {
          cp = i;
          head = nullptr;
          tail = nullptr;
     }
     void set(int k, int v)
     {
          if (cp <= 0)
               return;
          if (mp.size() == 0)
          {
               Node *node = new Node(k, v);
               InsertIntoHead(node);
               mp.insert(make_pair(k, node));
          }
          else if (mp.find(k) != mp.end())
          {
               auto it = mp[k];
               it->value = v;
               InsertIntoHead(it);
          }
          else if (mp.size() < cp)
          {
               Node *node = new Node(k, v);
               InsertIntoHead(node);
               mp.insert(make_pair(k, node));
          }
          else
          {
               auto it = tail;
               mp.erase(it->key);
               LinkedListDelete(it);
               delete it;
               Node *node = new Node(k, v);
               InsertIntoHead(node);
               mp.insert(make_pair(k, node));
          }
     }
     int get(int k)
     {
          if (mp.find(k) != mp.end())
          {
               InsertIntoHead(mp[k]);
               return mp[k]->value;
          }
          else
               return -1;
     }

private:
     void LinkedListDelete(Node *node)
     {
          if (!node)
               return;
          if (node->prev)
          {
               node->prev->next = node->next;
          }
          if (node->next)
          {
               node->next->prev = node->prev;
          }
          if (node == head)
          {
               head = node->next;
          }
          if (node == tail)
          {
               tail = node->prev;
          }
     }
     void InsertIntoHead(Node *node)
     {
          if (!node)
               return;
          LinkedListDelete(node);
          if (head)
               head->prev = node;
          node->next = head;
          node->prev = nullptr;
          if (!tail)
               tail = node;
          head = node;
     }
};
int main()
{
     /*Sample input
       3 1
       set 1 2
       get 1
       get 2
     */

     int n, capacity, i;
     cin >> n >> capacity;
     LRUCache l(capacity);
     for (i = 0; i < n; i++)
     {
          string command;
          cin >> command;
          if (command == "get")
          {
               int key;
               cin >> key;
               cout << l.get(key) << endl;
          }
          else if (command == "set")
          {
               int key, value;
               cin >> key >> value;
               l.set(key, value);
          }
     }
     return 0;
}