#include <iostream>
using namespace std;

int main()
{

    int n = 5;

    for (int i = 0; i < n; i++)
    {

        char chr = 'E' - i;

        for (int j = 0; j <= i; j++)
        {
            cout << chr << " ";
            chr++;
        }
        cout << endl;
    }

    return 0;
}