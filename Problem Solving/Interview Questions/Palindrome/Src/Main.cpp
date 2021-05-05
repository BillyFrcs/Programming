#include <bits/stdc++.h>

//Is palindrome with temporary variable
bool isPalindromeWithTempVar(std::string value)
{
     std::string temp = "";

     for (int i = value.length() - 1; i >= 0; i--)
     {
          temp = (temp + value[i]);
     }

     std::cout << temp << "\n";

     return NULL;
}

//Is palindrome without temporary variable
bool isPalindromeWithoutTempVar(std::string value)
{
     for (int i = 0; i < value.length(); i++)
     {
          int firstIndex = i, lastIndex = (value.length() - i - 1);

          if ((value[firstIndex]) != (value[lastIndex]))
          {
               std::cout << "It is Not palindrome \n";

               return false;
          }

          else
          {
               std::cout << "It is palindrome \n";

               return true;
          }
     }

     return NULL;
}

void runPalindrome()
{
     std::string input = "aba";

     if (isPalindromeWithTempVar(input) == false)
     {
          std::cout << "It's palindrome \n \n";
     }

     else
     {
          std::cout << "It's not palindrome \n \n";
     }
}

void testPalindrome()
{
     std::string input;

     std::cout << "Enter number, letter or sentence: ";
     std::cin >> input;

     isPalindromeWithoutTempVar(input);
}

int main()
{
     runPalindrome();

     testPalindrome();

     return 0;
}