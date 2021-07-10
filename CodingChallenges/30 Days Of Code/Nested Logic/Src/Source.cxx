#include <bits/stdc++.h>

class Library
{
public:
     void input()
     {
          std::cin >> _aDay >> _aMonth >> _aYear; //date returned
          std::cin >> _eDay >> _eMonth >> _eYear; //date due
     }

     int getLibrary()
     {
          if (_aYear < _eYear)
          {
               _fine = 0;
          }
          else
          {
               if (_aYear > _eYear)
               {
                    _fine = 10000;
               }
               else if (_aMonth > _eMonth)
               {
                    _fine = 500 * (_aMonth - _eMonth);
               }
               else if (_aDay > _eDay)
               {
                    _fine = 15 * (_aDay - _eDay);
               }
          }

          return _fine;
     }

private:
     //Expected, actual
     int _aDay, _aMonth, _aYear, _eDay, _eMonth, _eYear;

     int _fine = 0;
};

int main()
{
     /*Sample input
       9 6 2015    
       6 6 2015
     */

     //Method 1
     Library L;

     L.input();

     std::cout << L.getLibrary() << std::endl;

     /**Method 2 (using array container)
      *uncomment if u want to run the program
     */
     /*
     std::array<int, 3> actual, expected;

     std::cin >> actual[2] >> actual[1] >> actual[0];
     std::cin >> expected[2] >> expected[1] >> expected[0];

     std::cout << (actual <= expected ? 0 : std::max({
          10000 * (actual[0] > expected[0]), 
          500 * (actual[1] - expected[1]),
          15 * (actual[2] - expected[2])
          }));
     */

     return 0;
}