// Take number from user and print armstrong number or not
#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int n; // Take number
    cout << "Enter number: ";
    cin >> n;

    if (n >= 0)
    {
    
        int k = n;
        int c;
        if (true)
        {
            for (c = 1; k > 0; c++)
            {
                k = k / 10;
            }
        }
        cout << "Your given numer digits = " << c-1 << "\n";

        int j = n;
        int sum = 0;
        int i = 1;
        int ld = 0; // last digit
        while (j > 0)
        {
            ld = j % 10;
            ld = pow(ld,c-1);
            cout << ld << " ";
            sum += ld;
            j = j / 10;
            i++;
        }
        cout << "\n";
        if (sum == n)
        cout << sum << " is an armstrong number." << "\n";
        else
        cout << n << " is not an armstrong number." << "\n";

    }

    else 
    cout <<"This program is just designed for non-negative numbers." << "\n";

    return 0;
}