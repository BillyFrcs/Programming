#include "Array.hpp"
#include "Vector.hpp"
#include <iostream>

using namespace std;

template <typename T>
void printVector(const Vector<T> &vector)
{
    for (size_t i = 0; i < vector.Size(); i++)
        cout << vector[i] << endl;

    cout << "------------------------" << endl;
}

int main()
{

    Array<string, 2> data;

    data[0] = "Billy";
    data[1] = "Franscois";

    Vector<string> vector;

    vector.pushBack("Game");
    vector.pushBack("Developer");
    vector.pushBack("C++");

    printVector(vector);

    return 0;
}