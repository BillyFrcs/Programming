#include <iostream>
#include <stdio.h>
#include <string>

// Using macro
#define MAX 250000
#define DISCOUNT 60000

using namespace std;

// Global variable
char name[50];
long long inputPrice;

// Input from user
void ManulakaMart() {

  cout << "Masukan Nama Anda: ";
  cin.getline(name, 50);

  cout << "Total Harga: ";
  cin >> inputPrice;

  cout << "-------------------" << endl;
}

// Display data from user
void getInfoManulakaMart(long counter) {

  counter = inputPrice - DISCOUNT;

  if (inputPrice >= MAX) {
    cout << "Selamat, " << name << ". Anda mendapatkan diskon sebesar Rp. "
         << DISCOUNT << endl;

    cout << "Total pembayaran anda : Rp. " << counter << endl;
    printf("==================================\n");
  } else if (inputPrice < MAX) {
    cout << "Hai, " << name << ". Anda belum mendapatkan diskon kali ini."
         << endl;

    cout << "Total pembayaran anda : Rp. " << inputPrice << endl;
    printf("==================================\n");
  }
}

int main() {
  system("cls"); // For clear console

  ManulakaMart();

  getInfoManulakaMart(0);

  return 0;
}