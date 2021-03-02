#include <iostream>
#include <string>

using namespace std;

//Class with constructor (only can use public:)
class Data {
     
     public:

     string Name;
     int No;
     double dateBorn;

     //Constructor with parameter
     Data (string inputName, int inputNo, double inputDateBorn) //Data is namespace
     { 
           Data::Name = inputName;
           Data::No = inputNo;
           Data::dateBorn = inputDateBorn;
           //Press alt + select
           
           //data 1 and data 2
           cout << "Name: " << Data::Name << endl;
           cout << "No: " << Data::No << endl;
           cout << "Date: " << Data::dateBorn << endl;
     }
};

int main (int argc, char const *argv[])
{
     system ("cls"); //ctr + D
     
     //First
     Data data1 = Data ("Billy", 13, 19.08);

     cout << endl;

     //Second
     Data data2 = Data ("Sendy", 18, 24.08);

     cin.get();
     return 0;
}