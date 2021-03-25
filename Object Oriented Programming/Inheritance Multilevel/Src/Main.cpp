#include <iostream>

using namespace std;

//Inheritance multilevel
class clothesBrand
{
public:
     string name = "Nevada and Polo";
     int size = 35;

     void displayBrand()
     {
          cout << "Name brand: " << name << endl;
          cout << "Size brand: " << size << endl;
     }
};

class nevada : public clothesBrand
{
};

class polo : public nevada
{
};

int main(int argc, char const *argv[])
{
     polo myBrand;
     myBrand.displayBrand();

     return 0;
}