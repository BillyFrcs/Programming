#include <iostream>
#include <string>
#include <vector>

constexpr int INDEX = 30;
constexpr int MONEY = 1000;

namespace Program
{
     struct Cashier
     {
          char nameCashier[INDEX], item[INDEX];

          long double price, total, subTotalPrice, inputPrice;

          int input;
     };

     class CashierProgram
     {
     public:
          CashierProgram()
          {
               system("cls");

               std::cout << "Masukan nama kasir: ";
               std::cin.get(_c.nameCashier, INDEX);

               std::cout << "Masukan jumlah barang yang ingin dibeli: ";
               std::cin >> _c.input;

               std::cout << "\nHi " << _c.nameCashier << " petugas kasir, silahkan masukan barang belanjaan customer sebanyak "
                         << _c.input << " kali.\n";
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

                    _vertex.push_back(_c);
               }
          }

          void displayGrocery()
          {
               std::cout << "\n===== Daftar Belanjaan =====\n";
               for (auto i = 0; i < _c.input; i++)
               {
                    _c = _vertex[i];

                    std::cout << "\nNama barang yang dibeli: " << _c.item << std::endl;
                    std::cout << "Jumlah barang yang dibeli: " << _c.total << std::endl;

                    _c.subTotalPrice = (_c.total * _c.price);

                    std::cout << "Sub total barang Rp. " << _c.subTotalPrice << std::endl;

                    _countTotal += _c.subTotalPrice;
               }
               std::cout << "\nTotal pembayaran Rp." << _countTotal << std::endl;
          }

          void paying()
          {
               std::cout << "\nEnter total paying(Masukan Total Pembayaran): ";
               std::cin >> _c.inputPrice;

               double counter = (_c.inputPrice - _countTotal);

               if (_c.inputPrice > MONEY)
               {
                    std::cout << "Thank you for your paying, here's your change Rp." << counter << std::endl;
               }
               else
               {
                    std::cout << "Sorry you're money is not enough \n";
               }
          }

     private:
          std::vector<Cashier> _vertex;
          Cashier _c;
          double _countTotal;
     };
}

int main()
{
     Program::CashierProgram *PC = new Program::CashierProgram;

     PC->inputGrocery();
     PC->displayGrocery();
     PC->paying();

     return EXIT_SUCCESS;
}