#include <iostream>
#include <vector>

class Person
{
protected:
     std::string firstName;
     std::string lastName;
     int id;

public:
     Person(std::string firstName, std::string lastName, int identification)
     {
          this->firstName = firstName;
          this->lastName = lastName;
          this->id = identification;
     }

     void printPerson()
     {
          std::cout << "Name: " << lastName << ", " << firstName << "\nID: " << id << "\n";
     }
};

class Student : public Person
{
private:
     std::vector<int> testScores;
     int score = 0;

public:
     /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
     // Write your constructor here
     Student(std::string firstName, std::string lastName, int id, std::vector<int> scores)
         : Person(firstName, lastName, id), testScores(scores) {
              this->firstName = firstName;
              this->lastName = lastName;
              this->id = id;
              this->testScores = scores;
         }

       /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
     // Write your function here
     char calculate()
     {
          for (auto &i : testScores)
          {
               score += i;
          }

          score = (score / testScores.size());

          if (90 <= score && score <= 100)
          {
               return 'O';
          }
          else if (80 <= score && score < 90)
          {
               return 'E';
          }
          else if (70 <= score && score < 80)
          {
               return 'A';
          }
          else if (55 <= score && score < 70)
          {
               return 'P';
          }
          else if (40 <= score && score < 55)
          {
               return 'D';
          }
          else if (score < 40)
          {
               return 'T';
          }

          return 0;
     }
};

int main()
{
     /*Sample input
       Heraldo Memelli 8135627
       2
       100 80
     */

     std::string firstName;
     std::string lastName;
     int id;
     int numScores;
     std::cin >> firstName >> lastName >> id >> numScores;
     std::vector<int> scores;
     for (int i = 0; i < numScores; i++)
     {
          int tmpScore;
          std::cin >> tmpScore;
          scores.push_back(tmpScore);
     }
     Student *s = new Student(firstName, lastName, id, scores);
     s->printPerson();
     std::cout << "Grade: " << s->calculate() << "\n";
     return 0;
}