#include <iostream>
#include <string>

//Method 1
std::string underscoreValue(std::string text)
{
     int value = text.length();
     for (int i = 0; i < value; i++)
     {
          if (isspace(text[i]))
               text[i] = '_';
     }
     
     return text;
}

//Method 2
std::string UnderscoreValue(std::string text)
{
     for (auto &c : text)
          if (std::isspace(c))
               c = '-';

     return text;
}

std::string process(const char *charPtr)
{
     return charPtr;
}

int main(int, char **)
{
     //Method 1
     std::string txt = "Billy Franscois";
     std::cout << underscoreValue(txt);

     std::cout << std::endl;

     //Method 2 more advanced
     std::string text = "Sendy Friscila";
     std::cout << UnderscoreValue(text);

     std::cout << std::endl;

     const char print[5] = {'H', 'e', 'l', 'l', 'o'};
     std::cout << process(print);

     std::cin.get();
}