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

template <typename T>
T counter(T a, T b)
{
     T result = (a * b);

     return result;
}

void printCounter()
{
     int result = counter<int>(3, 4);
     float show = counter<float>(4.5f, 7.6f);

     std::cout << "Result = " << result << "\n";
     std::cout << "Show value = " << show << "\n";
}

int main()
{
     //Print the value template
     printTemplate(19);
     printTemplate("Billy");
     printTemplate(13.6);

     std::cout << std::endl;

     //Set the loops value here
     loops(5);

     std::cout << std::endl;

     printCounter();

     return 0;
}