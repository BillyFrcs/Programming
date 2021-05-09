#pragma once

#include <stddef.h>
#include <iostream>

using namespace std;

template <typename T, size_t S>

class Array
{
public:
     Array()
     {
     }

     constexpr size_t Size() const
     {
          return S;
     }

     T &operator[](size_t index)
     {
          return mData[index];
     }

     const T &operator[](size_t index) const
     {
          return mData[index];
     }

     T *Data()
     {
          return mData;
     }

     const T *Data() const
     {
          return mData;
     }

private:
     T mData[S];
};