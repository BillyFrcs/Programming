#include <iostream>
#include <string>

using namespace std;

class withContructor
{
public:
     string Data;
     withContructor(const char *Data)
     {
          withContructor::Data = Data;
     }

     void Show()
     {
          cout << "This is " << withContructor::Data << " with constructor" << endl;
     }
};

class withoutContructor
{
public:
     string Data;

     void Show()
     {
          cout << "This is " << withoutContructor::Data << " without contructor" << endl;
     }
};

int main(int argc, char const *argv[])
{
     //1. Make object with constructor
     withContructor Object1 = withContructor("Object 1");
     Object1.Show();

     cout << endl;

     //2. Make object without constructor
     withoutContructor Object2;
     Object2.Data = ("Object 2");
     Object2.Show();

     cout << endl;

     //3. Another way to make object with constructor
     withContructor Object3("Object 3");
     Object3.Show();

     cout << endl;

     //4. Make object on heap memory
     withContructor *Object4 = new withContructor("Object 4");
     //(*Object4).Show(); //Deference
     (Object4)->Show(); //Arrow operator mapping function or attribute from pointer
     string Data = Object4->Data;
     cout << "With arrow " << Object4->Data << endl;

     cout << endl;

     withContructor *Object5;
     Object5 = new withContructor("Object 5");
     Object5->Show();

     cin.get();
     return 0;
}