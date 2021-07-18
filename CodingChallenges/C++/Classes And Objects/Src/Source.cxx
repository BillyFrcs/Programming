#include <algorithm>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

// Write your Student class here
class Student
{
private:
     int exam[5];

     int score;

public:
     void input()
     {
          for (auto i = 0; i < 5; i++)
          {
               std::cin >> exam[i];
          }
     }

     int calculateTotalScore()
     {
          for (int i = 0; i < 5; i++)
          {
               score += exam[i];
          }
          return score;
     }
};

int main()
{
     /*Sample input
      3
      30 40 45 10 10
      40 40 40 10 10
      50 20 30 10 10
     */

     int n; // number of students
     cin >> n;
     Student *s = new Student[n]; // an array of n students

     for (int i = 0; i < n; i++)
     {
          s[i].input();
     }

     // calculate kristen's score
     int kristen_score = s[0].calculateTotalScore();

     // determine how many students scored higher than kristen
     int count = 0;
     for (int i = 1; i < n; i++)
     {
          int total = s[i].calculateTotalScore();
          if (total > kristen_score)
          {
               count++;
          }
     }

     // print result
     cout << count;

     return 0;
}
