//Hollow Rectangle: Write a program to print a hollow rectangle pattern of asterisks 
//with 'm' rows and 'n' columns. The user inputs 'm' and 'n', and the program 
//generates the pattern with a hollow interior.

#include<iostream>
using namespace std;

int main () {
    int m, n; //rows, columns
    cout << "Enter number of rows, then number of columns:\n";
    cin >> m >> n;

    for (int i = 1; i <= m; i++) {
        if (i == 1 || i == m) {
            for (int i2 = 1; i2 <= n; i2++) {
                cout << "* ";
            }
            cout << "\n";
        } else {
            cout << "* ";
            for (int i3 = 2; i3 < n; i3++) {
            cout << "  ";
            }
            cout << "*\n";
        }
    }
}