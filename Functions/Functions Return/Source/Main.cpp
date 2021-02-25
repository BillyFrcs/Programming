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

//Prime number
bool primeNumber(int number)
{
     bool primeFlag = true; //Comment this when using return true the bottom

     for (int i = 2; i < number; i++)
     {
          if (number % i == 0)
          {
               primeFlag = false;
               break;
               //This can use return false;
          }
     }

     return primeFlag;
     //This can use return true;
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

     cout << endl;

     //Declared function prime number
     //Method 1
     int number;

     cout << "Enter number: ";
     cin >> number;

     bool primeFlag = primeNumber(number);

     if (primeFlag)
          cout << "Prime number" << endl;

     else
          cout << "Not prime number" << endl;

     cout << endl;

     //Method 2
     for (int i = 1; i <= 1000; i++)
     {
          bool isPrime = primeNumber(i);

          if (isPrime)
               cout << i << " is prime number \n";
     }

     return 0;
}
// Commit and push to Github
// git add .
// git commit -m "Massage"
// git push -u origin master