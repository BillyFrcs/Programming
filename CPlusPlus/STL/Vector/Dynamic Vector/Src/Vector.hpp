#pragma once
#include <iostream>
#include <stddef.h>

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

     ~Vector()
     {
          Clear();
          ::operator delete(mData, mCapacity * sizeof(T));
     }

     void pushBack(const T &value)
     {
          if (mSize >= mCapacity)
               reAlloc(mCapacity + mCapacity / 2);

          mData[mSize] = value;
          mSize++;
     }

     void pushBack(T &&value)
     {
          if (mSize >= mCapacity)
               reAlloc(mCapacity + mCapacity / 2);

          mData[mSize] = move(value);
          mSize++;
     }

     template <typename... Args>
     T &emplaceBack(Args &&...args)
     {
          if (mSize >= mCapacity)
               reAlloc(mCapacity + mCapacity / 2);

          new (&mData[mSize]) T(forward<Args>(args)...);
          mData[mSize] = T(forward<Args>(args)...);

          return mData[mSize++];
     }

     void popBack()
     {
          if (mSize > 0)
          {
               mSize--;
               mData[mSize].~T();
          }
     }

     void Clear()
     {
          for (size_t i = 0; i < mSize; i++)
               mData[mSize].~T();

          mSize = 0;
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

          T *newBlock = (T *)::operator new(newCapacity * sizeof(T));

          if (newCapacity < mSize)
               mSize = newCapacity;

          for (size_t i = 0; i < mSize; i++)
               newBlock[i] = move(mData[i]);

          for (size_t i = 0; i < mSize; i++)
               mData[mSize].~T();

          ::operator delete(mData, newCapacity * sizeof(T));
          mData = newBlock;
          mCapacity = newCapacity;
     }

private:
     T *mData = nullptr;

     size_t mSize = 0;
     size_t mCapacity = 0;
};