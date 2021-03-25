#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main (int argc, char const *argv[])
{
    //Basic string
    string Word ("Motor");

    cout << Word << endl;

    cout << endl;



    //Using getline string to show output word or sentence
    string Data;

    cout << "Enter word or sentence: ";
    getline (cin, Data);

    cout << "Result is: " << Data << endl;

    //Total word from input
    int Position = 0, Total = 0;

    while (true) 
    {
        Position = Data.find (" ", Position + 1);
        Total++;
        
        if (Position < 0)
        {
            break;
        }

    }

    cout << "Total words is: " << Total << endl;

    cout << endl;



    //Operation string take character from index
    string Name("Billy");

    cout << Name << endl;

    cout << "Take word from 0: " << Name[0] << endl;
    cout << "Take word from 1: " << Name[1] << endl;
    cout << "Take word from 2: " << Name[2] << endl;
    cout << "Take word from 3: " << Name[3] << endl;
    cout << "Take word from 4: " << Name[4] << endl;

    cout << endl;



    //Change index character
    Name[4] = 'i';
    cout << Name << endl;

    //Connect concatenation(1)
    string NAme(Name + "Franscois");

    cout << NAme << endl;

    //Append(2)
    string NAMe("Kolibonso");
    NAme.append(" " + NAMe);

    cout << NAme << endl;

    //(3)
    string NAME("19");
    NAme += " " + NAME;

    cout << NAme << endl;

    cout << endl;



    //Comparator or comparison ==> Perbandingan string
    string Flight ("Airplane");

    if (Flight == "Airplane")
    {
        cout << "It works" << endl;
    }
    
    cout << endl;
    


    //Guess word program
    string Input, Secret_word("Billy");//Must enter Flying to right answer

    while (true)
    {
        cout << "Enter the right word: ";
        cin >> Input;

        cout << "The word entered is: " << Input << endl;

        if (Input == Secret_word)
        {
            cout << "That's right" << endl;
            break;
        }

        else 
        {
            cout << "That's wrong try again" << endl;
        }
    }

    cout << "Finally this program end" << endl;

    cout << endl;



    //Access substring 
    string Sentence_1 ("Billy love programming and coding");
    string Sentence_2 ("Billy like programming language");

    cout << "1. " << Sentence_1 << endl;
    cout << "2. " << Sentence_2 << endl;

    //Take the middle string
    //substring (Index, long)
    cout << Sentence_1.substr (6, 4) << endl;
    cout << Sentence_2.substr (23, 8) << endl;

    //Find position from substring
    cout << Sentence_1.find ("programming") << endl;
    cout << Sentence_2.find ("language") << endl;

    int a = Sentence_1.find ("ng");
    cout << a << endl;

    cout << Sentence_1.find ("ng", a + 1) << endl;

    //Looking for position from behind ==> rfind

    cout << Sentence_2.rfind ("e") << endl;

    cout << endl;



    //Substitution string
    string Sentence3 ("Im so happy");
    string Sentence4 ("I never give ar");

    cout << "1. " << Sentence3 << endl;
    cout << "2. " << Sentence4 << endl;

    //Swap string ==> change string
    Sentence3.swap (Sentence4);

    cout << "swap 1. " << Sentence3 << endl;
    cout << "swap 2. " << Sentence4 << endl;

    //Replace string
    //1
    Sentence4.replace (0, 2, "Billy");

    //2 change the wrong value string
    Sentence3.replace (Sentence3.find ("ar"), 3, "up");

    cout << "replace 1. " << Sentence3 << endl;
    cout << "replace 2. " << Sentence4 << endl;

    //Insert string for add another value to string
    string Sentence5 ("I to become a programmer or developer");
    string Sentence6 ("And become a CEO");

    cout << "1. " << Sentence5 << endl;
    cout << "2. " << Sentence6 << endl;

    Sentence5.insert (2, "want ");

    cout << "insert 1. " << Sentence5 << endl;
    cout << "insert 2. " << Sentence6 << endl;


    cin.get();
    return 0;
}