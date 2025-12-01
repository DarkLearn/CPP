// Print Average Marks OR numbers for three numbers
#include <iostream>
using namespace std;
int main (){
    float n1,n2,n3; // Three numbers

    cout << "Enter number1: ";
    cin>>n1;
    cout << "Enter number2: ";
    cin >> n2;
    cout << "Enter number3: ";
    cin >> n3;
    float avg = (n1 + n2 + n3)/3; // avg ---> Average

    cout << "Average: " << avg << endl;
    return 0;

}