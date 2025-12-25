// For any three digit number check whether it's an armstrong number or not.
#include <iostream>
using namespace std;

int main (){

    int n; // Take three digits from user
    cout << "Enter three digits: ";
    cin >> n;

    int num = n; // Creating copy

    int dig1 = num % 10;
    num = num / 10;
    int dig2 = num % 10;
    num = num / 10;
    int dig3 = num % 10;
    
    int armst = (dig1 * dig1 * dig1) + (dig2 * dig2 * dig2) + (dig3 * dig3 * dig3);

    if (n == armst)
        cout << n << " is an armstrong number." << endl;
    else 
        cout << n << " is not an armstrong number." << endl;

    return 0;
}