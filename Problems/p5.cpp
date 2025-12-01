#include <iostream>
using namespace std;
int main (){
    float p, pe, er; // pencil, pen, eraser

    cout << "Enter a pencil cost: ";
    cin >> p;
    cout << "Enter a pen cost: ";
    cin >> pe;
    cout << "Enter an eraser cost: ";
    cin >> er;
    
    float tax = (p + pe + er)*(18.00/100.00); // GST Tax
    float bill = tax + (p + pe + er);
    float bill0 = p + pe + er;
    
    cout << "Your bill with GST tax: "<< bill << endl;
    cout << "Your bill except GST tax: "<< bill0 << endl;
    return 0;
}