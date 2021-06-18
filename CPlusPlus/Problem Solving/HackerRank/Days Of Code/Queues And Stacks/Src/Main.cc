#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
     //Write your code here
     void pushCharacter(char ch)
     {
          _stack.push(ch);
     }

     void enqueueCharacter(char ch)
     {
          _queue.push(ch);
     }

     char popCharacter()
     {
          char s = _stack.top();

          _stack.pop();

          return s;
     }

     char dequeueCharacter()
     {
          char q = _queue.front();
          _queue.pop();

          return q;
     }

private:
     stack<char> _stack;
     queue<char> _queue;
};

int main()
{
     /*Sample input
       racecar
     */

     // read the string s.
     string s;
     getline(cin, s);

     // create the Solution class object p.
     Solution obj;

     // push/enqueue all the characters of string s to stack.
     for (int i = 0; i < s.length(); i++)
     {
          obj.pushCharacter(s[i]);
          obj.enqueueCharacter(s[i]);
     }

     bool isPalindrome = true;

     // pop the top character from stack.
     // dequeue the first character from queue.
     // compare both the characters.
     for (int i = 0; i < s.length() / 2; i++)
     {
          if (obj.popCharacter() != obj.dequeueCharacter())
          {
               isPalindrome = false;

               break;
          }
     }

     // finally print whether string s is palindrome or not.
     if (isPalindrome)
     {
          cout << "The word, " << s << ", is a palindrome.";
     }
     else
     {
          cout << "The word, " << s << ", is not a palindrome.";
     }

     return 0;
}