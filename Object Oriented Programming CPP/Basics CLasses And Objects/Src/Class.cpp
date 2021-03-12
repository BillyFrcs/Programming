#include <iostream>

using namespace std;

//Class
class myClass
{
public:               //Access specifier
     string myString; //Attribute
     double myNum;
};

//Class, object and method
class dataCompany
{
public:
     void methodShowDataCompany(string companyName,int codeCompany) //create method
     {
          cout << "Company name: " << companyName << endl;
          cout << "Company code: " << codeCompany << endl;
     }
};

int main(int argc, char const *argv[])
{
     myClass myObj; //Create object

     myObj.myString = "Billy";
     myObj.myNum = 19;

     cout << "Name: " << myObj.myString << endl;
     cout << "Number: " << myObj.myNum << endl;

     cout << endl;

     myClass myObj2;

     myObj2.myString = "Franscois";
     myObj2.myNum = 8;

     cout << "Name: " << myObj2.myString << endl;
     cout << "Number: " << myObj2.myNum << endl;

     cout << endl;

     dataCompany objectCompany;

     objectCompany.methodShowDataCompany("Microsoft", 19082002);

     return 0;
}