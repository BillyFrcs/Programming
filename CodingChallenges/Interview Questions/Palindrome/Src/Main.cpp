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
     //Add length() / 2 to optimized palindrome
     for (int i = 0; i < value.length() / 2; i++)
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

bool isPalindromeRecursive(std::string value, int i)
{
     if (i < value.length() / 2)
     {
          if (value[i] != value.length() - i - 1)
          {
               return false;
          }

          else
          {
               return isPalindromeRecursive(value, i++);
          }
     }
     return true;
}

void runPalindrome()
{
     isPalindromeWithTempVar("eye");
     isPalindromeWithTempVar("soup");

     /*std::string value = "aba";

     if (isPalindromeWithTempVar(value) == false)
     {
          std::cout << "It's palindrome \n \n";
     }

     else
     {
          std::cout << "It's not palindrome \n \n";
     }*/
}

void testPalindrome()
{
     std::string value;

     std::cout << "Enter number, letter or sentence: ";
     std::cin >> value;

     isPalindromeWithoutTempVar(value);
}

bool getPalindromeRecursive(std::string value)
{

     return isPalindromeRecursive(value, 0);
}

void displayPalindromeRecursive()
{
     getPalindromeRecursive("44");
     getPalindromeRecursive("86");
}

int main()
{
     runPalindrome();

     testPalindrome();

     displayPalindromeRecursive();

     return 0;
}