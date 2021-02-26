#include <iostream>
#include <stdio.h>
#include <cmath>
#include <string>
#include <array> //Standart library
#include <algorithm>

//"&" => For check address

using namespace std;

int main (int argc, char const *argv[])

{
	//Basic of array
	int value [5] = { 0, 1, 2, 3, 4 }; //Step 1

	value [0] = 0; //Step 2
	value [1] = 1;
	value [2] = 2;
	value [3] = 3;
	value [4] = 4;

	cout << &value [0] << " Value is " << value [0] << endl;
	cout << &value [1] << " Value is " << value [1] << endl;
	cout << &value [2] << " Value is " << value [2] << endl;
	cout << &value [3] << " Value is " << value [3] << endl;
	cout << &value [4] << " Value is " << value [4] << endl;

	//Change value address with array
	int *ptr = value; //No 1
	*(ptr + 2) = 6;

	value [3] = 7; // No 2

	cout << endl;

	cout << &value [0] << " Value is " << value [0] << endl;
	cout << &value [1] << " Value is " << value [1] << endl;
	cout << &value [2] << " Value is " << value [2] << endl;
	cout << &value [3] << " Value is " << value [3] << endl;
	cout << &value [4] << " Value is " << value [4] << endl;

	cout << endl;

	//Size of array
	cout << "Size array: " << sizeof (value) << " Byte"<< endl;

	//Total array 
	cout << "Total member of array: " << sizeof (value) / sizeof (int) << endl;

	cout << endl << endl;



    //Make array with standart library
	array <int, 6> nilai;

	for (int a = 0; a <= 5; a++)
	{
		nilai [a] = a;

		cout << "Nilai [" << a << "] = " << nilai [a];
		cout << " Address: " << &nilai [a] << endl;
	}

	cout << endl;

	//Size of array
	cout << "Size: " << nilai.size() << endl;

	//First address from array
	//cout << "First address: " << nilai.begin() << endl;

	//Last address from array
	//cout << "Last address: " << nilai.end() << endl;

	//Value with index
	cout << "Value ke 4: " << nilai.at(4) << endl << endl;
    


	//Program show graphic value
	array <int, 10> Value;

	cout << "Show graphic value" << endl;

	for (int b = 0; b <= Value.size(); b++)
	{
		cout << "Total students with value: ";

		if (b == 0)
		{
			cout << "0 - 9   : ";
			//cin >> Value[b];
		}

		else if (b == 10)
		{
			cout << "100     : ";
			//cin >> Value[b];
		}

		else
		{
			cout << b * 10 << " - " << (b * 10) + 9 << " : ";
			//cin >> Value[b];
		}

		cin >> Value[b];
	}

	cout << endl;

	cout << "Graphic value" << endl;

	for (int b = 0; b <= Value.size(); b++)
	{
		//cout << Value[b] << endl;

		if (b == 0) 
		{
			cout << "0 - 9   : ";
		}

		else if (b == 10)
		{
			cout << "100     : ";
		}

		else 
		{
			cout << b * 10 << " - " << (b * 10) + 9 << " : ";
		}

		for (int star = 0; star < Value[b]; star++)
		{
			cout << " * ";
		}

		cout << endl;
	}

	cout << endl;



	//Lopping array c++ 
	array <int, 11> arrayNilai = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for (int c = 0; c < 10; c++) //Step 1
	{
		cout << arrayNilai[c] << endl; //Doesn't change the array
	}

	cout << endl;

	for (int nilai : arrayNilai)
	{
		cout << &nilai << " Value is " << nilai << endl;
	}

	cout << endl;

	//Manipulation array with c++
	for (int &nilaiRef : arrayNilai) //Step 2 more simple
	{
		nilaiRef *= 2;
		
		//cout << &nilaiRef << " Value is " << nilaiRef << endl;
	}

	cout << endl;

	for (int& nilaiRef : arrayNilai)
	{
		cout << &nilaiRef << " Value is " << nilaiRef << endl;
	}



	cin.get();
	return 0;
}