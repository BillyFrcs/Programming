#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

//Enumerationate
enum EyeColor
{
    Brown,
    Black,
    Blue,
    Gray,
    Other
};

//Function declaration
float sum(float b, float c);

void IntroduceMe(string Name, int AGe = 9);

//Pointers
void celebrateBirthday(int *AGE);

int main()
{
    //Primitive data types and variables

    //Data type bool => boolean with "if, else if and else" statements.
    bool isTodaysunny = true;
    bool isTodayweekend = true;

    // 1
    if (isTodaysunny && isTodayweekend)
    {
        cout << "Go to the park" << endl;
    }

    else if (isTodayweekend && isTodaysunny)
    {
        cout << "Go to the park, but take an umbrella" << endl;
    }

    else
    {
        cout << "Go to collage" << endl;
    }

    cout << endl;

    // 2
    if (isTodayweekend)
    {
        if (isTodaysunny)
            cout << "Go to the park" << endl;

        else
            cout << "Go to the park, but take an umbrella" << endl;
    }

    else
        cout << "Go to collage" << endl;

    //isTodaysunny ? cout << "Go to the park": cout << "Take an umbrella" << endl;

    cout << endl;

    //Data type "switch case".
    EyeColor eyeColor = Black;

    switch (eyeColor)
    {
    case Brown:
        cout << "50% of people have Brown color eyes";
        break;

    case Blue:
        cout << "90% of people have Blue color eyes";
        break;

    case Black:
        cout << "100% of people have Black color eyes";
        break;

    case Gray:
        cout << "10% of people have Gray color eyes";
        break;

    case Other:
        cout << "1% of people have some Other eye color";
        break;

    default:
        cout << "Not valid eye color";
        break;
    }

    cout << endl;

    // Infinite loops, While and Do-While loops
    cout << "While \n";

    int Counter = 1;

    while (Counter <= 10)
    {
        cout << Counter << endl;
        Counter++;
    }

    cout << endl;

    cout << "DO While \n";

    int doWhileCounter = 1;

    do
    {
        cout << doWhileCounter << endl;
        doWhileCounter++;
    }

    while (doWhileCounter <= 10);

    cout << endl;

    //Data type "string with array loop"
    string Animals[5] = {"Dog", "Cat", "Chicken", "Bird", "Fish"};

    for (int a = 0; a < 5; a++)
    {
        cout << Animals[a] << endl;
    }

    cout << endl;

    //Float and sum
    cout << sum(5.5, 5) << endl;

    cout << sum(50, 50) << endl;

    cout << sum(10, 10) << endl;

    cout << endl;

    IntroduceMe("Billy", 18);

    IntroduceMe("Sendy");

    cout << endl;

    //Passing pointers to function
    int MyAge = 18;

    cout << "Before function AGE: " << MyAge << endl;

    celebrateBirthday(&MyAge);

    cout << "After function AGE: " << MyAge << endl;

    cout << endl;

    //Array
    string Colors[10] = {"Blue", "Red", "Yellow", "Orange", "Black"};
    cout << Colors[4] << endl;

    cout << endl;

    int Luckynumbers[5] = {2, 5, 6, 8, 9};

    cout << Luckynumbers << endl;
    cout << &Luckynumbers[2] << endl;
    cout << Luckynumbers[2] << endl;

    cout << endl;

    //Array pointer
    int *LuckyPointer = Luckynumbers;

    cout << "Pointing to " << LuckyPointer << " Value " << *LuckyPointer << endl;
    LuckyPointer++;

    cout << "Pointing to " << LuckyPointer << " Value " << *LuckyPointer << endl;

    cin.get();
    return 0;
}

//Declare float and sum
float sum(float c, float b)
{
    return c + b;
}

void IntroduceMe(string Name, int AGe)
{
    cout << "My name is " << Name << endl;
    cout << "I'm " << AGe << " Years Old" << endl;
}

//Pointer
void celebrateBirthday(int *AGE)
{
    (*AGE)++;
    cout << "Yeay, celebrate " << *AGE << " Birthday" << endl;
}