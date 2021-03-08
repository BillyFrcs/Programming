#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//CRUD class
class crud
{

public:
     string userName, userHobby, userJob, userAge;

     //User choose option
     void getOptions()
     {
          system("cls");

          int inputUser;

          cout << "===================== \n";
          cout << "CRUD Project by Billy \n";
          cout << "===================== \n";
          cout << "1. Add data \n";
          cout << "2. Show data \n";
          cout << "3. Update data \n";
          cout << "4. Delete data \n";
          cout << "5. Exit! \n";
          cout << "Choose number [1 - 5]: ";

          cin >> inputUser;
     }

     //Continue crud program
     void continueCrud()
     {
          char crudAgain;

          cout << "Continue again? [Y/N]: ";
          cin >> crudAgain;

          while (crudAgain)
          {

               if ((crudAgain == 'Y') || (crudAgain == 'y'))

                    return getOptions();

               else if ((crudAgain == 'N') || (crudAgain == 'n'))

                    break;

               else

                    cout << "Invalid! \n";
          }
     }

     //User add data
     void addDataUsers()
     {
          //Input add data from user
          cout << "Name: ";
          cin.ignore();
          getline(cin, userName);

          cout << "Hobby: ";
          cin.ignore();
          getline(cin, userHobby);

          cout << "Job: ";
          cin.ignore();
          getline(cin, userJob);

          cout << "Age: ";
          cin.ignore();
          getline(cin, userAge);

          //File and data users
          ofstream fileUsers;

          fileUsers.open(userName + " Data.txt");
          fileUsers << "Username: " << userName << endl
                    << "User hobby: " << userHobby << endl
                    << "User job: " << userJob << endl
                    << "User age: " << userAge << endl;

          fileUsers.close();
     }
};

int main(int argc, char const *argv[])
{
     //Called class and methods crud
     crud crudAppUsers;

     crudAppUsers.getOptions();
     crudAppUsers.addDataUsers();
     crudAppUsers.continueCrud();

     return 0;
}