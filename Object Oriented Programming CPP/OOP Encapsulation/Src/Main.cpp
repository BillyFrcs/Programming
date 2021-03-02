#include <iostream>
#include <list>

using namespace std;

//Class encapsulation
class popularGame
{
     //Use private to start with encapsulation
private:
     string nameGames;
     double totalPlayers;
     list<string> gamesFeatures;

public:
     //Create methods
     popularGame(string namegames, double totalplayers)
     {
          nameGames = namegames;
          totalPlayers = totalplayers;
     }

     void getPopularGame()
     {
          cout << "Name game: " << nameGames << endl;
          cout << "Total players: " << totalPlayers << endl;

          for (string gamesfeatures : gamesFeatures) //Add variable and attribute
          {
               cout << "Game features: " << gamesfeatures << endl;
          }
     }

     //Players increases => bertambah
     void playersGamesIncreases()
     {
          totalPlayers++;
     }

     //Players down => berkurang
     void playersGamesDown()
     {
          if (totalPlayers > 0) //Fix bug
               totalPlayers--;
     }

     //Create game features
     void GamesFeatures(string gamefeatures)
     {
          gamesFeatures.push_back(gamefeatures);
     }
};

int main()
{
     //Declare first method and object
     popularGame popularGameOne("Pubg", 150.456);
     popularGameOne.playersGamesIncreases(); //To increases more value for total players
     popularGameOne.playersGamesIncreases();
     popularGameOne.GamesFeatures("New map and character");
     popularGameOne.getPopularGame();

     cout << endl;

     //Declara second method and object
     popularGame popularGameTwo("Fortnite", 130.456);
     popularGameTwo.playersGamesDown(); //To down players 1 value fortotal players
     popularGameTwo.GamesFeatures("Update gun and remake vehicles");
     popularGameTwo.getPopularGame();

     return 0;
}