#include <iostream>
#include <string>
#include "Class.hpp"

//Add Constructor
Song::Song(std::string newTitle, std::string newArtist)
{
     title = newTitle;
     artist = newArtist;
}

//Add Destructor using this symbol ~
Song::~Song()
{
     std::cout << "Song class destructor \n";
}

//Add method definition here and scope the class with ::
void Song::addTitle(std::string newTitle)
{
     title = newTitle;
}

std::string Song::getTitle()
{
     return "Song title " + title;
}

void Song::addArtist(std::string addartist)
{
     artist = addartist;
}

std::string Song::getArtist()
{
     return "Artist Name " + artist;
}

//Fraction => pecahan
void Fraction::printFraction()
{
     std::cout << num << den;
}

Fraction::Fraction()
{
     num = 5;
     den = 6;
}

int &Fraction::Num()
{
     return num;
}

int &Fraction::Den()
{
     return den;
}