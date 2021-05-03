#include <iostream>
#include <vector>

namespace Vector
{
     struct Vertex
     {
          unsigned int x, y, z;
     };
}

//Print easily
std::ostream &operator<<(std::ostream &stream, const Vector::Vertex &vertex)
{
     stream << vertex.x << ", " << vertex.y << ", " << vertex.z;

     return stream;
}

void vectorFunction(const std::vector<Vector::Vertex> &vertices)
{
     //Some code here
}

int main(int argc, char *argv[])
{
     std::vector<Vector::Vertex> vertices, ver;

     vertices.push_back({1, 2, 3});
     vertices.push_back({5, 9, 1});

     //Pass by function
     vectorFunction(vertices);

     for (int i = 0; i < vertices.size(); i++)
          std::cout << vertices[i] << "\n";

     ver.push_back({4, 5, 6});
     ver.push_back({3, 8, 2});

     //Erase the element
     ver.erase(vertices.begin() + 1);

     //This can use const
     for (Vector::Vertex &V : ver)
          std::cout << V << "\n";

     __debugbreak;
}