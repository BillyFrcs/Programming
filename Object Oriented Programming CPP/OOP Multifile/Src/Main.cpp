#include <iostream>
#include "Class.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    Song mySong;

    mySong.addTitle("Closer");
    cout << mySong.getTitle(); //Use this for declare object from function data type

    return 0;
}