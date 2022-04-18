using System;

namespace Polymorphism
{
     public class Account
     {
          private double _balance;

          public Account(double balance)
          {
               Balance = balance;
          }

          protected double Balance
          {
               get
               {
                    return _balance;
               }
               set
               {
                    if (value >= 0)
                    {
                         _balance = value;
                    }
               }
          }

          public virtual bool Deposit(double amount)
          {
               return false;
          }

          public virtual bool Withdraw(double amount)
          {
               return false;
          }

          public virtual void PrintBalance()
          {
               Console.WriteLine("The balance is: {0}", Balance);
          }
     }

     public class SavingsAccount : Account
     {
          private double _interestRate = 0.8d;

          public SavingsAccount(double balance) : base(balance)
          {
               Balance = balance;
          }

          public override bool Deposit(double amount)
          {
               if (amount > 0)
               {
                    Balance += amount + (amount * _interestRate);

                    return true;
               }

               return false;
          }

          public override bool Withdraw(double amount)
          {
               if (amount > 0 && amount <= Balance)
               {
                    Balance -= amount + (amount * _interestRate);

                    return true;
               }

               return false;
          }

          public override void PrintBalance()
          {
               Console.WriteLine($"The saving account balance is {base.Balance}");
          }
     }

     public class CheckingAccount : Account
     {
          public CheckingAccount(double balance) : base(balance)
          {
               Balance = balance;
          }

          public override bool Deposit(double amount)
          {
               if (amount > 0)
               {
                    Balance += amount;

                    return true;
               }

               return false;
          }

          public override bool Withdraw(double amount)
          {
               if (amount > 0 && amount <= Balance)
               {
                    Balance -= amount;

                    return true;
               }

               return false;
          }

          public override void PrintBalance()
          {
               Console.WriteLine($"The checking account balance is {base.Balance}");
          }
     }

     public class Demo
     {
          public static void Main(string[] args)
          {
               //Uncomment the below block to test your code
               Account SAccount = new SavingsAccount(5000);

               // Creating saving account object
               SAccount.Deposit(1000);
               SAccount.PrintBalance();

               SAccount.Withdraw(3000);
               SAccount.PrintBalance();

               Console.WriteLine();

               // Creating checking account object
               Account CAccount = new CheckingAccount(5000);
               CAccount.Deposit(1000);
               CAccount.PrintBalance();

               CAccount.Withdraw(3000);
               CAccount.PrintBalance();
          }
     }
}