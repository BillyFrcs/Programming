#include <iostream>
#include <string.h>
#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
	//Operator Assignment

	int a = 10;
	cout << "First value is: " << a << endl;

	a += 3;
	cout << "+ 3 be " << a << endl;

	a -= 3;
	cout << "- 3 be " << a << endl;

	a *= 3;
	cout << "* 3 be " << a << endl;

	a /= 3;
	cout << "/ 3 be " << a << endl;

	a %= 3;
	cout << "% 3 be " << a << endl;

	cout << endl;

	//Increment and Decrement

	int b = 5;
	int c = 5;
	int d = 9;
	int e = 9;

	//Postincrement
	cout << b << endl;
	b++; //b = b + 1;
	//cout << b++ << endl;
	cout << b << endl
		<< "\n";

	//Preincrement
	cout << c << endl;
	++c;
	//cout << ++b << endl;
	cout << c << endl
		<< "\n";

	//Decrement
	cout << d << endl;
	d--; //d = d - 1;
	cout << d << endl
		<< "\n";

	cout << e << endl;
	--e;
	cout << d << endl;

	cout << endl;

	//While Looping
	int f = 5;

	while (f <= 10)
	{
		cout << "Billy ";
		cout << f << endl;
		f += 1;
	}

	cout << "Finish" << endl;

	cout << endl;

	//Do While Loop
	int g = 1;

	do
	{
		cout << "Okay";
		cout << g << endl;
		g++;
	} while (g <= 10);
	cout << "\n";

	cout << "Finish \n";

	cout << endl;

	//For Loop
	//Counter
	cout << "For loop 1 \n";
	for (int h = 1; h <= 10; h++)
	{
		cout << h << endl;
	}

	cout << "For loop 2 \n";
	for (int h = 1; h <= 10; h += 2)
	{
		cout << h << endl;
	}

	cout << "For loop 3 \n";
	for (int h = 1; h >= -10; h--)
	{
		cout << h << endl;
	}

	cout << "For loop 4 \n";
	int total = 0;
	for (int h = 1; h <= 10; total += h, h++)
	{
		cout << h << "||" << total << endl;
	}

	cout << endl;

	//Break
	for (int i = 0; i <= 10; i++)
	{
		if (i == 5)
		{
			break;
		}

		cout << i << endl;
		i++;
	}

	//Continue
	cout << "\n";
	int j = 0;
	while (j <= 10)
	{
		j++;
		if (j == 6)
		{
			continue;
		}

		cout << j << endl;
	}

	cout << endl;

	//Exercise fibonacci
	//Formula: k_l = k_l1 + k_l2
	int l;
	int k_l;
	int k_l1;
	int k_l2;

	cout << "Enter value to-l: ";
	cin >> l;

	k_l1 = 1;
	k_l2 = 0;
	//k_l = k_l1 + k_l2;
	cout << k_l1 << endl;
	cout << k_l2 << endl;

	for (int i = l; i < 1; i++)
	{
		k_l = k_l1 + k_l2;
		k_l2 = k_l1;
		k_l1 = k_l;
		//cout << i << endl;
		cout << k_l << endl;
	}

	printf("\n");

	//Guess program
	int Guess, Tries = 0;

	cout << "Guess number 1 - 10: ";
	cin >> Guess;

	while (Guess != 9 && Tries < 50)
	{
		cout << "Wrong guess, try again: ";
		cin >> Guess;

		Tries++;
	}

	if (Guess == 9)
	{
		cout << "You got it \n";
	}

	//Square program
	int I = 0;
	int Square = 0;

	while (I < 10)
	{
		cout << I << " " << I * I << "\n";
		I++;
	}

	printf("\n");

	//Vector program
	vector<double> numVector = {200, 400, 500}; //Data type double

	cout << "Value: " << numVector[0] << endl;

	printf("\n");

	vector<char> charVector = {'a', 'b', 'c'};

	cout << "Character 1: " << charVector[0] << endl;
	cout << "Character 2: " << charVector[1] << endl;
	cout << "Character 3: " << charVector[2] << endl;

	printf("\n");

	vector<string> stringVectorName;

	stringVectorName.push_back("Billy");

	cout << "Name: " << stringVectorName[0] << endl;

	printf("\n");

	vector<double> deliveryOrder;

	deliveryOrder.push_back(1.50);
	deliveryOrder.push_back(2.34);

	double Total = 0.0;

	for (int z = 0; z < deliveryOrder.size(); z++)
	{
		Total = Total + deliveryOrder[z];
	}

	cout << "Total $" << Total << "\n";

	cin.get();
	return 0;
}