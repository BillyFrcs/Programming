#include <iostream>
#include <string>

using namespace std;

class Players
{
public:
     string Name;

     //Contructor
     Players(const char *Name)
     {
          Players::Name = Name; //Namespace
          cout << "Player " << Players::Name << " already make" << endl;
     }

     //Destructor
     ~Players()
     {
          cout << "Player " << Players::Name << " deleted" << endl;
     }
};

void makeStackPlayers()
{
     Players stackPlayers = Players("stack");
}

void makeHeapPlayers()
{
     Players *heapPlayers = new Players("heap");
     delete heapPlayers;
}

void makePlayerStackPointer(Players *&playerPointer)
{
     Players stackPlayers = Players("stack");
     playerPointer = &stackPlayers;
}

void makePlayerHeapPointer(Players *&playerPointer)
{
     Players *heapPlayers = new Players("heap");
     playerPointer = heapPlayers;
     //delete heapPlayers;
}

//Return stack players
Players creatReturnStackPlayers()
{
     Players stackPlayers = Players("stack");
     return stackPlayers;
}

//Return heap players
Players *createReturnHeapPlayers()
{
     Players *heapPlayers = new Players("heap"); //New must deleted
     return heapPlayers;
}

int main(int argc, char const *argv[])
{
     //Stack with function
     makeStackPlayers();

     //Heap with function
     makeHeapPlayers();

     /*{
          Players stackPlayers = Players("Stack players"); //Stack
     }*/

     /*{
          Players *heapPlayers = new Players("Heap"); //Heap
          delete heapPlayers;
     }*/

     //Simulation leak memory
     cout << "\nMemory Leak: " << endl;
     Players *playerPointer1;

     makePlayerStackPointer(playerPointer1);

     //cout << (*playerPointer1).Name << endl; //Nothing happened

     Players *playerPointer2;

     makePlayerHeapPointer(playerPointer2);

     cout << playerPointer2->Name << endl; //Leak memory,can show the output

     delete playerPointer2;

     //playerPointer2 -> Name = ("Random"); //Memory free

     cout << "\nReturn Object: " << endl;
     Players playerStackReturn = creatReturnStackPlayers();
     cout << playerStackReturn.Name << endl;

     Players *playerHeapReturn = createReturnHeapPlayers();
     cout << playerHeapReturn->Name << endl;
     delete playerHeapReturn;

     return 0;
}