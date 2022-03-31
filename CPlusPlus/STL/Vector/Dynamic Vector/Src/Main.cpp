#include "Array.hpp"
#include "Vector.hpp"

#include <iostream>

#define CLOSE

using namespace std;

struct Vector3
{
    float x = 0.0f, y = 0.0f, z = 0.0f;

    int *memoryBlock = nullptr;

    Vector3()
    {
        memoryBlock = new int[5];
    }

    Vector3(float scalar) : x(scalar), y(scalar), z(scalar)
    {
        memoryBlock = new int[5];
    }

    Vector3(float x, float y, float z) : x(x), y(y), z(z)
    {
        memoryBlock = new int[5];
    }

    Vector3(const Vector3 &other) = delete;

    Vector3(Vector3 &&other) : x(other.x), y(other.y), z(other.z)
    {
        memoryBlock = other.memoryBlock;
        other.memoryBlock = nullptr;

        cout << "Move" << endl;
    }

    ~Vector3()
    {
        cout << "Destroy" << endl;
        delete[] memoryBlock;
    }

    Vector3 &operator=(const Vector3 &other) = delete;

    Vector3 &operator=(Vector3 &&other)
    {
        memoryBlock = other.memoryBlock;
        other.memoryBlock = nullptr;

        cout << "Move" << endl;
        x = other.x;
        y = other.y;
        z = other.z;

        return *this;
    }
};

template <typename T>
void printVector(const Vector<T> &vector)
{
    for (size_t i = 0; i < vector.Size(); i++)
        cout << vector[i] << endl;

    cout << "------------------------" << endl;
}

template <>
void printVector(const Vector<Vector3> &vector)
{
    for (size_t i = 0; i < vector.Size(); i++)
    {
        cout << vector[i].x << ", " << vector[i].y << ", " << vector[i].z << endl;
    }
    cout << "------------------------" << endl;
}

int main(int argc, char const *argv[])
{
    // Array
    Array<string, 2> data;

    data[0] = "Billy";
    data[1] = "Franscois";

#ifndef CLOSE
    // Vector
    Vector<string> vector;

    vector.pushBack("Game");
    vector.pushBack("Developer");
    vector.pushBack("C++");

    printVector(vector);

    Vector<Vector3> vector3;

    vector3.pushBack(Vector3(2.0f));
    vector3.pushBack(Vector3(5, 8, 3));
    vector3.pushBack(Vector3());

    printVector(vector3);
#endif

    // Vector 3
    {
        Vector<Vector3> vector3;

        vector3.emplaceBack(2.0f);
        vector3.emplaceBack(5, 8, 3);
        vector3.emplaceBack(1, 4, 9);
        vector3.emplaceBack();
        printVector(vector3);

        vector3.popBack();
        vector3.popBack();
        printVector(vector3);

        vector3.emplaceBack(7, 6, 8);
        vector3.emplaceBack(1, 2, 3);
        printVector(vector3);
        vector3.Clear();
        printVector(vector3);

        vector3.emplaceBack(4, 2, 1);
        vector3.emplaceBack(5, 9, 3);
        printVector(vector3);

        printVector(vector3);
    }

    Vector<int> intVector;

    intVector.pushBack(5);
    intVector.emplaceBack(2);
    intVector.emplaceBack(2);
    intVector.emplaceBack(2);
    intVector.emplaceBack(2);
    intVector.emplaceBack(2);
    printVector(intVector);
    intVector.popBack();
    printVector(intVector);
    intVector.Clear();

    return 0;
}