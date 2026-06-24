/*
A
BB
CCC
DDDD
EEEEE
*/

#include <iostream>

using namespace std;

int main()
{

    int n = 5;
    char txt = 'A';

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << txt << " ";
        }

        cout << endl;

        txt = txt + 1;
    }

    return 0;
}