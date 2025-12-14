// largest of two numbers using ternary operators.
#include <iostream>
using namespace std;

int main (){
    int a,b; // take numbers from user.
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    int largest = (a > b) ? a : b;
    cout << largest << " is largest number."<<endl;
    
    return 0;
}
