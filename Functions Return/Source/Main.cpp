#include <iostream>

using namespace std;

//Functions return string
string needsWater(int days, bool isSucculent)
{
     if (isSucculent == false && days > 3)
     {
          return "Time to water the plant";
     }
     else if (isSucculent == true && days < 12)
     {
          return "Don't water the plant!";
     }
     else if (isSucculent == true && days > 13)
     {
          return "Go ahead and give the plant a little water.";
     }
     else
     {
          return "Don't water the plant!";
     }
}

bool isPalindrome(string text)
{

     string reversed_text = "";

     for (int i = text.size() - 1; i >= 0; i--)
     {
          reversed_text += text[i];
     }

     if (reversed_text == text)
     {
          return true;
     }

     return false;
}

//Return data type int
int multiplyInt(int a, int b)
{
     return a * b;
}

int main()
{
     cout << needsWater(20, true) << endl;

     cout << endl;

     cout << isPalindrome("Billy") << endl;
     cout << isPalindrome("Franscois") << endl;

     cout << endl;

     int a = 5;
     int b = 5;
     int x;

     x = a * b;

     cout << "Result " << x << endl;

     return 0;
}

// Commit and push to Github
// git add .
// git commit -m "Massage"
// git push -u origin master