#include <algorithm>
#include <array>
#include <iostream>
#include <string>

using namespace std;

//Multidimensional array
void printArray(int *ptrArray, int line, int colum)
{
    int index = 0;

    for (int a = 0; a < line; a++)
    {
        cout << "[ ";

        for (int b = 0; b < colum; b++)
        {
            cout << *(ptrArray + index) << " ";
            index++;
        }
        cout << "]" << endl;
    }
}

const int kolom = 3;
const int baris = 2;

void Matrix(array<array<int, kolom>, baris> &ValueARRAY)
{
    for (array<int, kolom> VectorBaris : ValueARRAY)
    {
        cout << " [";

        for (int ValueKolom : VectorBaris)
        {
            cout << ValueKolom << " ";
        }
        cout << "]" << endl;
    }
}

//Sort array
const size_t arraySize = 10;

//Number
void PrintArray(array<int, arraySize> &number)
{
    cout << "Short array: ";

    for (int &a : number)
    {
        cout << a << " ";
    }
    cout << endl;
}

//Alphabet
void PrintArray(array<char, arraySize> &alphabet)
{
    cout << "Short array: ";

    for (char &a : alphabet)
    {
        cout << a << " ";
    }
    cout << endl;
}

//Search array
const size_t arraySIZE = 10;

void PRINTARRAY(array<int, arraySIZE> &angka)
{
    cout << "Search array: ";

    for (int &b : angka)
    {
        cout << b << " ";
    }
    cout << endl;
}

int main()
{
    //Multidimension array
    //Step 1
    int arrayMd[2][2] = {0, 1, 2, 3};

    cout << arrayMd[0][0] << " " << arrayMd[0][1] << endl;
    cout << arrayMd[1][0] << " " << arrayMd[1][1] << endl;

    //Step 2
    const int line = 2;
    const int colum = 2;

    int arrayMD[line][colum] = {0, 1, 2, 3};

    printArray(*arrayMD, line, colum);

    cout << endl;

    //Multidimension array (Standart library)
    //Step 1
    const int kolom = 3;
    const int baris = 2;

    array<array<int, kolom>, baris> valueMD = {0, 1, 2, 3, 4, 5};

    cout << valueMD[0][0] << " ";
    cout << valueMD[0][1] << " ";
    cout << valueMD[0][2] << " " << endl;

    cout << valueMD[1][0] << " ";
    cout << valueMD[1][1] << " ";
    cout << valueMD[1][2] << " " << endl;

    //Step 2
    Matrix(valueMD);

    cout << endl;

    //Sort array
    array<int, arraySize> number = {0, 5, 4, 6, 1, 3, 7, 2};

    array<char, arraySize> alphabet = {'b', 'a', 'c', 'f', 'g', 'e', 'd', 'h'};

    PrintArray(number);
    PrintArray(alphabet);

    cout << endl;

    cout << "Sequence array: " << endl;

    sort(number.begin(), number.end());
    PrintArray(number);

    sort(alphabet.begin(), alphabet.end());
    PrintArray(alphabet);

    cout << endl;

    //Search array
    array<int, arraySIZE> angka = {7, 2, 3, 6, 4, 5, 1, 0};
    PRINTARRAY(angka);

    int searchNumber;
    bool foundIt;

    //Sort first
    //Search => binary_search
    cout << "Find array number: ";
    cin >> searchNumber;

    sort(angka.begin(), angka.end());
    foundIt = binary_search(angka.begin(), angka.end(), searchNumber);

    if (foundIt)
    {
        cout << "Found" << endl;
    }

    else
    {
        cout << "Not found" << endl;
    }

    return 0;
}