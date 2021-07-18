#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle
{
protected:
     int width, height;

public:
     void read_input()
     {
          std::cin >> width >> height;
     }

     void display()
     {
          std::cout << width << ' ' << height << std::endl;
     }
};

class RectangleArea : public Rectangle
{
public:
     void display()
     {
          int calculate = (width * height);

          std::cout << calculate << std::endl;
     }
};

int main()
{
     /*Sample input
       10 5
     */

     /*
     * Declare a RectangleArea object
     */
     RectangleArea r_area;

     /*
     * Read the width and height
     */
     r_area.read_input();

     /*
     * Print the width and height
     */
     r_area.Rectangle::display();

     /*
     * Print the area
     */
     r_area.display();

     return 0;
}