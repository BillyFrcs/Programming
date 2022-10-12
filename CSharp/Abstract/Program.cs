using System;

namespace Abstract
{
     // Abstract Book Class
     abstract class Book
     {
          // Private Fields
          private string _name;
          private string _author;
          private string _price;

          protected string Name
          {
               get { return this._name; }
          }
          protected string Author
          {
               get { return this._author; }
          }
          protected string Price
          {
               get { return this._price; }
          }

          // Parameterized Constructor
          public Book(string name, string author, string price)
          {
               this._name = name;
               this._author = author;
               this._price = price;
          }

          // Abstract Method
          public abstract string GetDetails();
     }

     // Class MyBook extending Book Class
     class MyBook : Book
     {
          // Parameterized Constructor
          public MyBook(string name, string author, string price)
            : base(name, author, price)
          { }

          // Overriding the GetDetails Abstract Method of the Base Class
          public override string GetDetails()
          {
               return Name + ", " + Author + ", " + Price;
          }

     }

     class Demo
     {

          public static void Main(string[] args)
          {
               Book myBook = new MyBook("Harry Potter", "J.k. Rowling", "100");

               Console.WriteLine(myBook.GetDetails());
          }
     }
}