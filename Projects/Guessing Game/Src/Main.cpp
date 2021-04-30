#include "GuesingGame.hpp"

Game::GuessingGame::GuessingGame()
{
     Guess[5] = 9;
}

void Game::GuessingGame::playGuessingGame()
{
     do
     {
          std::cout << "Guessing number from 1 - 10: ";
          std::cin >> Guess[5];

          if (Guess[5] == 9)
          {
               std::cout << "You got it, great :) \n";
               break;
          }

          else
          {
               std::cout << "You lose, try again ";
               while (!true)
               {
                    for (int i = 0; i < 5; i++)
                    {
                         std::cin >> Guess[i];
                    }

                    for (int i = 0; i < 5; i++)
                    {
                         std::cout << Guess[i];
                    }
               }
          }

     } while (Guess);
}

int main(int argc, char const *argv[])
{
     Game::GuessingGame *Game = new Game::GuessingGame();

     Game->playGuessingGame();

     return 0;
}