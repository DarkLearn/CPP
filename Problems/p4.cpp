#include <iostream>
using namespace std;
int main (){
    float l,w; // length & width

    cout << "Enter length: ";
    cin >> l;
    cout << "Enter width: ";
    cin >> w;

    float a = l * w; // area of square. a ---> area
    
    cout << "Area of square: " << a << endl;
    return 0;
}