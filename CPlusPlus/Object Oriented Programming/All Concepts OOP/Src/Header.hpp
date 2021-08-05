#include <iostream>
#include <string>

using namespace std;

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

     Billy(string Name, string Hobby, double Age)
     {
          NAme = Name;
          HObby = Hobby;
          AgE = Age;
     }

     void GetInfo()
     { //Method
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
     Laptop(string brandlaptop, double totallaptop)
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
     airPlane(string airplanename, double noflight)
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

class FlyingAirPlane : public airPlane //Inheritance here
{

public:
     FlyingAirPlane(string airplanename, double noflight) : airPlane(airplanename, noflight)
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

class BirdsFlying : public Birds
{

public:
     BirdsFlying(string namebirds, double totalbirds) : Birds(namebirds, totalbirds)
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

class UnderWaterBirds : public Birds
{

public:
     UnderWaterBirds(string namebirds, double totalbirds) : Birds(namebirds, totalbirds)
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
