// Write a program to find the factorial of a number entered by the user.
#include <iostream>
using namespace std;

int main ()
{
    int n;
    cout << "Enter  number: ";
    cin >> n;

    if (n > 0)
    {
        int p = 1; // Product
        for (int i = 1; i <= n; i++)
        {
            p *= i;
        }

        cout << "Factorial: " << p << endl;

    }
    
    else if (n < 0)
    {
        cout << "The negative numbers of the factorial is not defined in Math (By definition)." << endl;
    }

    else
    {
        cout << "Factorial: 1 (By definition)" << endl;
    }

    return 0;
}