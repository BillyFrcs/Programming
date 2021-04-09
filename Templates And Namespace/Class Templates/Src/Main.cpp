#include <iostream>

using namespace std;

template <typename T>
class Height
{
private:
     T cm;

public:
     void addData(T var)
     {
          cm = var;
     }

     T getData()
     {
          return cm;
     }
};

template <class N, class A>
class Data
{
protected:
     N name;
     A age;

public:
     Data(N Name, A Age)
     {
          name = Name;
          age = Age;
     }

     N showDataName()
     {
          return name;
     }

     void showDataAge()
     {
          cout << "Age = " << age << endl;
     }
};

int main()
{
     //Set data type bellow
     Height<int> objTemplate;

     objTemplate.addData(175);

     //Print value
     cout << "Value int = " << objTemplate.getData() << endl;

     //The data type can change with another data type
     Height<double> objTemplate2;

     objTemplate2.addData(1.75);

     cout << "Value double = " << objTemplate2.getData() << endl;

     cout << endl;

     Data<string, int> objTemplateData("Billy", 18);

     cout << "Name = " << objTemplateData.showDataName() << endl;
     objTemplateData.showDataAge();

     return 0;
}