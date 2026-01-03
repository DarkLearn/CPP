#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    
    int p = 0; // For prime number
    int i = 2; // Using in loop.
    while (i <= sqrt (n))
    {
        if (n % i == 0)
        {
            p = i;
            break;
        }
        i++;
    }
    if (p == 0)
    {
        cout << n << " is prime number." << endl;
    }
    else
    {
        cout << n << " is a factor of " << p << endl;
        cout << "So, " << n << " is a composite number." << endl;
    }
    return 0;
}