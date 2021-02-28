#include <string>
#include "Class.hpp"

//Add method definition here
void Song::addTitle(std::string newTitle)
{
     title = newTitle;
}

std::string Song::getTitle()
{
     return title;
}
