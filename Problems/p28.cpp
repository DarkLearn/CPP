// Print digits of given number in variable [result] using while loop.
#include <iostream>
using namespace std;

int main ()
{
    int n;
     int dig;
    cout << "Enter number: ";
    cin >> n;

    int res = 0; // res  --> result
    int i = 1;
    while (n > 0) // for just positive numbers
    {
        dig = n % 10;
        res = res * 10 + dig;
        n /= 10;
        i++;
    }
    cout << res << endl;
    
    return 0;
}