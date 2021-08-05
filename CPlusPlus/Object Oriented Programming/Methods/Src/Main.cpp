#include <iostream>
#include <string>

using namespace std;

class Name
{
public:
     string name;
     string hobby;
     double no;

     Name(string inputName, string inputHobby, double inputNo) //Parameter
     {
          //Name is class, name not
          Name::name = inputName;
          Name::hobby = inputHobby;
          Name::no = inputNo;
     }

     //Method show data without parameter and return 
     //Function in class
     void showData()
     {
          cout << "Name:" << name << endl;
          cout << "Hobby: " << hobby << endl;
          cout << "No: " << no << endl;
     }

     //Method wih parameter without return
     void changeData(const char *newName)
     {
          Name::name = newName;
     }

     //Method without parameter, using return
     string getName()
     {
          return Name::name;
     }

     string getHobby()
     {
          return Name::hobby;
     }

     double getNo()
     {
          return Name::no;
     }

     //Method with parameter and return
     double catrolNo (const double &addValue){
          return Name::no + addValue;
     }
};

int main(int argc, char const *argv[])
{
     //Show data with void
     Name dataStudent = Name("Billy", "Programming", 19.08);
     Name dataStudent1 = Name("Franscois", "Coding", 13.90);

     dataStudent.showData();

     cout << endl;

     dataStudent1.showData();

     cout << endl;

     //Change data with parameter
     dataStudent1.changeData("Kolibonso");
     dataStudent1.showData();

     cout << endl;

     //Update data with return
     string dataName = dataStudent.getName();
     cout << "Data name: " << dataName << endl;
     cout << "Hobby: " << dataStudent.getHobby() << endl;
     cout << "No: " << dataStudent.getNo() << endl;
     cout << "Catrol value: " << dataStudent.catrolNo(2.65) << endl;//This can use another arithmetics

     cin.get();
     return 0;
}