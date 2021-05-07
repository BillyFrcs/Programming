#include <iostream>
#include <string>

using namespace std;

//Basics calculator
int main()
{
	//Simple Calculator with "switch, case, default"
	float c, d, result;
	char arithmetic;

	cout << "<--Simple Calculator switch, case--> \n";

	//Input from user
	cout << "Enter first number: ";
	cin >> c;

	cout << "Choose operator (+, -, *, /) ";
	cin >> arithmetic;

	cout << "Enter second number: ";
	cin >> d;

	//Step 1 using "switch, case, default"
	switch (arithmetic)
	{
	case '+':
		cout << "Result " << c << " " << arithmetic << " " << d << " = " << (c + d) << endl;
		break;

	case '-':
		cout << "Result " << c << " " << arithmetic << " " << d << " = " << (c - d) << endl;
		break;

	case '*':
		cout << "Result " << c << " " << arithmetic << " " << d << " = " << (c * d) << endl;
		break;

	case '/':
		cout << "Result " << c << " " << arithmetic << " " << d << " = " << (c / d) << endl;
		break;

	default:
		cout << "Doesn't found operator \n";
		break;
	}

	cout << endl;

	//Calculator with "if, else if, else" statements
	cout << "<--Simple Calculator if, else--> \n";

	float a, e, Result;
	char Arithmetic;

	cout << "Enter first number = ";
	cin >> a;

	cout << "Choose operator (+, -, *, /) = ";
	cin >> Arithmetic;

	cout << "Enter second number = ";
	cin >> e;

	if (Arithmetic == '+')
	{
		Result = a + e;
	}

	else if (Arithmetic == '-')
	{
		Result = a - e;
	}

	else if (Arithmetic == '*')
	{
		Result = a * e;
	}

	else if (Arithmetic == '/')
	{
		Result = a / e;
	}

	else
	{
		cout << "Wrong operator, please try again" << endl;
	}

	cout << "Result " << a << " " << Arithmetic << " " << e << " = " << Result << endl;

	cin.get();
	return 0;
}
