#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main()
{
	//Simple Arithmetic
	int a, b, Result;

	cout << "Enter number = ";
	cin >> a;

	cout << "Enter second number = ";
	cin >> b;

	//Addition
	Result = a + b;
	cout << a << " + " << b << " = " << Result << endl;

	//Subtraction
	Result = a - b;
	cout << a << " - " << b << " = " << Result << endl;

	//Multiplication
	Result = a * b;
	cout << a << " x " << b << " = " << Result << endl;

	//Division
	Result = a / b;
	cout << a << " / " << b << " = " << Result << endl;

	//Modula
	Result = a % b;
	cout << a << " % " << b << " = " << Result << endl;

	//Combination (Could manipulation the Result)
	Result = (a + b) * b;
	cout << Result << endl;


	cout << endl;


	//Comparison / Relation Expression
	int c = 2;
	int d = 3;

	bool Result1, Result2;

	//Comparable ==
	Result1 = (c == d);
	cout << (Result1) << endl;

	//Not Comparabel ! + = => !=
	Result2 = (c != d);
	cout << (Result2) << endl;


	cout << endl;

	//Comparasion 2
	int e = 3;
	int f = 4;

	bool Result3, Result4;

	//Less Than
	Result3 = (e < f);
	cout << Result3 << endl;

	//Over
	Result4 = (e > f);
	cout << Result4 << endl;


	cout << endl;


	//Comparasion 3
	int h = 5;
	int g = 5;

	bool Result5, Result6;

	//Less Than Equal
	Result5 = (h <= g);
	cout << Result5 << endl;

	//Over Equal
	Result6 = (h >= g);
	cout << Result6 << endl;


	cout << endl;


	//Operator Logic = And, Not, Or
	int i = 9;
	int j = 8;

	bool result;

	//Not
	result = (i == 9);
	cout << result << endl;

	result = (!(j == 8));
	cout << result << endl;

	//And
	result = (i == 9) & (j == 8);
	cout << result << endl;

	result = (i == 8) & (j == 8);
	cout << result << endl;

	//Or
	result = (i == 9) || (j == 8);
	cout << result << endl;

	result = (i == 8) || (j == 9);
	cout << result << endl;


	cout << endl;


	//If Statement
	int k;
	cout << "Enter number: ";
	cin >> k;

	if (k /*== 18*/) //It can use another Variable to fill

	{
		cout << "Thank you \n";
	}
	else
	{
		cout << "Please enter number 19" << endl;
	}


	cout << endl;


	//Basic if, else if, else
	int l;
	cout << "Enter number: ";
	cin >> l;

	if (l == 90)
	{
		cout << "This is number 90" << endl;
	}

	else if (l == 80)
	{
		cout << "This is number 80" << endl;
	}

	else if (l == 70)
	{
		cout << "This is number 70" << endl;
	}

	else {
		cout << "This is not 90 , 80 and 70" << endl;
	}


	cin.get();
	return 0;
}