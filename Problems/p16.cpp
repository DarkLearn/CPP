// Get number from user and print whether it's positive, negative or zero. if-else
#include <iostream>
using namespace std;
int main (){
    int n; // Get number from user.
    cout << "Enter number: ";
    cin >> n;

    if (n > 0)
        cout << n << " a is positive number." << endl;
    else if (n < 0)
        cout << n << " is a negative number." <<endl;
    else    cout <<"your entered number is 0. = " << n << endl;

    return 0;
}