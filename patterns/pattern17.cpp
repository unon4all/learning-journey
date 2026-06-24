/*

A useful interview rule:
If a variable should remember its value from one iteration of the outer loop to the next, declare it outside the loop.
If a variable should start fresh every iteration, declare it inside the loop.

*/

#include <iostream>

using namespace std;

int main()
{
    int n = 4;
    // char alph = 'A';

    for (int i = 0; i < n; i++)
    {

        // for left spaces
        for (int j = 3; j > i; j--)
        {
            cout << " ";
        }

        char alph = 'A';

        char rev = 'A' + i - 1;

        // print left order
        for (int j = 0; j <= i; j++)
        {
            cout << alph;
            alph++;
        }

        // print right order
        for (int j = 0; j < i; j++)
        {
            cout << rev;
            rev--;
        }

        cout << endl;
    }

    return 0;
}