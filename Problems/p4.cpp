// Print the Area of square
#include <iostream>
using namespace std;
int main (){
    float l; // length of any side

    cout << "Enter length(any side): ";
    cin >> l;
    
    // cout << "Enter width: ";
    // cin >> w;

    float a = l * l; // area of square. a ---> area
    
    cout << "Area of square: " << a << endl;
    return 0;
}