// Write a program that print largest of two numbers using if-else.
#include <iostream>
using namespace std;

int main (){
    int n1, n2; // n1, n2 --> take number from users
    cout <<"Enter First number: ";
    cin >> n1;
    cout <<"Enter Second number: ";
    cin >> n2;
    if (n1 > n2){
        cout << n1 << " is a largest number." <<endl;
    }
    else{
        cout << n2 << " is a largest number." <<endl;
    }
    return 0;
}