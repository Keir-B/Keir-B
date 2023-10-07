//Input positive integer
//in 'while' loop, print pattern of asterisks

#include<iostream>
using namespace std;

int main () {
    int x; // input
    int i = 1; // loop
    int i2 = 1; // nested loop

    cout << "Enter Number: ";
    cin >> x;

    while (i <= x) {
        
        while (i2 <= i) {
            cout << "* ";
            i2++;  
        }
        i2 = 1;
        cout << "\n";
        i++;
    }
}