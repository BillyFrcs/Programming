#include <deque>
#include <iostream>

namespace BE
{
     std::deque<int> dec = {1, 2, 3, 4, 5, 6};
     void beginEnd()
     {
          //Push => add
          dec.push_front(0);
          dec.push_back(7);

          std::cout << "begin and end = ";
          for (std::deque<int>::iterator it = dec.begin(); it != dec.end(); it++)
          {
               std::cout << *it << " ";
          }
     }
}

namespace RBE
{
     std::deque<int> dec = {-1, 2, 3, 4, 5, -6};
     void rBeginEnd()
     {
          //Pop => remove
          dec.pop_front();
          dec.pop_back();

          std::cout << "\nrbegin and rend = ";
          for (std::deque<int>::reverse_iterator rIt = dec.rbegin(); rIt != dec.rend(); ++rIt)
               std::cout << *rIt << " ";
     }
}

int main()
{
     std::deque<int> dec = {1, 2, 3, 4, 5, 6};

     std::cout << "Size elements: " << dec.size() << "\n"; //Size elements

     std::cout << "Access element: [" << dec[2] << "] \n"; //Access the element

     //Front and back element
     std::cout << "Front element: " << dec.front() << ", Back element: " << dec.back() << "\n";

     //Begin and end
     BE::beginEnd();
     RBE::rBeginEnd();

     return 0;
}