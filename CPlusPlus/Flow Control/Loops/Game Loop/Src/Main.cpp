#include <iostream>
#include <string>

//Game loops input and output
void quitProgramLoop(bool quitGame)
{
     char myCharArr[10];

     myCharArr[0] = '0';

     while (quitGame == false)
     {
          std::cout << "Enter anything(q for quit): ";
          std::cin.width(sizeof(myCharArr));
          std::cin >> myCharArr;

          //Remove [0] to display all input
          std::cout << "You entered: " << myCharArr[0] << "\n";

          //Ignore character (buffer)
          //Only get the first letter
          std::cin.ignore(1000, '\n');

          //Get the same result when using this
          //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

          if (myCharArr[0] == 'q')
          {
               quitGame = true;
          }
     }
}

void quitGameLoop()
{
     std::string input;

     while (input[0] != 'q')
     {
          std::cout << "Enter: ";
          getline(std::cin, input);

          std::cout << "You entered: " << input << "\n";
          std::cout << "First letter: " << input[0] << "\n";

          std::cin.clear();
     }
}

int main()
{
     quitProgramLoop(false);

     std::cout << "\n";

     quitGameLoop();

     return 0;
}