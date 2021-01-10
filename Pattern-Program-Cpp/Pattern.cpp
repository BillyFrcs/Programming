#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>

using namespace std;

int main()
{
	//Triangle program 1
	int a;

	cout << "Enter number: ";
	cin >> a;

	for (int b = 1; b <= a; b++) {
		for (int c = 1; c <= b; c++) {
			cout << "*";
		}
		cout << endl;
	}



	//Triangle program 2
	int d;

	cout << "Enter number: ";
	cin >> d;

	for (int e = 1; e <= d; e++) {
		for (int f = d; f >= e; f--) {
			cout << "*";
		}
		cout << endl;
	}



	//Triangle program 3
	int g;

	cout << "Enter number: ";
	cin >> g;

	for (int h = 1; h <= g; h++) {
		for (int i = 1; i <= h; i++) {
			cout << " ";
		}
		for (int j = g; j >= h; j--) {
			cout << "*";
		}
		cout << endl;
	}



	//Triangle program 4
	int k;

	cout << "Enter number: ";
	cin >> k;

	for (int l = 1; l <= k; l++) {
		for (int m = k; m >= l; m--) {
			cout << " ";
		}
		for (int n = 1; n <= l; n++) {
			cout << "*";
		}
		cout << endl;
	}



	//Triangle program 5
	int o;

	cout << "Enter number: ";
	cin >> o;

	for (int p = 1; p <= o; p++) {
		for (int q = o; q >= p; q--) {
			cout << " ";
		}
		for (int r = 1; r <= (2 * p - 1); r++) {
			cout << "*";
		}
		cout << endl;
	}



	//Triangle program 6
	int s;

	cout << "Enter number: ";
	cin >> s;

	for (int t = 1; t <= s; t++) {
		for (int u = 1; u <= t; u++) {
			cout << " ";
		}
		for (int v = s; v >= (2 * t - s); v--) {
			cout << "*";
		}
		cout << endl;
	}



	//Triangle program combination no 5 and 6
	int w;

	cout << "Enter number: ";
	cin >> w;

	for (int x = 1; x <= w; x++) {
		for (int y = w; y >= x; y--) {
			cout << " ";
		}
		for (int z = 1; z <= (2 * x - 1); z++) {
			cout << "*";
		}
		cout << endl;
	}

	for (int x = 2; x <= w; x++) {
		for (int y = 1; y <= x; y++) {
			cout << " ";
		}
		for (int z = w; z >= (2 * x - w); z--) {
			cout << "*";
		}
		cout << endl;
	}



	cin.get();
	return 0;
}