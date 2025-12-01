// This program take two number from user and print sum , product, subtract and divide
#include <iostream>
using namespace std;
int main (){

    float n1; // Number 1
    float n2; // Number 2

    cout << "Enter number a: ";
    cin >> n1;
    cout << "Enter number b: ";
    cin >> n2;

    int sum = n1 + n2; // Sum of two numbers
    int prod = n1 * n2; // Product of two numbers & prod ---> product

    int subt = n1 - n2; // Subtract of two numbers & subt ---> Subtract
    float divi = n1 / n2; // Divide of two numbers & divi ---> Divide

    cout << "Sum: "<< sum << endl;
    cout << "Product: "<< prod << endl;
    
    cout << "Subtract(a-b): " << subt << endl;
    cout << "Divide(a/b): " << divi << endl;
    cout << "Thank You!" << endl;    
    return 0;
}