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

int main()
{
     checkPalindrome();

     return 0;
}