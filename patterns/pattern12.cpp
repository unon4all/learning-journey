#include <iostream>

using namespace std;

int main()
{

    int n = 4;

    for (int i = 1; i <= n; i++)
    {

        // for left half

        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // for spaces
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }

        // for right side
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}