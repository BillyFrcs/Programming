#include <iostream>
#include "Class.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    /*/Without contructor
    Song spotifySong;

    spotifySong.addTitle("Closer");
    cout << spotifySong.getTitle() << endl; //Use this for declare object from function data type

    spotifySong.addArtist("Chainsmoker");
    cout << spotifySong.getArtist() << endl;*/

    //With contructor
    Song spotifySong("Happy Now", "Zedd");
    cout << spotifySong.getTitle() << endl;
    cout << spotifySong.getArtist() << endl;

    cout << endl;

    //With destructor

    //Called class and method fraction
    Fraction fOne;

    fOne.Num() = 9;
    fOne.Den() = 8;
    fOne.printFraction();
    cout << endl;
    
    return 0;
}