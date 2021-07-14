#include <cmath>
#include <exception>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
using namespace std;

class Server
{
private:
     static int load;

public:
     static int compute(long long A, long long B)
     {
          load += 1;
          if (A < 0)
          {
               throw std::invalid_argument("A is negative");
          }
          vector<int> v(A, 0);
          int real = -1, cmplx = sqrt(-1);
          if (B == 0)
               throw 0;
          real = (A / B) * real;
          int ans = v.at(B);
          return real + A - B * ans;
     }
     static int getLoad()
     {
          return load;
     }
};
int Server::load = 0;

int main()
{
     /*Sample input
        2
       -8 5
       1435434255433 5
     */

     int T;
     cin >> T;
     while (T--)
     {
          long long A, B;
          cin >> A >> B;

          /* Enter your code here. */
          try
          {
               std::cout << Server::compute(A, B) << std::endl;
          }
          catch (bad_alloc &error)
          {
               std::cout << "Not enough memory \n";
          }
          catch (std::exception &error)
          {
               std::cout << "Exception: " << error.what() << std::endl;
          }
          catch (...)
          {
               std::cout << "Other Exception \n";
          }
     }
     cout << Server::getLoad() << endl;
     return 0;
}