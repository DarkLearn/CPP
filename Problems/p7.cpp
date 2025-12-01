// Take radius from user and print Area of Circle
#include <iostream>
using namespace std;
int main (){
    float r; // radius

    cout << "Enter radius: ";
    cin >> r;

    float area = 3.1415926535 * (r*r); // value of pi * r*r
    cout << "Area of circle: " << area << endl;
    return 0;
}