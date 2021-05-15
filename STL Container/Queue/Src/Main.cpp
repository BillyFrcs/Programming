#include <iostream>
#include <queue>

int main()
{
     std::queue<float> qVar;

     for (float i = 1.1; i <= 10.0; i += 1.1) //push
     {
          qVar.push(i);
          std::cout << (float)i << ' ';
     }

     std::cout << "\nSize => " << qVar.size() << "\n"; //size

     std::cout << "Front => " << qVar.front() << "\n"; //front

     std::cout << "Back => " << qVar.back() << "\n"; //back

     if (qVar.empty()) //empty
     {
          std::cout << std::boolalpha << qVar.empty() << "\n"; //false
     }
     else
     {
          std::cout << std::boolalpha << qVar.empty() << "\n"; //true
     }

     std::cout << "\nPop => \n";
     qVar.pop(); //pop from the beginning
     std::cout << "Size => " << qVar.size() << "\n";

     std::cout << "Front => " << qVar.front() << "\n";

     std::cout << "Back => " << qVar.back() << "\n";

     return false;
}