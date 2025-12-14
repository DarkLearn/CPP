// Build calculator using four basic arithmetic operations. +, -, *, / using if-else
#include <iostream>
using namespace std;

int main (){
    int n1, n2;
    char op;
    cout << "Enter expression: ";
    cin >> n1;
    cin >> op;
    cin >> n2;

    if (op == '+')
    cout << n1 << " + " << n2 << " = " << (n1 + n2) << endl;
    else if (op == '-')
    cout << n1 << " - " << n2 << " = " << (n1 - n2) << endl;
    else if (op == '*')
    cout << n1 << " * " << n2 << " = " << (n1 * n2) << endl;
    else if (op == '/')
    cout << n1 << " / " << n2 << " = " << (n1 / n2) << endl;
    else 
    cout << "Enter valid expression (+, -, *, /). \nThis program is just for two operands (digits)." << endl;

    return 0;
}