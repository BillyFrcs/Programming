#include <iostream>

//Template is use to change the data type
template <typename T>
void printTemplate(T num)
{
     std::cout << num << std::endl;
}

//Loops with template
template <typename L>
void loops(L num)
{
     for (num; num > 0; num--)
     {
          std::cout << num << " ";
     }
}

int main(int, char **)
{
     //Print the value template
     printTemplate(19);
     printTemplate("Billy");
     printTemplate(13.6);

     std::cout << std::endl;

     //Set the loops value here
     loops(5);

     return 0;
}