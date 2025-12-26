// Print square pattern stars '*' using for loop and while loop.
#include <iostream>
using namespace std;
int main (){
    for (int i = 1; i <= 4; i++){
        cout << "* * * *" << endl;
    }

    cout << endl;
    cout << endl;

    // while loop
    int j = 1;
    while (j <= 4){
        cout << "* * * *" << endl;
        j++;
    }

    return 0;
}