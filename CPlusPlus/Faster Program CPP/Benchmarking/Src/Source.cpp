#include <array>
#include <chrono>
#include <iostream>
#include <memory>

class Timer
{
public:
     Timer()
     {
          memoryStartTimePoint = std::chrono::high_resolution_clock::now();
     }

     ~Timer()
     {
          Stop();
     }

     void Stop()
     {
          auto endTimePoint = std::chrono::high_resolution_clock::now();

          auto start = std::chrono::time_point_cast<std::chrono::microseconds>(memoryStartTimePoint).time_since_epoch().count();
          auto end = std::chrono::time_point_cast<std::chrono::microseconds>(endTimePoint).time_since_epoch().count();

          auto duration = end - start;
          double ms = duration * 0.001;

          // std::cout << duration << " us (" << ms << "ms)\n";
          std::cout << "Duration = " << duration << " (" << ms << ") ms" << std::endl;
     }

private:
     std::chrono::time_point<std::chrono::high_resolution_clock> memoryStartTimePoint;
};

int main(int argc, char const *argv[])
{
     // Wrap
     {
          int value = 0;
          Timer timer;

          for (int i = 0; i < 1000000; i++)
               value += 5;

          std::cout << "Value = " << value << std::endl;
     }

     std::cout << std::endl;

     // Struct
     struct Vector
     {
          float x, y;
     };

     std::cout << "Make shared \n";
     {
          std::array<std::shared_ptr<Vector>, 1000> sharedPtrs;

          Timer timer;

          for (int i = 0; i < sharedPtrs.size(); i++)
               sharedPtrs[i] = std::make_shared<Vector>();
     }

     std::cout << std::endl;

     std::cout << "New shared \n";
     {
          std::array<std::shared_ptr<Vector>, 1000> sharedPtrs;

          Timer timer;

          for (int i = 0; i < sharedPtrs.size(); i++)
               sharedPtrs[i] = std::shared_ptr<Vector>(new Vector());
     }

     std::cout << std::endl;

     std::cout << "Make unique \n";
     {
          std::array<std::unique_ptr<Vector>, 1000> sharedPtrs;

          Timer timer;

          for (int i = 0; i < sharedPtrs.size(); i++)
               sharedPtrs[i] = std::make_unique<Vector>();
     }

     __debugbreak();
}