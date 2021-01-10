#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

//Enumerationate
enum EyeColor { Brown, Black, Blue, Gray, Other };

//Function declaration
float sum (float b, float c);

void IntroduceMe (string Name, int AGe = 9);

//Pointers
void celebrateBirthday (int* AGE);

//Classes in C++
//First class
class Car
{

public: //For add . to the variable

    string CarName;
    string CarColor;
    double CarPrice;
};

//Second class
class House 
{

public: 

    string HouseModel;
    string ColorHouse;
    double PRiceHouse;

    House(string Housemodel, string Colorhouse, double Pricehouse)
    { //Constructor
        HouseModel = Housemodel;
        ColorHouse = Colorhouse;
        PRiceHouse = Pricehouse;
    }
};

//Third class
class Billy
{

public:

    string NAme;
    string HObby;
    double AgE;

    Billy (string Name, string Hobby, double Age)
    {
        NAme = Name;
        HObby = Hobby;
        AgE = Age;
    }

    void GetInfo ()
    {//Method
        cout << "Name: " << NAme << endl;
        cout << "Hobby: " << HObby << endl;
        cout << "Age: " << AgE << endl;
    }
};

//Encapsulation
class Laptop
{

private:

    string BrandLaptop;
    double TotalLaptop;
    bool IsBroken;

public: 

    Laptop (string brandlaptop, double totallaptop) 
    {
        BrandLaptop = brandlaptop;
        TotalLaptop = totallaptop;
        IsBroken = false;
    }

    void getInfo() 
    {
        cout << "Laptop Name " << BrandLaptop << endl;
        cout << "Total Laptop " << TotalLaptop << endl;
    }

    void CrashLaptop()
    {
        cout << BrandLaptop << " Crashed " << endl;
        IsBroken = true;
    }

    void RepairLaptop()
    {
        cout << BrandLaptop << " Repaired " << endl;
        IsBroken = false;
    }

    void MoveLaptop()
    {
        if (IsBroken)

            cout << BrandLaptop << " Is Broken" << endl;

        else

            cout << BrandLaptop << " Is Run" << endl;
    }
};

//Inheritance
class airPlane
{

private:

    string airPlaneName;
    double NoFlight;
    bool isBroken;

public:

    airPlane (string airplanename, double noflight)
    {
        airPlaneName = airplanename;
        NoFlight = noflight;
        isBroken = false;
    }

    void gEtInfo()
    {
        cout << "Airplane Name: " << airPlaneName << endl;
        cout << "Total Airplane: " << NoFlight << endl;
    }

    void crashAirplane()
    {
        cout << airPlaneName << " Crashed" << endl;
        isBroken = true;
    }

    void RepairAirplane()
    {
        cout << airPlaneName << " Repaired" << endl;
        isBroken = false;
    }

    void MoveAirplane()
    {
        if (isBroken)

            cout << airPlaneName << " Is broken" << endl;

        else

            cout << airPlaneName << " Is flying" << endl;
    }
};

class FlyingAirPlane :public airPlane //Inheritance here
{

public:

    FlyingAirPlane (string airplanename, double noflight) :airPlane(airplanename, noflight)
    {

    }
};

//Polymorphism
class Birds
{

private:

    double TotalBirds;

protected:

    string NameBirds;
    bool IsDie;

public:

    Birds(string namebirds, double totalbirds)
    {
        NameBirds = namebirds;
        TotalBirds = totalbirds;
        IsDie = false;
    }

    void BirdsInfo()
    {
        cout << "Name birds " << NameBirds << endl;
        cout << "Total birds " << TotalBirds << endl;
    }

    void BirdsSick()
    {
        cout << NameBirds << " Sick" << endl;
        IsDie = true;
    }

    void HealBirds()
    {
        cout << NameBirds << " Die" << endl;
        IsDie = false;
    }

    void MoveBirds()
    {
        if (IsDie)

            cout << NameBirds << " Is sick" << endl;

        else

            cout << NameBirds << "Is good" << endl;
    }
};

class BirdsFlying :public Birds
{

public:

    BirdsFlying (string namebirds, double totalbirds) :Birds(namebirds, totalbirds)
    {

    }

    void MoveBirds()
    {
        if (IsDie)

            cout << NameBirds << " Is sick" << endl;

        else

            cout << NameBirds << " Is flying" << endl;
    }
};

class UnderWaterBirds :public Birds
{

public: 

    UnderWaterBirds (string namebirds, double totalbirds) :Birds(namebirds, totalbirds)
    {

    }

    void MoveBirds()
    {
        if (IsDie)

            cout << NameBirds << " Is sick" << endl;

        else

            cout << NameBirds << " Is sleep" << endl;
    }

};


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
    case Brown: cout << "50% of people have Brown color eyes"; break;

    case Blue: cout << "90% of people have Blue color eyes"; break;

    case Black: cout << "100% of people have Black color eyes"; break;

    case Gray: cout << "10% of people have Gray color eyes"; break;

    case Other: cout << "1% of people have some Other eye color"; break;

    default: cout << "Not valid eye color"; break;
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
    string Animals [5]= {"Dog", "Cat", "Chicken", "Bird", "Fish"};

    for (int a = 0; a < 5; a++)
    {
        cout << Animals [a] << endl;
    }

    cout << endl;



    //Float and sum
    cout << sum (5.5, 5) << endl;

    cout << sum (50, 50) << endl;

    cout << sum (10, 10) << endl;

    cout << endl;

    IntroduceMe ("Billy", 18);

    IntroduceMe ("Sendy");

    cout << endl;



    //Passing pointers to function
    int MyAge = 18;

    cout << "Before function AGE: " << MyAge << endl;

    celebrateBirthday (&MyAge);

    cout << "After function AGE: " << MyAge << endl;

    cout << endl;



    //Array
    string Colors[10] = { "Blue", "Red", "Yellow", "Orange", "Black" };
    cout << Colors[4] << endl;

    cout << endl;

    int Luckynumbers[5] = { 2, 5, 6, 8, 9 };

    cout << Luckynumbers << endl;
    cout << &Luckynumbers[2] << endl;
    cout << Luckynumbers[2] << endl;

    cout << endl;



    //Array pointer
    int* LuckyPointer = Luckynumbers;

    cout << "Pointing to " << LuckyPointer << " Value " << *LuckyPointer << endl;
    LuckyPointer++;

    cout << "Pointing to " << LuckyPointer << " Value " << *LuckyPointer << endl;

    cout << endl;



    //Class in C++
    //First
    Car myCar;

    myCar.CarName = "lamborgini";
    myCar.CarColor = "Black";
    myCar.CarPrice = 100000;

    cout << "Name: " << myCar.CarName << endl;
    cout << "Color: " << myCar.CarColor << endl;
    cout << "Price: " << myCar.CarPrice << "$" << endl;

    cout << endl;

    //Second 
    House myHouse ("Minimaslist", "Red, Blue, White", 300000);

    cout << "House Model: " << myHouse.HouseModel << endl;
    cout << "House Color: " << myHouse.ColorHouse << endl;
    cout << "House Price: " << myHouse.PRiceHouse << "$" << endl;

    cout << endl;

    //Third
    Billy myBio ("Billy Franscois", "Programming Coding", 18);
    
    myBio.GetInfo();

    cout << endl;



    //Encapsulation
    Laptop myLaptop("Asus", 1);

    myLaptop.MoveLaptop();
    myLaptop.CrashLaptop();
    myLaptop.MoveLaptop();
    myLaptop.RepairLaptop();
    myLaptop.MoveLaptop();

    cout << endl;



    //Inheritance
    FlyingAirPlane Flyingairplane ("Lion Air", 5);
    Flyingairplane.gEtInfo();

    cout << endl;



    //Polymorphism
    UnderWaterBirds underwaterBirds ("Owl", 10);

    myLaptop.MoveLaptop();
    Flyingairplane.MoveAirplane();
    underwaterBirds.MoveBirds();
    
    cout << endl;
    
    

    system("pause > 0");
    cin.get();
    return 0;
}

//Declare float and sum
float sum (float c, float b)
{
    return c + b;
}

void IntroduceMe (string Name, int AGe)
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