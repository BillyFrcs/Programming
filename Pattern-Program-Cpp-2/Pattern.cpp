#include <iostream>
#include <string>

using namespace std;

int main()
{
    //Pattern 1
    int a = 1;

    for (int b = 6; b >= 1; b--)
    {
        for (int c = 1; c < b; c++)
        {
            cout << a << " ";
            a++;
        }
        cout << endl;
    }



    system("pause > 0");
    cin.get();
    return 0;
}