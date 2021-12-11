// InterfacesMSVC.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Interface.h"

void Entity::PrintVector()
{
	for (auto i : _numbers)
	{
		std::cout << i << " ";
	}
}

void Entity::PopVector()
{
	_numbers.pop_back();

	std::cout << "\n";
	for (auto i : _numbers)
	{
		std::cout << i << " ";
	}
}

void Entity::SwappingPointer(int* x, int* y)
{
	std::cerr << "\nBefore swap: " << *x << ", " << *y;

	// Swap function
	std::swap(x, y);

	/* Swap manual
	int temp = x;
	x = y;
	y = temp;
	*/

	std::cerr << "\nAfter swap: " << *x << ", " << *y << std::endl;
}

void Entity::AddData(std::vector<std::string> data)
{
	for (std::vector<std::string>::iterator i = data.begin(); i != data.end(); i++)
	{
		std::cerr << *i << std::endl;
	}
}

int main(int argc, const char argv[])
{
	Entity* MyEntity = new Entity();

	MyEntity->PrintVector();
	MyEntity->PopVector();

	int a = 5;
	int b = 10;

	int* x = &a;

	int* y = &b;

	MyEntity->SwappingPointer(x, y);

	std::vector<std::string> data;

	data.push_back("Billy");
	data.push_back("Franscois");

	MyEntity->AddData(data);

	std::cin.get();
	return EXIT_SUCCESS;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
