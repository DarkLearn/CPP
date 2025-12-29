// Print sum of digits of odd number using while loop.
#include <iostream>
using namespace std;
int main (){
    int n;
    cout << "Enter Odd number: ";
    cin >> n;
    if (n % 2 != 0){
        int dig;
        int sum = 0;
        int i = 1;
        while (n > 0){
            dig = n % 10;
            n /= 10;
            sum += dig;
        }
        cout << "Sum = " << sum << endl;
    }
    else 
    cout << "Please, Enter valid input." << endl;
    return 0;
}