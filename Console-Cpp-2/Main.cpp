#include <iostream>
#include <fstream>
#include <string>
#include <bitset>

using namespace std;

//Bitset
void PrintBinary (unsigned short Val, string Name)
{
    cout << Name << " = " << bitset <8> (Val) << endl;
}

int main ()
{
    //Bitwise operators
    // & AND Bitwise AND
    // | OR Bitwise inclusive OR
    // ^ XOR Bitswise exclusive OR
    // ~ NOT
    // << SHL shift bits left
    // >> SHR shift bits right

    //Method 1
    unsigned short a = 3;

    cout << "a = " << bitset<9> (a) << endl << endl;


    //Method 2 with function
    unsigned short b = 5;

    PrintBinary (b, "b");

    cout << endl;


    //& AND Bitwise
    unsigned short c = 9;
    unsigned short d = 7;
    unsigned short e;

    cout << "& = Bitwise AND" << endl;

    e = c & d;

    PrintBinary (c, "c");
    PrintBinary (d, "d");
    PrintBinary (e, "e");

    cout << "e = " << e << endl << endl;


    cout << "| = Bitwise OR" << endl;

    e = c | d;

    PrintBinary (c, "c");
    PrintBinary (d, "d");
    PrintBinary (e, "e");

    cout << "e = " << e << endl << endl;


    cout << "^ = Bitwise XOR" << endl;

    e = c ^ d;

    PrintBinary (c, "c");
    PrintBinary (d, "d");
    PrintBinary (e, "e");

    cout << "e = " << e << endl << endl;


    cout << "~ = Bitwise NOT" << endl;

    e = ~c;

    PrintBinary (c, "c");
    PrintBinary (e, "e");

    cout << "e = " << e << endl << endl;


    cout << "<< = Bitwise SHL" << endl;

    e = c << 2;

    PrintBinary (c, "c");
    PrintBinary (e, "e");

    cout << "e = " << e << endl << endl;


    cout << ">> = Bitwise SHR" << endl;

    e = c >> 1;

    PrintBinary (c, "c");
    PrintBinary (e, "e");

    cout << "e = " << e << endl;

    cout << endl;



    //Casting operator
    //1
    int F = 19;
    float G = 5.50f;

    float Result;

    Result = F * G;

    cout << Result << endl << endl;


    //2
    int I = 6;
    float J = 25.5f;
    char K = 'L';

    cout << I + (float) J << endl << endl; //Casting it can use another data type

    cout << (char) (K + I) << endl; //Casting (char)

    cout << endl;



    //File external ofstream
    ofstream myFile;

    /*ios::out = Operation, default;
    ios::app = write at the last line;
    ios::trunc = Default, make file if doesn't have file, 
    it's gonna delete if have data and make new */

    //1 with ios::out
    myFile.open ("File.txt", ios::out);

    myFile << "Open and write first text";

    myFile.close ();


    //2 with ios::trunc
    myFile.open ("Script.py", ios::trunc);

    myFile.close ();


    //3 with ios::app ==> append
    int Numbers = 19082002;
    myFile.open ("Source.txt", ios::app);
    
    myFile << "Open and write second text" << endl;

    myFile << Numbers;

    myFile.close ();



    //Read file external ifstream
    //ios::in = Default
    //ios::ate = Start from the last file
    //ios::binary = Binary file

    ifstream MyFile;
    string DataOutput, Buffer;
    bool dataIs = false;
    int No;
    string NAme;

    MyFile.open ("Data.txt");
    
    /*/Method 1 ==> access one data
    getline (MyFile, DataOutput);

    DataOutput.append (DataOutput);

    cout << DataOutput << endl << endl;*/


    /*/Method 2 ==> access two data
    getline (MyFile, Buffer);

    DataOutput.append (Buffer);

    getline (MyFile, Buffer);

    DataOutput.append ("\n" + Buffer);

    cout << DataOutput << endl << endl;*/


    /*/Method 3 ==> access all of data
    while (!dataIs) 
    {
        getline (MyFile, Buffer);

        DataOutput.append ("\n" + Buffer);

        if (Buffer == "Data")
        {
             dataIs = true;
        }
    }

    cout << DataOutput << endl;

    getline (MyFile, Buffer);

    cout << Buffer << endl;

    int totalData = 0;

    while (!MyFile.eof() )
    {
        MyFile >> No;
        MyFile >> NAme;

        cout << No << "\t" << NAme << endl;
        totalData++;
    }

    cout << "Total data: " << totalData << endl;

    cout << endl;*/



    //Write binary file
    fstream MYFile;
    int Number = 1908;

    MYFile.open ("Binary.bin", ios::out | ios::binary);

    MYFile.write (reinterpret_cast <char*> (&Number), sizeof(Number) );

    MYFile.close ();

    cout << endl;



    //Read binary file on terminal
    fstream MYFIle;

    int REsult;

    MYFIle.open ("Binary.bin", ios::in | ios::binary);

    MYFIle.read (reinterpret_cast <char*> (&REsult), sizeof (REsult));
    
    cout << "Integer size = " << sizeof (REsult) << endl;

    cout << REsult << endl;



    system("pause > 0");
    cin.get();
    return 0;
}