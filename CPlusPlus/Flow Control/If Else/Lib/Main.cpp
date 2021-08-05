#include <iostream>

class countWideProgram
{

protected:
     int Length, Width;

public:
     void setInfo()
     {
          std::cout << "Length = ";
          std::cin >> Length;

          std::cout << "Width = ";
          std::cin >> Width;
     }

     friend class getInfo;
};

class getInfo : public countWideProgram
{
public:
     const int counterWide(countWideProgram)
     {
          //Count wide program
          if (Length <= 0)
          {
               std::cout << "Length not include 0 or negative \n";
          }
          if (Width <= 0)
          {
               std::cout << "Width not include 0 or negative \n";
          }

          const double Wide = (Length * Width);

          return (Wide);
     }
};

int main(int argc, char const *argv[])
{
     countWideProgram objWide;

     getInfo objWide2;

     objWide2.setInfo();

     std::cout << objWide2.counterWide(objWide);

     return 0;
}