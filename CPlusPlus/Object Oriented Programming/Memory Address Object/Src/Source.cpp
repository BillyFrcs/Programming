#include <iostream>
#include <string>
#include <chrono>

using namespace std;

using Clock = std::chrono::high_resolution_clock;
using TimePoint = std::chrono::time_point<Clock>;

class Empty
{

     int Data()
     {
          return 1;
     }
};

class Content
{
public:
     int dataInt;       //4 byte
     double dataDouble; //8 byte
     string dataString; //24 byte

     void setDataint(int Data)
     {
          Content::dataInt = Data;
     }
};

class Students
{
public:
     string Name;

     Students(const char *Name)
     {
          Students::Name = Name;
     }
};

int main(int argc, char const *argv[])
{
     //Memory for an object
     //Check size of class Empty => Kosong
     cout << "Size class empty is: " << sizeof(Empty) << " byte " << endl
          << endl;

     //Check size of class Content (Heap => free memory)
     cout << "Size class content is: " << sizeof(Content) << " byte" << endl
          << endl;

     //Address stack memory
     string a;
     string b;

     Students Object1 = Students("Billy");          //stack
     Students *Object2 = new Students("Franscois"); //heap
     //Pointer is a variable

     string c;
     string d;

     cout << "Address: \n";
     cout << &a << endl;
     cout << &b << endl;

     cout << &Object1 << endl;
     cout << &Object2 << endl;

     cout << &c << endl;
     cout << &d << endl;

     cout << endl;

     //How fast to make object on each memory
     TimePoint *stackStart = new TimePoint();
     TimePoint *stackEnd = new TimePoint();

     TimePoint *heapStart = new TimePoint();
     TimePoint *heapEnd = new TimePoint();

     *stackStart = Clock::now();
     Students Object3 = Students("Sendy");
     *stackStart = Clock::now();

     *heapStart = Clock::now();
     Students *Object4 = new Students("Friscila");
     *heapEnd = Clock::now();

     //Time stack
     chrono::duration<double> Duration = *stackEnd - *stackStart;
     cout << "Time to make object in stack is " << Duration.count() << endl
          << endl;

     //Time heap
     Duration = *heapEnd - *heapStart;
     cout << "Time to make object in heap is " << Duration.count() << endl;

     cin.get();
     return 0;
}