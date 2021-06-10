#include <iostream>
#include <string>
#include <array>
#include <stdio.h>

using namespace std;

//Struct
struct Fruits
{
    string Color;
    float Weight;
    int Price;
    string Taste;
};

//Nesting struct
struct Actors
{
    string Name;
    int YearOfBird;
};

struct Movies
{
    string Title;
    string Genre;
    int Year;

    //Struct Actors below
    Actors Actor1;
    Actors Actor2;
};

//Unions
union Data
{
    int intValue;
    char charValue[5];
};

//Enum
enum Colors
{
    Blue,
    Black,
    White = 10
};

//Comma operator
void printResult(int val)
{
    cout << val << endl;
}

int main(int argc, char const *argv[])
{
    //Struct
    Fruits Banana, Grape;

    Banana.Color = "Yellow";
    Banana.Weight = 20.5f;
    Banana.Price = 20000;
    Banana.Taste = "Sweet";

    cout << "Banana" << endl;

    cout << "Color: " << Banana.Color << endl;
    cout << "Weight: " << Banana.Weight << endl;
    cout << "Price: " << Banana.Price << endl;
    cout << "Taste: " << Banana.Taste << endl;

    Grape.Color = "Purple";
    Grape.Weight = 10.5f;
    Grape.Price = 50000;
    Grape.Taste = "A little bit sweet";

    cout << "Grape" << endl;

    cout << "Color: " << Grape.Color << endl;
    cout << "Weight: " << Grape.Weight << endl;
    cout << "Price: " << Grape.Price << endl;
    cout << "Taste: " << Grape.Taste << endl;

    cout << endl;

    //Nesting struct
    Actors Cast1, Cast2;
    Movies Movie1, Movie2;

    //Make actor 1
    Cast1.Name = "Billy";
    Cast1.YearOfBird = 2002;

    //Make movie 1
    Movie1.Title = "Billy Ceo";
    Movie1.Genre = "Programmer";
    Movie1.Year = 2021;
    Movie1.Actor1 = Cast1;

    cout << "Title movie, " << Movie1.Title << endl;
    cout << "Actor name, " << Movie1.Actor1.Name << endl;
    cout << "Year release, " << Movie1.Year << endl
         << endl;

    //Make actor 2
    Cast2.Name = "Franscois";
    Cast2.YearOfBird = 2003;

    //Make movie 2
    Movie2.Title = "Franscois Programmer";
    Movie2.Genre = "Developer";
    Movie2.Year = 2020;
    Movie2.Actor2 = Cast2;

    cout << "Title movie: " << Movie2.Title << endl;
    cout << "Actor name: " << Movie2.Actor2.Name << endl;
    cout << "Year release: " << Movie2.Year << endl;

    cout << endl;

    //Unions
    Data dataUnion;

    dataUnion.intValue = 10;

    cout << "Data intValue: " << sizeof(dataUnion.intValue) << " Value: " << dataUnion.intValue << endl;

    dataUnion.charValue[0] = 'B';
    dataUnion.charValue[1] = 'i';
    dataUnion.charValue[2] = 'l';
    dataUnion.charValue[3] = 'l';
    dataUnion.charValue[4] = 'y';

    cout << "Data charValue: " << dataUnion.charValue << endl;

    cout << endl;

    //Enum
    Colors Tshirt, Pants;

    Tshirt = Black;

    if (Tshirt == Black)

        cout << "Color Tshirt black ";

    cout << Tshirt << endl;

    Pants = White;

    cout << "Color pants White " << Pants << endl;

    cout << endl;

    //Ternary operator = ?
    int a, b, c, d;
    string Result1, Result2, Result3, Result4, Output1, Output2;

    Result1 = "Billy";
    Result2 = "Franscois";

    a = 5;
    //b = 9;

    cout << "Enter number: ";
    cin >> b;

    Output1 = (a < b) ? Result1 : Result2;

    cout << Output1 << endl;

    cout << endl;

    Result3 = "Programmer / Developer";
    Result4 = "Ceo";

    c = 5;

    cout << "Enter number: ";
    cin >> d;

    if (c < d)
        Output2 = Result3;

    else
        Output2 = Result4;

    cout << Output2 << endl;

    cout << endl;

    //Comma operator
    //Method 1
    int e, f, g;

    g = (e = 5, f = 5);
    g = (e + f);

    cout << g << endl
         << endl;

    //Method 2
    int h, i, j;
    j = (h = 10, i = 10, (h * i));

    cout << j << endl
         << endl;

    //Method 3
    int k, l, m;
    m = (k = 4, cout << k << endl, l = 4, cout << l << endl, (k / l));

    cout << m << endl
         << endl;

    //Method 4
    int o, p, q;
    q = (o = 6, printResult(o), p = 9, printResult(p), (o + p));

    cout << q << endl;

    // For loops statements
    // Increment
    int x, y;
    for (y = 0; y < 10; y++) //Conditions
    { 
        //Statements
        cout << "Billy \n";
    }

    printf("");

    //Decrement
    for (x = 20; x > 0; x--) //Conditions
    {
        //Statements
        cout << "Franscois \n";
    }

    cin.get();
    return 0;
}