#include <iostream>
#include <string>

using namespace std;

//Declaration single linked list
struct Books
{
     //Contens / members
     string titleBook, writerName;
     int yearRelease;

     Books *Next;
};

Books *Head, *Tail, *Cur, *newNode, *deleteNode, *nodeBefore;

//Function create single linked list
void createSingleLinkedList(string funcTitleBook, string funcWriterName, int funcYearRelease)
{
     Head = new Books();

     Head->titleBook = funcTitleBook;
     Head->writerName = funcWriterName;
     Head->yearRelease = funcYearRelease;
     Head->Next = NULL;

     Tail = Head;
}

//Print count single linked list
int countSingleLinkedList()
{
     Cur = Head;
     int Count = 0;

     while (Cur != NULL)
     {
          Count++;
          Cur = Cur->Next;
     }

     return Count;
}

//Add first single linked list
void addFirstSingleLinkedList(string funcTitleBook, string funcWriterName, int funcYearRelease)
{
     newNode = new Books();

     newNode->titleBook = funcTitleBook;
     newNode->writerName = funcWriterName;
     newNode->yearRelease = funcYearRelease;
     newNode->Next = Head;

     Head = newNode;
}

//Add middle single linked list
void addMiddleSingleLinkedList(string funcTitleBook, string funcWriterName, int funcYearRelease, int Position)
{
     if (Position < 1 || Position > countSingleLinkedList())
     {
          cout << "Position out of range" << endl; //Posisi di luar jangkauan
     }
     else if (Position == 1)
     {
          cout << "It's not middle position" << endl;
     }
     else
     {
          newNode = new Books();

          newNode->titleBook = funcTitleBook;
          newNode->writerName = funcWriterName;
          newNode->yearRelease = funcYearRelease;

          //Transversing
          Cur = Head;
          int Number = 1;

          while (Number < Position - 1)
          {
               Cur = Cur->Next;
               Number++;
          }

          newNode->Next = Cur->Next;

          Cur->Next = newNode;
     }
}

//Add last single linked list
void addLastSingleLinkedList(string funcTitleBook, string funcWriterName, int funcYearRelease)
{
     newNode = new Books();

     newNode->titleBook = funcTitleBook;
     newNode->writerName = funcWriterName;
     newNode->yearRelease = funcYearRelease;
     newNode->Next = NULL;

     Tail->Next = newNode;
     Tail = newNode;
}

//Remove middle single linked list
void deleteMiddleSingleLinkedList(int Position)
{
     if (Position < 1 || Position > countSingleLinkedList())
     {
          cout << "Position out of range" << endl; //Posisi di luar jangkauan
     }
     else if (Position == 1)
     {
          cout << "It's not middle position" << endl;
     }
     else
     {

          int Number = 1;
          Cur = Head;

          while (Number <= Position)
          {
               if (Number == Position - 1)
               {
                    nodeBefore = Cur;
               }

               if (Number == Position)
               {
                    deleteNode = Cur;
               }

               Cur = Cur->Next;
               Number++;
          }
          nodeBefore->Next = Cur;

          delete deleteNode;
     }
}

//Remove or delete node single linked list
void deleteFirstSingleLinkedList()
{
     deleteNode = Head;
     Head = Head->Next;
     delete deleteNode;
}

//Delete the last node single linked list
void deleteLastSingleLinkedList()
{
     deleteNode = Tail;
     Cur = Head;
     while (Cur->Next != Tail)
     {
          Cur = Cur->Next;
     }

     Tail = Cur;
     Tail->Next = NULL;

     delete deleteNode;
}

//Change first node single linked list
void changeFirstSingleLinkedList(string funcTitleBook, string functWriterName, int functYearRelease)
{
     Head->titleBook = funcTitleBook;
     Head->writerName = functWriterName;
     Head->yearRelease = functYearRelease;
}

//Change middle single linked list
void changeMiddleSingleLinkedList(string funcTitleBook, string funcWriterName, int funcYearRelease, int Position)
{
     if (Position < 1 || Position > countSingleLinkedList())
     {
          cout << "Position out of range" << endl;
     }
     else if (Position == 1 || Position == countSingleLinkedList())
     {
          cout << "It's not middle position" << endl;
     }

     else
     {
          Cur = Head;
          int Number = 1;

          while (Number < Position)
          {
               Cur = Cur->Next;
               Number++;
          }

          Cur->titleBook = funcTitleBook;
          Cur->writerName = funcWriterName;
          Cur->yearRelease = funcYearRelease;
     }
}

//Change the last node single linked list
void changeLastSingleLinkedList(string funcTitleBook, string functWriterName, int functYearRelease)
{
     Tail->titleBook = funcTitleBook;
     Tail->writerName = functWriterName;
     Tail->yearRelease = functYearRelease;
}

//Function print single linked list
void printSingleLinkedList()
{
     cout << "Count data single linked list: " << countSingleLinkedList() << endl;
     Cur = Head;
     while (Cur != NULL)
     {
          cout << "Title book: " << Cur->titleBook << endl;
          cout << "Writer name: " << Cur->writerName << endl;
          cout << "Year release: " << Cur->yearRelease << endl;

          cout << endl;

          Cur = Cur->Next;
     }
}

int main()
{
     /*/Initialisation single lisked list in main (1)
     Books *Node1, *Node2, *Node3;

     //Memory allocation
     Node1 = new Books();

     Node2 = new Books();

     Node3 = new Books();

     //Fill Node1
     Node1->titleBook = "C++ Programming";
     Node1->writerName = "Billy";
     Node1->yearRelease = 19082021;
     Node1->Next = Node2;

     //Fill Node2
     Node2->titleBook = "Game programming c++";
     Node2->writerName = "Franscois";
     Node2->yearRelease = 01072021;
     Node2->Next = Node3;

     //Fill Node3
     Node3->titleBook = "Application developer";
     Node3->writerName = "Kolibonso";
     Node3->yearRelease = 12092031;
     Node3->Next = NULL;

     //Print linked list
     Books *Current;

     Current = Node1;

     while (Current != NULL)
     {
          cout << "Title book: " << Current->titleBook << endl;
          cout << "Writer name: " << Current->writerName << endl;
          cout << "Year release: " << Current->yearRelease << endl;

          cout << endl;

          Current = Current->Next;
     }*/

     //Create and print single linked list with void function (2)
     createSingleLinkedList("Flutter beginner", "Sendy", 24072011);
     printSingleLinkedList();

     cout << endl;

     addFirstSingleLinkedList("Dart google", "Friscilla", 125176);
     printSingleLinkedList();

     cout << endl;

     addMiddleSingleLinkedList("Dart compiler", "Oppie", 2017, 4);
     printSingleLinkedList();

     cout << endl;

     addLastSingleLinkedList("Python tutorial", "Eggy", 2021);
     printSingleLinkedList();

     cout << endl;

     /*/Delete node single linked list
     deleteFirstSingleLinkedList();
     printSingleLinkedList();

     addLastSingleLinkedList("Web application", "Angela", 2018);
     printSingleLinkedList();

     deleteLastSingleLinkedList();
     printSingleLinkedList();*/

     deleteMiddleSingleLinkedList(3);

     cout << endl;

     /*/Change the first and last node single linked list;
     changeFirstSingleLinkedList("Android app", "Buddie", 2078);
     printSingleLinkedList();

     changeLastSingleLinkedList("Build ios app", "Andy", 2050);
     printSingleLinkedList();*/

     return 0;
}