#include <iostream>
#include <cstdlib>
#include <string>
#include <stdio.h>
#include <cmath>

using namespace std;

//Prototype
double menghitung_luas (double p, double l);

void println (double x);



//Global scope
int a = 50;

int take_global() //Take variable global
{
	return a;
}

//Local scope
int a_local() //variable local
{
	int a = 70;
	return a;
}



//Prototype cube
double volume_cube(double p = 1, double l = 10, double t = 2);

//Basic Overloading function
int luas_cube(int panjang, int lebar)
{
	int luas = panjang * lebar;
	return luas;
}

//Overload function
int luas_cube(int panjang)
{
	int luas = panjang * panjang;
	return luas;
}

double luas_cube(double sisi)
{
	return sisi * sisi;
}



//Function recursive
int pangkatIteration (int b, int c) 
{
	int result = b;
	for (int d = 1; d < c; d++) {
		result = result * b;
	}
	return result;
}

int pangkatRecursive (int b, int c)
{
	if (c <= 1) {
		cout << "Last of recursive \n";
		return b;
	}

	else {
		cout << "Recursive \n";
		return b * pangkatRecursive (b, (c - 1));
	}
}



int main()
{
	//Counting panjang * lebar
	double panjang, lebar;
	double luas;

	printf("Enter panjang: ");
	cin >> panjang;

	printf("Enter lebar: ");
	cin >> lebar;

	luas = menghitung_luas(panjang, lebar);

	println(luas);

	cout << endl;



	//Scope variable (global, local, block)

	//Variable global
	cout << "Variable global: " << a << endl;

	//Variable local for main
	int a = 19;
	cout << "Variable local main: " << a << endl;

	cout << "Variable take from, take_global: " << take_global() << endl;
	cout << "Variable take from, a_local: " << a_local() << endl;

	//Variable block
	{
		int a = 30;

		cout << "Variable block: " << a << endl;
	}

	cout << endl;



	//Default argument function
	cout << "Volume cube: " << volume_cube(2, 5, 10) << endl;
	cout << "Volume cube: " << volume_cube(2, 5) << endl;
	cout << "Volume cube: " << volume_cube(10) << endl;
	cout << "Volume cube: " << volume_cube() << endl;

	//Overloading = menimpa
	cout << "Luas cube 3 x 3 = " << luas_cube(3, 3) << endl;
	cout << "Luas cube 5 x 5 = " << luas_cube(5) << endl;
	cout << "Luas cube 3.5 x 3.5 = " << luas_cube(3.5) << endl;

	cout << endl;



	//Function iteration and recursive
	int b;
	int c;

	cout << "Number: ";
	cin >> b;

	cout << "Pangkat: ";
	cin >> c;

	//Iteration
	cout << "Result Iteration = " << pangkatIteration (b, c) << endl;
	
	//Recursive
	cout << "Result Recursive = " << pangkatRecursive (b, c) << endl;

	cout << endl;

	//Random program
	int createRandomNumber = rand() %50;

	cout << "Random number: " << createRandomNumber << endl;



	cin.get();
	return 0;
}




double menghitung_luas(double p, double l)
{
	return p * l;
}


void println(double x)
{
	cout << "Result: " << x << endl;
}


double volume_cube(double p, double l, double t)
{
	return p * l * t;
}