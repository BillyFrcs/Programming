#include <iostream>

// This can change with another data type
enum example : unsigned char
{
  A,
  B = 5,
  C
};

enum var : int
{
  num = 50
};

enum Names
{
  Billy,
  Franscois,
  Kolibonso
};

int main(int, char **)
{

  // Basics of enum
  example value = B;

  std::cout << value << std::endl;

  std::cout << std::endl;

  var dec = num;

  std::cout << dec << std::endl;

  std::cout << std::endl;

  Names nameList;

  nameList = Billy;

  std::cout << nameList << std::endl;

  return 0;
}