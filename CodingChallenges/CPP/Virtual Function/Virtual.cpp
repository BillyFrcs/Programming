#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

class Person
{
protected:
     string name;
     int age;

public:
     virtual void getdata()
     {
          cin >> name >> age;
     }

     virtual void putdata()
     {
          cout << name << " " << age << endl;
     }
};

class Professor : public Person
{
public:
     string publications;
     int cur_id;
     static int id;

     Professor()
     {
          this->cur_id = ++id;
     }

     virtual void getdata()
     {
          cin >> name >> age >> publications;
     }

     virtual void putdata()
     {
          cout << name << " " << age << " " << publications << " " << this->cur_id << endl;
     }
};

int Professor::id = 0;

class Student : public Person
{
public:
     vector<int> marks;
     int cur_id;
     static int id;

     Student()
     {
          this->cur_id = ++id;
     }

     virtual void getdata()
     {
          cin >> name >> age;
          for (auto i = 0; i < 6; i++)
          {
               int value;
               cin >> value;

               marks.push_back(value);
          }
     }

     virtual void putdata()
     {
          int sumMarks = 0;

          for (auto &i : marks)
          {
               sumMarks += i;
          }
          cout << name << " " << age << " " << sumMarks << " " << this->cur_id << endl;
     }
};

int Student::id = 0;

int main()
{
     /*Sample input
       4
       1
       Walter 56 99
       2
       Jesse 18 50 48 97 76 34 98
       2
       Pinkman 22 10 12 0 18 45 50
       1
       White 58 87
     */

     int n, val;
     cin >> n; //The number of objects that is going to be created.
     Person *per[n];

     for (int i = 0; i < n; i++)
     {

          cin >> val;
          if (val == 1)
          {
               // If val is 1 current object is of type Professor
               per[i] = new Professor;
          }
          else
               per[i] = new Student; // Else the current object is of type Student

          per[i]->getdata(); // Get the data from the user.
     }

     for (int i = 0; i < n; i++)
          per[i]->putdata(); // Print the required output for each object.

     return 0;
}
