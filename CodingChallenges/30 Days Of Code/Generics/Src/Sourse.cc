#include <bits/stdc++.h>

using namespace std;

/**
*    Name: printArray
*    Print each element of the generic vector on a new line. Do not return anything.
*    @param A generic vector
**/

// Write your code here
template <typename T>
void printArray(vector<T> vertex)
{
	for (T &i : vertex)
	{
		cout << i << "\n";
	}
}

int main()
{
	/*Sample input
	3
     1
     2
     3
     2
     Hello
     World
	*/

	int n;

	cin >> n;
	vector<int> int_vector(n);
	for (int i = 0; i < n; i++)
	{
		int value;
		cin >> value;
		int_vector[i] = value;
	}

	cin >> n;
	vector<string> string_vector(n);
	for (int i = 0; i < n; i++)
	{
		string value;
		cin >> value;
		string_vector[i] = value;
	}

	printArray<int>(int_vector);
	printArray<string>(string_vector);

	return 0;
}