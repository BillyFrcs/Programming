#include <bits/stdc++.h>

using namespace std;

class Book
{
protected:
     string title;
     string author;

public:
     Book(string t, string a)
     {
          title = t;
          author = a;
     }
     virtual void display() = 0;
};

// Write your MyBook class here
class MyBook : public Book
{
private:
     int _price;

public:
     //   Class Constructor
     //
     //   Parameters:
     //   title - The book's title.
     //   author - The book's author.
     //   price - The book's price.
     //
     // Write your constructor here
     MyBook(string title, string author, int price) : Book(title, author), _price(price)
     {
          this->title = title;
          this->author = author;
          this->_price = price;
     }
     //   Function Name: display
     //   Print the title, author, and price in the specified format.
     //
     // Write your method here
     void display()
     {
          cout << "Title: " << title << endl;
          cout << "Author: " << author << endl;
          cout << "Price: " << _price << endl;
     }
};
// End class

int main()
{
     /*Sample input
     The Alchemist
     Paulo Coelho
     248
     */
     string title, author;
     int price;
     getline(cin, title);
     getline(cin, author);
     cin >> price;
     MyBook novel(title, author, price);
     novel.display();

     return 0;
}
