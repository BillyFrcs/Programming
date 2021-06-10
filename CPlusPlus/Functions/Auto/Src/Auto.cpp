#include <iostream>
#include <vector>

template <typename X, typename Y>
auto findMinNum(X x, Y y) -> decltype(x < y ? x : y)
{
     return (x < y) ? x : y;
}

template <class A, class B>
auto findMaxNum(A a, B b) -> decltype(a > b ? a : b)
{
     return (a > b) ? a : b;
}

int main(int, char **)
{
     //Called template auto function
     std::cout << findMinNum(170, 46) << "\n"; //Mininum

     std::cout << findMaxNum(3.15, 8.95) << "\n"; //Maximum

     __debugbreak;
}