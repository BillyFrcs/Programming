#include <iostream>
#include <vector>

struct Vector
{
     long a, b, c;
     
     //Constructor
     Vector(int a, int b, int c) : a(a), b(b), c(c)
     {
     }

     //Copied the vector
     Vector(const Vector &vector) : a(vector.a), b(vector.b), c(vector.c)
     {
          std::cout << "Copied \n";
     }
};

int main(int, char **)
{
     //Struct vector
     std::vector<Vector> getVector;

     getVector.reserve(5);

     getVector.push_back(Vector(4, 7, 3));
     getVector.push_back(Vector(5, 1, 6 ));
     getVector.push_back(Vector(6, 9, 5));

     getVector.emplace_back(2, 8, 9); //Not execution

     __debugbreak;
}