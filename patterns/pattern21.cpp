#include <iostream>
using namespace std;

int main()
{

    int n = 2;

    for (int i = 0; i < n; i++)
    {

        // printing stars
        for (int j = n; j > i; j--)
        {
            cout << "*";
        }

        // printing spaces
        for (int j = 0; j < 2 * i; j++)
        {
            cout << " ";
        }

        // printing stars
        for (int j = n; j > i; j--)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {

        // printing stars
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        // printing spaces - 2,0
        for (int j = n - 2 * i; j > 0; j--)
        {
            cout << " ";
        }

        // printing stars
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}