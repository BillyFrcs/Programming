#include <iostream>
#include <stack>

int main()
{
     std::stack<int> sVar;

     for (int i = 1; i < 6; i++)
     {
          sVar.push(i);
          std::cout << i << ' ';
     }

     std::cout << "\nSize = " << sVar.size() << "\n";

     std::cout << "Top = " << sVar.top() << "\n"; //top

     sVar.pop();
     std::cout << "Pop \n";
     std::cout << "Size = " << sVar.size() << "\n";

     std::cout << "Top = " << sVar.top() << "\n";

     if (sVar.empty())
          std::cout << "Stack is empty \n";

     else
          std::cout << "Stack is not empty \n";

     return false;
}