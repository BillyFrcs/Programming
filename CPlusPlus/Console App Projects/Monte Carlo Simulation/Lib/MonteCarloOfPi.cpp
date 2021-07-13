#include <cstdlib>
#include <iostream>
#include <time.h>

// Default using 10000
#define INTERVAL 100

// Estimating the value of Pi using Monte Carlo
class MonteCarloOfPi
{
public:
     MonteCarloOfPi()
     {
          std::srand(time(NULL)); // Set time as NULL
     }

     virtual void randomTotalGeneratorOfPi()
     {
          for (int i = 0; i < (INTERVAL * INTERVAL); i++)
          {
               // Generate random number x and y value
               _randX = double(std::rand() % (INTERVAL + 1)) / INTERVAL;
               _randY = double(std::rand() % (INTERVAL + 1)) / INTERVAL;

               _originDist = (_randX * _randX) + (_randY * _randY);

               if (_originDist <= 1)
                    _circlePoints++;

               // Total number of points generated
               _squarePoints++;

               _pi = double(4 * _circlePoints) / _squarePoints;

               std::cout << _randX << " " << _randY << " " << _circlePoints << " " << _squarePoints << " - " << _pi << std::endl
                         << std::endl;

               //Pausing estimation for default 10 values (Optional)
               if (i < 20)
                    std::getchar();
          }

          // Final Estimated Value
          std::cout << "\nFinal Estimation of Pi = " << _pi;
     }

private:
     double _randX, _randY, _originDist, _pi;
     int _circlePoints = 0, _squarePoints = 0;
};

int main()
{
     /*Sample input
       1 2 3 4 5 6 7 8 9 10
     */

     MonteCarloOfPi *mcop = new MonteCarloOfPi();

     mcop->randomTotalGeneratorOfPi();

     return 0;
}