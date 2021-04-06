#include <iostream>
#include <string>

class Player
{
protected:
     std::string name;
     size_t Exp;
     std::string role;

     Player()
     {
          name = "Billy";
          Exp = 100;
          role = "Assasin";
     }
};

class Name : Player
{
public:
     void getPlayer() const
     {
          std::cout << name << std::endl;
     }
};

class EXP : Player
{
public:
     void getPlayer()
     {
          std::cout << Exp << std::endl;
     }
};

class Role : Player
{
public:
     void getPlayer() const
     {
          std::cout << role << std::endl;
     }
};

int main(int argc, char const *argv[])
{
     //Print name player
     Name namePlayer;
     Name *ptrPlayer = &namePlayer;
     ptrPlayer->getPlayer();

     //Print EXP player
     EXP expPlayer;
     EXP *ptrExpPlayer = &expPlayer;
     ptrExpPlayer->getPlayer();

     //Print Role player
     Role rolePlayer;
     Role *ptrRolePlayer = &rolePlayer;
     ptrRolePlayer->getPlayer();

     return 0;
}