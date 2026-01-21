// print the following pattern:

//  * * * * *
//  * * * *
//  * * *
//  * *
//  *

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }




    int z = 5;
    for (int x = 1; x <= z; x++)
    {
        for (int y = 1; y <= (z - x + 1); y++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}