// Print Even or Odd number using if else
#include <iostream>
using namespace std;

int main (){
    int n; // Take number from user.
    cout << "Enter number: ";
    cin >> n;

    if (n % 2 == 0){
        cout << n << " is Even number."<<endl;
    }
    else {
        cout << n << " is Odd number."<<endl;
    }
    return 0;
}