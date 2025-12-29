// Print the sum of digits of a number using while loop and for loop.

#include <iostream>
using namespace std;
	int main (){
	int n;
	cout <<"Enter number: ";
	cin >> n;
	int sum = 0;
	int dig;
// These are variables for storing digit one by one.
// This is for both positive and negative number input.
	int i = 1;
	while (n != 0) // OR while (n > 0)
        {
	
	dig = n % 10;
	n = n / 10;
	sum = sum + dig;
	i++;	
		}

	cout <<"Sum = " << sum << endl;


    // Using for loop
    cout << endl;
    int dig1;
    int n1;
    int sum1 = 0;
    cout << "Enter number:(For Loop) ";
    cin >> n1;
// This is just for positive number input.
    for (int j = 1; n1 > 0; j++){
        dig1 = n1 % 10;
        n1 = n1/10;
        sum1 += dig1;        
    }
    cout << "Sum1 = " << sum1 << endl;

	
	return 0;
	
	
}