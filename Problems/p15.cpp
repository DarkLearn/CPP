// Build calculator using four basic arithmetic operations. +, -, *, / using switch
#include <iostream>
using namespace std;

int main (){
    float n1,n2;
    char op;

    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    switch (op){
        case '+': cout << n1 << " + " << n2 << " = " << (n1 + n2) << endl;
                break;
        case '-': cout << n1 << " - " << n2 << " = " << (n1 - n2) << endl;
                break;
        case '*': cout << n1 << " * " << n2 << " = " << (n1 * n2) << endl;
                break;
        case '/': cout << n1 << " / " << n2 << " = " << (n1 / n2) << endl;
                break;
        default: cout << "Enter valid expression." << endl;
    }

    return 0;
}