// Print largest of three numbers. using conditional statements.
#include <iostream>
using namespace std;

int main (){
    int n1,n2,n3; // Take numbers from user
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;
    cout << "Enter third number: ";
    cin >> n3;

    if ((n1>n2) && (n1 > n3))
    cout << n1 << " is largest number."<<endl;
    else if (n2 > n3)
    cout << n2 << " is largest number."<<endl;
    else 
    cout << n3 << " is largest number."<<endl;


    return 0;
}