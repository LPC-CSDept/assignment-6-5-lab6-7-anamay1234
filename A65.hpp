//

#include <iomanip>
#include <iostream>
using namespace std;


void getinput(int &num1, int &num2, int &num3) {


    cout << "input a number" << endl;
    cin >> num1;
    cout << num1;
    cout << "input another number" << endl;
    cin >> num2;
    cout << "input another number" << endl;
    cin >> num3;

}

void swap(int &num1, int &num2, int &num3) {
    num1 = num1 + num2 + num3;
    num2 = num1 - (num2 + num3);
    num3 = num1 - (num2 + num3);
    num1 = num1 - (num2 + num3);
}


// complete two functions
// swap() ; to swap all three values like (a, b, c) to (c, a, b)
//              This function will use swaptwo().

// swaptwo() ; to swap two values (a, b) to (b, a)
