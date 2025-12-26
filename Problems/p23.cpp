// Print numbers from n to 1 using for and while loop
#include <iostream>
using namespace std;

int main (){
	int n;
	cout <<"Enter number: ";
	cin >> n;
	
	for (int i = n; i >= 1; i--){
	cout << i << endl;		
	}


	// Using while
	
	cout << endl;
	cout << endl;
	
	int j = n;
	while (j >= 1){
	cout << j << endl;
	j--;	
	}

	return 0;

	}