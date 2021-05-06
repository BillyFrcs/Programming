#include <bits/stdc++.h>

bool isPalindrome(std::string text)
{
     std::string reversedText = "";

     for (int i = text.size() - 1; i >= 0; i--)
     {
          reversedText += text[i];
     }

     if (reversedText == text)
     {
          return true;
     }

     return false;
}

void checkPalindrome()
{
     std::cout << isPalindrome("Billy") << std::endl;
     std::cout << isPalindrome("apa") << std::endl;
}

void IsPalindrome()
{
     int n, r, sum = 0, temp;

     std::cout << "Enter number: ";
     std::cin >> n;

     std::cout << n;

     temp = n;

     while (n > 0)
     {
          r = n % 10;
          sum = (sum * 10) + r;
          n = n / 10;
     }

     if (temp == sum)
          std::cout << " is a palindrome" << std::endl;

     else
          std::cout << " is not palindrome" << std::endl;
}

int main()
{
     checkPalindrome();

     std::cout << "\n";

     IsPalindrome();

     return 0;
}