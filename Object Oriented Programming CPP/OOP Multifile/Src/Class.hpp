#ifndef SONG
#define SONG
#include <string>

//Add class here
//Class Song
class Song
{
     std::string title;

public:
     //Constructor
     Song (std::string newTitle, std::string newArtist);

     //Methods
     void addTitle(std::string newTitle);
     std::string getTitle();

     std::string artist;
     void addArtist(std::string addartist);
     std::string getArtist();
};

//Class Fraction
class Fraction
{
     int den, num;

public:
     void printFraction();
     Fraction();
     int &Num();
     int &Den();
};

#endif