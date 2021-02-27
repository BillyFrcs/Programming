#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool userLoggedIn()
{
     string username, password, un, pw;

     //Input from user
     cout << "Username: ";
     cin >> username;

     cout << "Password: ";
     cin >> password;

     //File user
     ifstream read("data\\" + username + ".txt");
     getline(read, un);
     getline(read, pw);

     //Comparison
     if (un == username && pw == password)
          return true;

     else
          return false;
}

int main()
{
     //Input option from user
     int menuOption;

     cout << "1. Register \n2. Login \nChoose option: ";
     cin >> menuOption;

     if (menuOption == 1)
     {
          string username, password;

          cout << "Select username: ";
          cin >> username;

          cout << "Select password: ";
          cin >> password;

          //File user
          ofstream file;

          file.open("data\\" + username + ".txt");
          file << username << endl
               << password;
          file.close();

          main();
     }

     else if (menuOption == 2)
     {
          bool status = userLoggedIn();

          if (!status)
          {
               cout << "Login failed! \n";
               return 0;
          }
          else
          {
               cout << "Successfully logged in \n";
               return 1;
          }
     }
}