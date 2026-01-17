// For positive numbers, write a program that prints first N Fibonacci numbers.
#include <iostream>
using namespace std;

int main ()
{
    int n;
    cout <<"Enter number: ";
    cin >> n;

    if (n >= 0)
    {

        int f = 0;
        int s = 1;
        cout << "0\n1\n";
        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            sum = f + s;
            cout << sum << "\n";
            f = s;
            s = sum;
            
        }

    }
    return 0;
}