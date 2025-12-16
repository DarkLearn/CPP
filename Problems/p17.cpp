// Takes year from user and print whether that year is leap or not.
#include <iostream>
using namespace std;

int main (){
    int y; // Take year from user.
    cout << "Enter year: ";
    cin >> y;

    if (y % 400 == 0)
        cout << y << " is a leap year." << endl;
    else if(y % 100 == 0)
        cout << y << " is not a leap year." << endl;
    else if(y % 4 == 0)
        cout << y << " is a leap year." << endl;
    else 
        cout << y << " is not a leap year." << endl;

    return 0;
}