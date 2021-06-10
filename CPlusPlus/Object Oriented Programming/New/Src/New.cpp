#include <chrono>
#include <iostream>
#include <string>
#include <thread>

class Robot
{
protected:
     std::string RobotType;
     int RobotPower;

public:
     Robot(std::string robottype, int robotpower)
     {
          this->RobotType = robottype;
          this->RobotPower = robotpower;
     }

     virtual void Print()
     {
          std::cout << "Robot type : " << RobotType << "\n";
          std::cout << "Robot power : " << RobotPower << "\n";
     }
};

using namespace std::literals::chrono_literals;

int main(int argc, char const *argv[])
{
     {
          Robot *R1 = new Robot("Transformers", 1000);
          R1->Print();

          auto start = std::chrono::high_resolution_clock::now();
          std::this_thread::sleep_for(1s);
          auto end = std::chrono::high_resolution_clock::now();

          std::chrono::duration<float> Duration = end - start;

          std::cout << "Duration: " << Duration.count() << "s";
     }
     return 0;
}