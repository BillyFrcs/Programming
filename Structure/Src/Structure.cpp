#include <iostream>
#include <stdio.h>

using namespace std;

struct Data
{
    //Components / member
    string Name;
    int Age;
    string Hobby [2]; //Array variable
} Data1, Data2; //Variable global

int main()
{
    //Declare with variable global
    Data1.Name = "Billy";
    Data1.Age = 18;
    Data1.Hobby [0] = {"Programming"}; //Array

    cout << "Name " << Data1.Name << endl;
    cout << "Age " << Data1.Age << endl;
    cout << "Hobby "<< Data1.Hobby[0] << endl;

    printf("\n");

    //Declare with variable local
    Data dataPerson;

    dataPerson.Name = "Franscois";
    dataPerson.Age = 16;

    cout << "Name " << dataPerson.Name << endl;
    cout << "Age " << dataPerson.Age << endl;

    printf ("\n");

    //Initialitation member structure
    Data2 = {"kolibonso", 19, {"Coding", "Games"}};

    cout << "Name " << Data2.Name << endl;
    cout << "Age " << Data2.Age << endl;
    cout << "Hobby " << Data2.Hobby[0] << endl;
    cout << "Second hobby " << Data2.Hobby[1] << endl;

    printf ("\n");

    Data personalData = {"Reggy", 18};

    cout << "Name " << personalData.Name << endl;
    cout << "Age " << personalData.Age << endl;

    return 0;
}