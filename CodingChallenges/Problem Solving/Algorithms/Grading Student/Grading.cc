#include <bits/stdc++.h>

int gradingStudent(int grades[], int n)
{
     int student = 0;
     for (auto i = 0; i < n; i++)
     {
          if (grades[i] % 5 > 2 && grades[i] >= 38)
          {
               grades[i] += (5 - grades[i] % 5);
          }
     }
     return student;
}

int main()
{
     /*Sample input
       4
       73
       67
       38
       33
     */

     int n;

     std::cin >> n;

     int grades[n];

     for (int i = 0; i < n; i++)
     {
          std::cin >> grades[i];
     }

     gradingStudent(grades, n);

     for (int i = 0; i < n; i++)
     {
          std::cout << grades[i] << std::endl;
     }

     return 0;
}