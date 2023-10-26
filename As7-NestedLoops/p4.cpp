/*
Character Pattern: Write a program to print the following pattern using nested loops:
A
BB
CCC
DDDD
EEEEE
*/

#include<iostream>
using namespace std;

int main () {
    int r; // rows
    int r2 = 1; // current row
    int l = 65; // current letter
    cout << "Enter number of rows: ";
    cin >> r;

    for (int i = 1; i <= r; i++) {
        if (l > 90) {
            l = 65;
        }
        for (int i2 = 1; i2 <= r2; i2++) {
            cout << (char)l;
        }
        r2++;
        l++;
        cout << "\n";
    }
}