#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
	//String
	string Hello = "Hello world \n";

	cout << Hello << endl;



	//Switch case
	int b;

	cout << "Enter value = ";
	cin >> b;

	switch (b) {
	case 1:
		cout << "b = 1" << endl;
		break;

	case 2:
		cout << "b = 2" << endl;

	case 3:
		cout << "b = 3" << endl;

	case 4:
		cout << "b = 4" << endl;

	case 5:
		cout << "b = 5" << endl;

		//Default
	default:
		cout << "Not found operator" << endl;

	}

	cout << endl;

	//Simple Calculator with "switch, case, default"
	float c, d, result;
	char arithmetic;

	cout << "<--Simple Calculator--> \n \n";

	//Input from user
	cout << "Enter first number: ";
	cin >> c;

	cout << "Choose operator (+, -, *, /) ";
	cin >> arithmetic;

	cout << "Enter second number: ";
	cin >> d;

	//Output from user
	cout << "Result " << c << arithmetic << d;

	//Step 1 using "switch, case, default"
	switch (arithmetic) {
	case '+':
		cout << " = " << (c + d) << endl;
		break;

	case '-':
		cout << " = " << (c - d) << endl;
		break;

	case '*':
		cout << " = " << (c * d) << endl;
		break;

	case '/':
		cout << " = " << (c / d) << endl;
		break;

	default:
		cout << "Doesn't found operator \n";
		break;
	}

	cout << endl;

	//Calculator with "if, else if, else" statements
	cout << "<--Simple calculator--> \n" << endl;

	float a, e, Result;
	char Arithmetic;

	cout << "Enter first number = ";
	cin >> a;

	cout << "Choose operator (+, -, *, /) = ";
	cin >> Arithmetic;

	cout << "Enter second number = ";
	cin >> e;

	cout << "Result " << a << Arithmetic << e;

	if (Arithmetic == '+') {
		Result = a + e;
	}

	else if (Arithmetic == '-') {
		Result = a - e;
	}

	else if (Arithmetic == '*') {
		Result = a * e;
	}

	else if (Arithmetic == '/') {
		Result = a / e;
	}

	else {
		cout << "Wrong operator, please try again" << endl;
	}

	cout << " = " << Result << endl;



	cin.get();
	return 0;
}
