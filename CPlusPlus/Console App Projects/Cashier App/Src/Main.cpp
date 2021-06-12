#include <iostream>
#include <string>
#include <vector>

#define INDEX 30
#define TOTAL 50

namespace Program
{
     struct Cashier
     {
          char nameCashier[INDEX], item[INDEX];

          double price, total, totalPrice;

          int input, inputPrice;
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

                    std::cout << "Masukan harga barang Rp.";
                    std::cin >> _c.price;

                    std::cout << "Masukan jumlah barang: ";
                    std::cin >> _c.total;

                    _vec.push_back(_c);
               }
          }

          void displayGrocery()
          {
               std::cout << "\n===== Daftar Belanjaan =====\n";
               for (auto i = 0; i < _c.input; i++)
               {
                    _c = _vec[i];

                    std::cout << "\nNama barang yang dibeli: " << _c.item << std::endl;
                    std::cout << "Jumlah barang yang dibeli: " << _c.total << std::endl;

                    _c.totalPrice = (_c.total * _c.price);
               }
               std::cout << "\nTotal pembayaran Rp. " << _c.totalPrice << std::endl;
          }

          void paying()
          {
               std::cout << "\nEnter total paying: ";
               std::cin >> _c.inputPrice;

               std::cout << "Uang kembalian Rp. " << (_c.inputPrice - _c.totalPrice) << std::endl;
          }

     private:
          std::vector<Cashier> _vec;
          Cashier _c;
     };
}

int main()
{
     Program::CashierProgram *PC = new Program::CashierProgram;

     PC->inputGrocery();
     PC->displayGrocery();
     PC->paying();

     return 0;
}