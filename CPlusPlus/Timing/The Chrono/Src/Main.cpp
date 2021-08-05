#include <chrono>
#include <iostream>
#include <thread>

struct Timer
{
     //It can change with steady_clock instead of high_resolution_clock
     std::chrono::time_point<std::chrono::high_resolution_clock> start, end;
     std::chrono::duration<double> Duration;

     //Constructor
     Timer()
     {
          start = std::chrono::high_resolution_clock::now();
     }

     //Destructor
     ~Timer()
     {
          end = std::chrono::high_resolution_clock::now();

          Duration = (end - start);

          double ms = Duration.count() * 1000.0f;
          std::cout << "Timer = " << ms << "ms"
                    << "\n \n";
     }
};

void Function()
{
     Timer timer;

     for (auto i = 0; i < 5; i++)
          std::cout << "Billy \n";
}

using namespace std::literals::chrono_literals;

int main(int, char **)
{
     auto Start = std::chrono::high_resolution_clock::now();

     //Pause execution for 1 seconds
     std::this_thread::sleep_for(1s); //This mean 1 second

     auto End = std::chrono::high_resolution_clock::now();

     std::chrono::duration<double> Duration = (End - Start);

     //Print Duration to the console
     std::cout << "Duration execution = " << Duration.count() << "s"
               << "\n \n";

     //Called function and struct Timer
     Function();

     return 0;
}