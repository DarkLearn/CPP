// Print digits of given number in reverse using while loop.
#include <iostream>
using namespace std;

int main ()
{
    int n;
    int dig;
    cout << "Enter number: ";
    cin >> n;

    int i = 1;
    while (n > 0) // for just positive numbers
    {
        dig = n % 10;
        n /= 10;
        cout << dig << " ";
        i++;
    }
    
    return 0;
}