#include <iostream>

using namespace std;

// int main()
// {

//     // This is a simple C++ program that prints "hello" to the console.
//     cout << "hello";

//     // This program also reads an integer from the user and prints it to the console.
//     int x, y;
//     cin >> x >> y;
//     cout << "Value of x is:" << x << " and value of y is:" << y << endl;

//     return 0;
// }

// This program demonstrates how to read and print values in an array in C++.

// int main()
// {

//     int arr[5];

//     cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

//     cout << "The values in the array are: " << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << endl;

//     return 0;
// }

// This program demonstrates how to read and print values in a 2D array in C++.

// int main()
// {

//     int arr[3][3];

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Strings in C++ are represented as arrays of characters. The C++ standard library provides a string class that makes it easier to work with strings. Here is an example of how to read and print strings in C++.

// int main()
// {

//     string striver = "striver";

//     int len = striver.length();

//     cout << "The length of the string is: " << len << endl;

//     return 0;
// }

// for loop in C++ is used to execute a block of code repeatedly for a specified number of times. Here is an example of how to use a for loop in C++.

// int main()
// {

//     for (int i = 0; i < 5; i++)
//     {

//         cout << "Hello World" << endl;
//     }

//     return 0;
// }

// This program demonstrates how to use a while loop in C++.

// int main()
// {

//     int i = 0;

//     while (i < 5)
//     {

//         cout << "Hello World" << i << endl;
//         i++;
//     }

//     do
//     {
//         cout << "Hello World" << i << endl;
//         i++;
//     } while (i < 5);

//     return 0;
// }

// This program demonstrates how to use a switch statement in C++.

// int main()
// {

//     int x;

//     cin >> x;

//     switch (x)
//     {
//     case 1:
//         cout << "You entered 1" << endl;
//         break;
//     case 2:
//         cout << "You entered 2" << endl;
//         break;
//     case 3:
//         cout << "You entered 3" << endl;
//         break;
//     default:
//         cout << "You entered a number other than 1, 2, or 3" << endl;
//         break;
//     }

//     return 0;
// }

// Functions in C++ are used to group a set of statements together to perform a specific task. Here is an example of how to define and call a function in C++.

// Void functions do not return a value. Here is an example of a void function in C++.

void printHello(string name)
{
    cout << "Hello, " << name << "!" << endl;
}

void sumOfTwoNumbers(int a, int b)
{
    cout << "The sum of " << a << " and " << b << " is " << a + b << endl;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    sumOfTwoNumbers(num1, num2);

    return 0;
}