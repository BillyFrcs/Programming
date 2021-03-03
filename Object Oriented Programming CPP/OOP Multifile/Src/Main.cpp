#include <iostream>
#include "Class.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    Song spotifySong;

    spotifySong.addTitle("Closer");
    cout << spotifySong.getTitle() << endl; //Use this for declare object from function data type

    spotifySong.addArtist("Chainsmoker");
    cout << spotifySong.getArtist() << endl;
    
    return 0;
}