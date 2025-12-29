// Print sum of odd digits of a number using while loop.
#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    int sum = 0;
    int dig;
    int i = 1;
    while (n > 0 ) // Just for positive numbers. For Both using n != 0
    {
        dig = n % 10;
        n /= 10;
        if(dig % 2 != 0)
        {
            sum += dig;
        }
        i++;
    }
    cout << "Odd digits sum = " << sum << endl;

    return 0;
}