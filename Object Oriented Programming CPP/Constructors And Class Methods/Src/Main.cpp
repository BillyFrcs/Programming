#include <iostream>
#include <list>

using namespace std;

//Concept class
class mySocialMedia
{
public:
     string nameSocialMedia;
     string userName;
     int userFollowers;
     list<string> titlePost; //list <datatype> variable
};

//Concept class and constructor
class mySocialMedia2
{
public:
     string nameSocialMedia;
     string userName;
     int userFollowers;
     list<string> titlePost; //list <datatype> variable

     //Constructor
     mySocialMedia2(string nameSosmed, string usernameSosmed, int userFollowerSosmed)
     {
          nameSocialMedia = nameSosmed;
          userName = usernameSosmed;
          userFollowers = userFollowerSosmed;
     }

     //Show method
     void getInfoSocialMedia2()
     {
          cout << "Social media name: " << nameSocialMedia << endl;
          cout << "Username: " << userName << endl;
          cout << "My followers: " << userFollowers << endl;

          for (string postTitle : titlePost)
          {
               cout << "Post title: " << postTitle << endl;
          }
     }
};

int main()
{
     //Called function and create object
     mySocialMedia socialMediaAcc;

     //Fill the object 1
     socialMediaAcc.nameSocialMedia = "Instagram";
     socialMediaAcc.userName = "billyfrcs";
     socialMediaAcc.userFollowers = 1182;
     socialMediaAcc.titlePost = {"Lol", "Sun"};

     //Print the class and object
     cout << "Social media name: " << socialMediaAcc.nameSocialMedia << endl;
     cout << "Username: " << socialMediaAcc.userName << endl;
     cout << "My followers: " << socialMediaAcc.userFollowers << endl;

     //Loops with list
     for (string postTitle : socialMediaAcc.titlePost)
     {
          cout << "Post title: " << postTitle << endl;
     }

     cout << endl;

     //Object 2 with constructor
     mySocialMedia2 socialMediaAccTwo("Facebook", "Billy Franscois", 1000);
     socialMediaAccTwo.titlePost.push_back("Unknown");
     socialMediaAccTwo.titlePost.push_back("Funny");

     //Object 3
     mySocialMedia2 socialMediaAccThree("Twitter", "billyfrcs", 50);
     socialMediaAccThree.titlePost.push_back("Dunno");

     //Show method object 2 and 3
     socialMediaAccTwo.getInfoSocialMedia2();

     cout << endl;

     socialMediaAccThree.getInfoSocialMedia2();

     return 0;
}