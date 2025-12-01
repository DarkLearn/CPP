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
    
    cout << "Your bill: "<< bill << endl;
    return 0;
}