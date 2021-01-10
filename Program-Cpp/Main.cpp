#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstdlib>

using namespace std;

//Basic c++
int main() {
    
    //Data Type
    cout << "Hello World" << endl;
    cout << "Hello Billy \n";

    cout << endl;

    printf("Arithmetic \n");

    //Addition
    int x = 10 * 10;
    cout << x << endl;

    //SUbtraction
    int y = 100 - 50;
    cout << y << endl;

    //Multiplication
    int v = 5 * 5;
    cout << v << endl;

    //Division
    int q = 20 / 5;
    cout << q << endl;

    //Modulation
    int k = 10 % 5;
    cout << k << endl;

    //Combination
    int e = (5 * 5) + 10;
    cout << e << endl;

    cout << endl;

    //Input Variable
    int h = 100;
    cout << h << endl;

    int z;
    z = 500;
    cout << z << endl;

    int myvariable = 500;
    cout << myvariable << endl;

    cout << endl;

    //Number While
    int num = 1;
    while (num < 10) {
        cout << "Number: " << num << endl;
        num++;
    }

    cout << endl;

    //Input And Output Program
    int o;
    cout << "Enter input: ";
    cin >> o;
    cout << "input is: " << o << endl;

    cout << endl;

    //Print number program loops
    int n = 4;
    int m = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << m << " ";
            m = m + 2;
        }
        m++;
        if (m == 16) {
            m++;
        }
        cout << endl;
    }

    cout << endl;

    //Data Fundamental
    long b = 6;
    short c = 7;

    //Decimal
    float d = 1.5;
    double p = 2.5;

    //Character
    char f = 'a';

    //Boolean
    bool g = true;

    cout << endl;

    unsigned int a = 5;
    cout << a << endl;
    cout << sizeof(a) << " Byte" << endl;
    cout << numeric_limits <int>::max() << endl;
    cout << numeric_limits <int>::min() << endl;



    cin.get();
    return 0;

}
