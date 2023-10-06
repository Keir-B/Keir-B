//Print sum of all numbers from 1 to input number

#include<iostream>
using namespace std;

int main () {
    int x;
    int i = 1;
    int total = 0;

    cout << "Enter Number: ";
    cin >> x;

    while (i <= x) {
        total += i;
        i++;
    }
    cout << total << "\n";
}