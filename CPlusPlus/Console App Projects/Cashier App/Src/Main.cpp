#include <iostream>
#include <list>

#define INDEX 30

namespace Program
{
     struct Cashier
     {
          char nameCashier[INDEX], item[INDEX];

          double price, total;

          int input;
     };

     class CashierProgram
     {
     public:
          CashierProgram()
          {
               std::cout << "Masukan nama kasir: ";
               std::cin.getline(_c.nameCashier, INDEX);

               std::cout << "Masukan jumlah barang yang ingin dibeli: ";
               std::cin >> _c.input;
          }

          void inputGrocery()
          {
               for (auto i = 0; i < _c.input; i++)
               {
                    std::cin.ignore();

                    std::cout << "\nMasukan nama barang: ";
                    std::cin.get(_c.item, INDEX);

                    std::cout << "Masukan harga barang: ";
                    std::cin >> _c.price;

                    std::cout << "Masukan jumlah barang: ";
                    std::cin >> _c.total;

                    _list.push_back(_c);
               }
          }

          void displayGrocery()
          {
          }

     private:
          std::list<Cashier> _list;
          Cashier _c;
     };
}

int main()
{
     Program::CashierProgram *PC = new Program::CashierProgram;

     PC->inputGrocery();

     return 0;
}