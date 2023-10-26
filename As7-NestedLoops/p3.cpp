/*
Palindrome Pyramid: Implement a C++ program 
that prints a pattern of palindrome numbers. 
For 'n = 5', the pattern would look like this:
1
121
12321
1234321
123454321
*/

#include<iostream>
using namespace std;

int main () {
    int r; // rows
    int r2 = 1; // current row
    cout << "Enter number of rows: ";
    cin >> r;

    for (int i = 1; i <= r; i++) {
        for (int i2 = 1; i2 <= r2; i2++) {
            cout << i2;
        }
        if (r2 != 1) {
            for (int i3 = r2-1; i3 >= 1; i3--) {
                cout << i3;
            }
        }
        r2++;
        cout << "\n";
    }
}