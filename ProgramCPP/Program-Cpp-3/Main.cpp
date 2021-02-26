#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Switch case
	int b;

	cout << "Enter value = ";
	cin >> b;

	switch (b)
	{
	case 1:
		cout << "b = 1" << endl;
		break;

	case 2:
		cout << "b = 2" << endl;
		break;

	case 3:
		cout << "b = 3" << endl;
		break;

	case 4:
		cout << "b = 4" << endl;
		break;

	case 5:
		cout << "b = 5" << endl;
		break;

		//Default
	default:
		cout << "Not found operator" << endl;
		break;
	}

	cout << endl;

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
