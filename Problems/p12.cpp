// Print Even or Odd numbers using Ternary
#include <iostream>
using namespace std;

int main (){
    int n; // Take number from user.
    cout << "Enter number: ";
    cin >> n;

    int result = (n%2 == 0) ? true : false;
    cout << "Result = " << result << endl;
    cout << "Note:\nEven --> 1 & Odd --> 0" << endl;

     return 0;
}