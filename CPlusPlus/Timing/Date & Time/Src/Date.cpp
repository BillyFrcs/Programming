#include <ctime>
#include <iostream>

int main(int, char **)
{

     //Current date & time based on system
     time_t timeSystem = time(0);

     //Converd timeSystem to string (char)
     char *dateSystem = ctime(&timeSystem);

     std::cout << "Local date and time is: " << dateSystem << std::endl;

     //Converd timeSystem to tm struct for UTC
     tm *gmTime = gmtime(&timeSystem);

     dateSystem = asctime(gmTime);

     std::cout << "UTC date and time is: " << dateSystem << std::endl;

     __debugbreak;
}