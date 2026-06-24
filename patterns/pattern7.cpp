#include <iostream>

using namespace std;

int main()
{

    int n = 5;

    for (int i = 1; i <= n; i++)
    {

        // left spaces
        for (int j = 1; j <= n - i; j++)
            cout << " ";

        // stars
        for (int j = 1; j <= 2 * i - 1; j++)
            cout << " * ";

        // right spaces
        for (int j = 1; j <= n - i; j++)
            cout << " ";

        cout << endl;
    }

    return 0;
}

// calculate number spaces = 9 spaces - number of prints 4 _ 4