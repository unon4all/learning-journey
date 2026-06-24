#include <iostream>

using namespace std;

int main()
{

    int n = 5;

    for (int i = 0; i < n; i++)
    {
        int current = i % 2;
        for (int j = 0; j <= i; j++)
        {
            cout << current << " ";

            current = 1 - current;
        }
        cout << endl;
    }

    return 0;
}