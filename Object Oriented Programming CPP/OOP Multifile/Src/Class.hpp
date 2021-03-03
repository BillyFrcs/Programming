#include <string>

//Add class here
class Song
{
     std::string title;

public:
     void addTitle(std::string newTitle);
     
     std::string getTitle();

     std::string artist;
     void addArtist(std::string addartist);
     std::string getArtist();
};