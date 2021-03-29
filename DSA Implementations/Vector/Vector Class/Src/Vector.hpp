#pragma once
#include <stddef.h>
#include <iostream>

using namespace std;

template <typename T>
class Vector
{
public:
     Vector()
     {
          //Allocate 2 elements
          reAlloc(2);
     }

     void pushBack(const T &value)
     {
          if (mSize >= mCapacity)
               reAlloc(mCapacity + mCapacity / 2);

          mData[mSize] = value;
          mSize++;
     }

     const T &operator[](size_t index) const
     {
          if (index >= mSize)
          {
               //Assert
          }

          return mData[index];
     }

     T &operator[](size_t index)
     {
          if (index >= mSize)
          {
               //Assert
          }
          return mData[index];
     }

     size_t Size() const
     {
          return mSize;
     }

private:
     void reAlloc(size_t newCapacity)
     {
          //1. Allocate a new block of memory
          //2. Copy / move a new elements into blocks
          //3. Delete

          T *newBlock = new T[newCapacity];

          if (newCapacity < mSize)
               mSize = newCapacity;

          for (size_t i = 0; i < mSize; i++)
               newBlock[i] = mData[i];

          delete[] mData;
          mData = newBlock;
          mCapacity = newCapacity;
     }

private:
     T *mData = nullptr;

     size_t mSize = 0;
     size_t mCapacity = 0;
};