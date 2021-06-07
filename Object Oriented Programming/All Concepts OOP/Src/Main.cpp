#include <iostream>
#include <string>
#include "Header.hpp"

using namespace std;

int main()
{
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
     House myHouse("Minimaslist", "Red, Blue, White", 300000);

     cout << "House Model: " << myHouse.HouseModel << endl;
     cout << "House Color: " << myHouse.ColorHouse << endl;
     cout << "House Price: " << myHouse.PRiceHouse << "$" << endl;

     cout << endl;

     //Third
     Billy myBio("Billy Franscois", "Programming Coding", 18);

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
     FlyingAirPlane Flyingairplane("Lion Air", 5);
     Flyingairplane.gEtInfo();

     cout << endl;

     //Polymorphism
     UnderWaterBirds underwaterBirds("Owl", 10);

     myLaptop.MoveLaptop();
     Flyingairplane.MoveAirplane();
     underwaterBirds.MoveBirds();
}