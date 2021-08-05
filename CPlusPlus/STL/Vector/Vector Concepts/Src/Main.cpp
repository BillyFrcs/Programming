#include <iostream>
#include <vector>

void Vertex()
{
     std::vector<long> vertices = {12, 55, 87, 90, 23};
     int cap = vertices.capacity(), i = 0;

     while (i < 100)
     {
          i++;
          vertices.push_back(i);
          if (cap != vertices.capacity())
          {
               cap = vertices.capacity();
               std::cout << "Capacity = " << cap << "\n";
          }
     }

     std::cout << vertices[2] << std::endl;
     std::cout << "at => " << vertices.at(3) << "\n";

     vertices.insert(vertices.begin() + 4, 60); //Insert element vector
     std::cout << "Insert the 4 element => " << vertices[4] << "\n";

     std::cout << vertices.size() << "\n";

     vertices.pop_back(); //Decrease 1 size
     std::cout << "Pop_back size => " << vertices.size() << '\n';
}

void vectorPushBack()
{
     std::vector<int> vector = {1, 2, 3, 4, 5};

     vector.push_back(6);

     std::cout << "vector = {";
     for (auto i : vector)
     {
          std::cout << i << ", ";
     }
     std::cout << "}";
}

int main()
{
     //Vector functions
     std::vector<float> vertices = {15.5, 22.1, 38.4, 56.7, 21.9};
     const int var = vertices.front(); //Handle the variable

     std::cout << "Front => " << var << std::endl;
     std::cout << "Back => " << vertices.back() << std::endl;
     std::cout << "Size => " << vertices.size() << " Capacity => " << vertices.capacity() << "\n\n";

     Vertex();

     std::cout << "\n";

     vectorPushBack();

     return 0;
}