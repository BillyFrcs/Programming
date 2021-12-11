#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

__interface Methods
{
public:
	void PrintVector();
	void PopVector();
	void SwappingPointer(int* x, int* y);

	virtual void AddData(std::vector<std::string> data);
};

class Entity : public Methods
{
public:
	void PrintVector();

	void PopVector();

	void SwappingPointer(int* x, int* y);

	void AddData(std::vector<std::string> data);

private:
	std::vector<int> _numbers = { 1, 2, 3, 4, 5 };
};