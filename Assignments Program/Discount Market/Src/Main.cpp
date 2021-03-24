#include <iostream>
#include <stdio.h>
#include <string>

// Using macro
#define MAX 250000
#define DISCOUNT 60000

using namespace std;

// Global variable
char name[50];
long long inputTotal;

// Input from user
void ManulakaMart() {

  cout << "Masukan Nama Anda: ";
  cin.getline(name, 50);

  cout << "Total Harga : Rp. ";
  cin >> inputTotal;

  cout << "------------------------" << endl;
}

// Display data from user
void getInfoManulakaMart(long counter) {

  counter = inputTotal - DISCOUNT;

  if (inputTotal >= MAX) {
    cout << "Selamat, " << name << ". Anda mendapatkan diskon sebesar Rp. " << DISCOUNT << endl;

    cout << "Total pembayaran anda : Rp. " << counter << endl;
  } else if (inputTotal < MAX) {
    cout << "Hai, " << name << ". Anda belum mendapatkan diskon kali ini." << endl;

    cout << "Total pembayaran anda : Rp. " << inputTotal << endl;
  }
}

int main() {
  system("cls"); // For clear console

  ManulakaMart();

  getInfoManulakaMart(0);

  system("pause > 0");
  return 0;
}