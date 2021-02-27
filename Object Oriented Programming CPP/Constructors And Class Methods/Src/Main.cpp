#include <iostream>
#include <list>

using namespace std;

class mySocialMedia
{
public:
     string nameSocialMedia;
     string userName;
     int userFollowers;
     list <string> titlePost; //list <datatype> variable
};

int main()
{
     //Called function and create object
     mySocialMedia socialMediaAcc;

     //Fill the object
     socialMediaAcc.nameSocialMedia = "Instagram";
     socialMediaAcc.userName = "billyfrcs";
     socialMediaAcc.userFollowers = 1182;
     socialMediaAcc.titlePost = {"Lol", "Sun"};

     //Print the class and object
     cout << "Social media that i use: " << socialMediaAcc.nameSocialMedia << endl;
     cout << "Username: " << socialMediaAcc.userName << endl;
     cout << "My followers: " << socialMediaAcc.userFollowers << endl;

     //Loops with list
     for (string postTitle : socialMediaAcc.titlePost)
     {
          cout << "Post title: " <<  postTitle << endl;
     }

     return 0;
}