#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Mahasiswa
{
	int NPM;
	string Name;
	string Prodi;
};

Mahasiswa takeData (int &Position, fstream &myFile)
{
	Mahasiswa bufferData;

	myFile.seekp ((Position - 1) *sizeof (Mahasiswa) );
	
	myFile.read (reinterpret_cast <char*> (&bufferData), sizeof (Mahasiswa));

	return bufferData;
}

int main()
{
	fstream myFile;

	Mahasiswa readData;

	myFile.open ("Data.bin", ios::in | ios::binary);

     int Position = 1;

	readData = takeData (Position, myFile);

	cout << readData.NPM << endl;
	cout << readData.Name << endl;
	cout << readData.Prodi << endl;

	myFile.close();

	system("pause > 0");
	cin.get();
	return 0;
}