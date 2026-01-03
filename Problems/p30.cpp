// Take number from user and check the number is prime or not
#include <iostream>
using namespace std;
int main ()
{
    int n; // Take  number from user.
    cout << "Enter number: ";
    cin >> n;
    int p = 0; // Now value of prime is false or Zero.
    for (int i = 2; i <= n-1; i++) // From prime starting from 2 and in condition n-1 means any user's number less that 1 for prime.
    {
        if (n % i == 0)
        {
            p = i;
            break;
        }
    }
    if ( p == 0)
    cout << n << " is prime number." << endl;
    else if (p != 0){
    cout << n << " is the factor of " << p << endl;
    cout <<"So, "<< n << " is not prime number." << endl;
    }
    return 0;
}