#include<iostream>
using namespace std;
int main (){
    float p,r,t; // pricipal, rate, time
    
    cout << "Enter principal: ";
    cin>> p;
    cout << "Enter rate: ";
    cin >> r;
    cout << "Enter time: ";
    cin >> t;

    float result = (p*r*t)/100; // Simple Interest Formula

    cout << "Simple interest: " << result << endl;
    return 0;
}