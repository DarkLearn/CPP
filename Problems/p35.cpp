// Write program that prints all prime numbers from 2 to N. [positive numbers.]
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout <<"Enter number: ";
    cin >> n;

    if (n >= 2)
    {
        for (int j = 2; j <= n; j++)
        {
            int p = 0;    
            for (int i = 2; i <= sqrt(j); i++)
            {
                if (j % i == 0)
                {
                    p = i;
                    break;
                }
            }
            if (p == 0)
            cout << j << " " << "\n";
        }
    }
    return 0;
}