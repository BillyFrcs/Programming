#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib> //Contain random function

//www.cppreference.com
using namespace std;

//void = 0 (Kosong function)

//Reporter
void Billy()
{
    cout << "Billy Franscois" << endl;
}

int kuadrat(int b)
{ //Function
    int c;
    c = b * b;
    return c;
}

//Void reporter
void menampilkan(int input)
{
    cout << "Menampilkan with void: ";
    cout << input << endl;
}

int tambah(int d, int e)
{ //function
    int f;
    f = d + e, d * e;
    return f;
}

//1
//Menghitung luas
double menghitung_luas(double p, double l)
{
    double luas = p * l;
    return luas;
}

//2
//Menghitung keliling
double menghitung_keliling(double p, double l)
{
    double keliling = 2 * (p + l);
    return keliling;
}

//1
//Luas with void
void tampilkan_luas(double p, double l)
{
    cout << "=> Using void function" << endl;
    cout << "Luasnya is: ";
    cout << menghitung_luas(p, l) << endl
         << endl;
}

//2
//Keliling with void
void tampilkan_keliling(double p, double l)
{
    cout << "=> Using void function" << endl;
    cout << "Kelilingnya is: ";
    cout << menghitung_keliling(p, l) << endl;
}

//Prototype
void animalProgram();

int main(int argc, char const *argv[])
{
    Billy();

    cout << endl;

    //Function or method
    int a;
    cout << "Menghitung akar dari a: ";
    cin >> a;

    double b = sqrt(a);
    cout << "Akarnya adalah: " << b << endl;

    cout << endl;

    //Concept Dice program example
    //cout << "Concept dice program \n";
    // for (int a = 0; a < b; a++) {
    //     cout << a + rand() % 6 << endl;
    // }

    // Simple Dice program
    cout << "Dice program example" << endl;

    char lanjut;

    while (true)
    {

        cout << "Lempar dadu (y/n)" << endl;
        cin >> lanjut;

        if (lanjut == 'y')
        {
            cout << 1 + rand() % 6 << endl;
        }

        else if (lanjut == 'n')
        {
            break;
        }

        else
        {
            cout << "Please choose y/n :) \n";
        }
    }

    cout << endl;

    //Fuction return "kuadrat"
    int input, hasil;

    cout << "Value kuadrat from: ";
    cin >> input;

    hasil = kuadrat(input);

    cout << "Value kuadrat is: " << hasil << endl;
    menampilkan(hasil); //=> with void

    cout << endl;

    //Function "tambah"
    int hasil2, d, e;

    cout << "Enter value d: ";
    cin >> d;

    cout << "Enter value e: ";
    cin >> e;

    hasil2 = tambah(d, e);
    cout << "Result is, " << hasil2 << endl;

    cout << endl;

    //Function luas dan keliling persegi panjang with data type "double"
    double panjang, lebar;

    cout << "Panjang: ";
    cin >> panjang;

    cout << "Lebar: ";
    cin >> lebar;

    cout << endl;

    //Luas
    //1
    cout << "Luasnya adalah: ";
    cout << menghitung_luas(panjang, lebar) << endl
         << endl;

    //2
    tampilkan_luas(panjang, lebar);

    //Keliling
    //1
    cout << "Kelilingnya adalah: ";
    cout << menghitung_keliling(panjang, lebar) << endl
         << endl;

    //2
    tampilkan_keliling(panjang, lebar);

    cout << endl;

    //Call function animal program
    animalProgram();

    cin.get();
    return 0;
}

void animalProgram()
{
    string favAnimal, Pet;

    cout << "Favorite animal: ";
    cin >> favAnimal;

    cout << "So do you have " << favAnimal << " as your pet? (y/n) ? ";
    cin >> Pet;
    
    if (Pet == "y" || Pet == "y")
    {
        cout << "Wow " << favAnimal << " that's cool. \n";
    }
    else
    {
        cout << "Oh that's to bad. \n";
    }
}