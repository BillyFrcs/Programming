#include <iostream>
#include <vector>

void Vector()
{
     std::vector<int> vertex;

     //Iterators function (begin, end, cbegin, cend, rbegin, rend, crbegin, crend)
     for (auto i = 1; i <= 5; i++)
          vertex.push_back(i);

     std::cout << "Begin and end = ";
     for (auto i = vertex.begin(); i != vertex.end(); i++)
     {
          std::cout << *i << ' ';
     }

     std::cout << "\nCrbegin and crend = ";
     for (auto i = vertex.crbegin(); i != vertex.crend(); ++i)
     {
          std::cout << *i << ' ';
     }
}

void vectorSwap()
{
     std::vector<int> Vertex1, Vertex2;

     Vertex1.push_back(5);
     Vertex2.push_back(6);

     std::cout << "\n\nBefore swap \nVector 1 = ";
     for (auto i = 0; i < Vertex1.size(); i++)
     {
          std::cout << Vertex1[i] << ' ';
     }

     std::cout << "\nVector 2 = ";
     for (auto i = 0; i < Vertex2.size(); i++)
     {
          std::cout << Vertex2[i] << ' ';
     }

     // Swaps vertex vector
     Vertex1.swap(Vertex2);

     std::cout << "\n\nAfter swap \nVector 1 = ";
     for (auto i = 0; i < Vertex1.size(); i++)
     {
          std::cout << Vertex1[i] << ' ';
     }

     std::cout << "\nVector 2 = ";
     for (auto i = 0; i < Vertex2.size(); i++)
     {
          std::cout << Vertex2[i] << ' ';
     }
}

int main(int argc, char *argv[])
{
     Vector();

     vectorSwap();

     return false;
}