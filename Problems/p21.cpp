// Print sum of first N natural numbers using for loop.
#include <iostream>
using namespace std;

int main (){
    int n; // n --> take number from 
    int sum = 0;
    cout << "Enter number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
        sum = sum + i;
    
    cout << "Sum = " << sum << endl;
    return 0;
}