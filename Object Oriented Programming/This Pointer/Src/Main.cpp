#include <iostream>

class memberThis
{
private:
     float num, N;

public:
     ~memberThis()
     {
     }

     virtual void getNum(float F = 0.0, float n = 0.0)
     {
          this->num = F;
          this->N = n;
     }

     void print()
     {
          if (num > N)
               std::cout << num << "\n";

          if (num < N)
               std::cout << N << "\n";
     }
};

class testReturn
{
private:
     int x, y;

public:
     testReturn(int a, int b)
     {
          this->x = a;
          this->y = b;
     }

     testReturn &TestA(int a)
     {
          (x = a);

          return *this;
     }

     testReturn &TestB(int b)
     {
          (y = b);

          return *this;
     }

     virtual void Print()
     {
          for (auto i = 0; i < 5; i++)
          {
               std::cout << "x = " << x << ", y = " << y << "\n";
               if (i != 4)
                    break;
          }
     }
};

int main(int argc, char const *argv[])
{
     //First class obj
     memberThis Obj1;

     float num = 13.2f;

     Obj1.getNum(16.4f, num);

     Obj1.print();

     std::cout << "\n";

     //Second class obj
     testReturn Obj2(3, 4);

     //Return object by reference
     Obj2.TestA(21).TestB(39);

     Obj2.Print();

     return 0;
}