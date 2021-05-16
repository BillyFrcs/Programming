#include <iostream>
#include <queue>
#include <vector>

//Priority queue
template <class T>
class PriorityQueue
{
private:
     std::priority_queue<T> pQ;
     std::vector<T> vec = {3, 8, 1, 9, 10, 5};

     //greater => ascending & less => descending
     std::priority_queue<T, std::vector<T>, std::greater<T>> pQueue;

     std::priority_queue<T, std::vector<T>, std::less<T>> Q;
     std::vector<T> v = {9, 6, 1, 8, 7, 3};

public:
     virtual void sortNumbers() //Descending
     {
          for (T x : vec)
               pQ.push(x);

          while (!(pQ.empty()))
          {
               std::cout << pQ.top() << " ";
               pQ.pop();
          }
     }

     virtual void sortingNumbers() //Ascending
     {
          for (T y : vec)
               pQueue.push(y);

          while (!(pQueue.empty()))
          {
               std::cout << pQueue.top() << ' ';
               pQueue.pop();
          }
     }

     virtual void compareNumbers()
     {
          auto compare = [](float a, float b)
          {
               return a < b; //Change the operator to change ascending or descending
          };

          std::priority_queue<T, std::vector<T>, decltype(compare)> Q(compare);

          for (T z : v)
          {
               Q.push(z);
          }

          while (!(Q.empty()))
          {
               std::cout << Q.top() << " ";
               Q.pop();
          }
     }
};

int main()
{
     std::queue<float> qVar;

     for (float i = 1.1; i <= 10.0; i += 1.1) //push
     {
          qVar.push(i);
          std::cout << (float)i << ' ';
     }

     std::cout << "\nSize => " << qVar.size() << "\n"; //size

     std::cout << "Front => " << qVar.front() << "\n"; //front

     std::cout << "Back => " << qVar.back() << "\n"; //back

     if (qVar.empty()) //empty
     {
          std::cout << std::boolalpha << qVar.empty() << "\n"; //false
     }
     else
     {
          std::cout << std::boolalpha << qVar.empty() << "\n"; //true
     }

     std::cout << "\nPop => \n";
     qVar.pop(); //pop from the beginning
     std::cout << "Size => " << qVar.size() << "\n";

     std::cout << "Front => " << qVar.front() << "\n";

     std::cout << "Back => " << qVar.back() << "\n\n";

     //Obj template class
     PriorityQueue<int> PQ;

     PQ.sortNumbers();
     std::cout << "\n";
     PQ.sortingNumbers();
     std::cout << "\n";
     PQ.compareNumbers();

     return false;
}