#include <iostream>
using namespace std;

int main()
{

    int n = 5;

    for (int i = 0; i < n; i++)
    {
        // reverse print left
        for (int j = n; j > i; j--)
        {
            cout << "*";
        }

        // spaces... 0,2,4,6,8

        for (int j = 0; j < 2 * i; j++)
        {
            cout << " ";
        }

        // reverse print left
        for (int j = n; j > i; j--)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {

        // print straight left
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        // spaces 8,6,4,2,0
        for (int j = 2 * (n - i - 1); j > 0; j--)
        {
            cout << " ";
        }

        // print straight left
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
