#pragma once

#include <iostream>

namespace Game
{
     class GuessingGame
     {
     private:
          int Guess[5];

     public:
          GuessingGame();

          virtual void playGuessingGame();
     };
}