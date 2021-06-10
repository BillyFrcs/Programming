#include <iostream>
#include <string>

class Player
{
protected:
     std::string name, role;
     int Exp;

public:
     Player()
     {
          name = "Billy";
          Exp = 0;
          role = "Assasin";
     }

     virtual void getPlayer() = 0;
};

class Name : Player
{
public:
     void getPlayer()
     {
          std::cout << "Name : " << name << "\n";
     }
};

class Role : Player
{
public:
     void getPlayer()
     {
          std::cout << "Role : " << role << "\n";
     }
};

class EXP : Player
{
public:
     void getPlayer()
     {
          int increaseEXP = 0;

          for (increaseEXP; increaseEXP <= 5; increaseEXP += 0)
          {
               increaseEXP = (Exp + 20);
          }

          std::cout << "First EXP: " << Exp << "\n";
          std::cout << "Increase Exp : " << increaseEXP << "\n";
     }
};

int main(int argc, char const *argv[])
{
     //Print name player
     Name namePlayer;
     Name *ptrPlayer = &namePlayer;
     ptrPlayer->getPlayer();

     //Print Role player
     Role *rolePlayer = new Role();
     rolePlayer->getPlayer();

     //Print EXP player
     EXP expPlayer;
     EXP *ptrExpPlayer = &expPlayer;
     ptrExpPlayer->getPlayer();

     return 0;
}