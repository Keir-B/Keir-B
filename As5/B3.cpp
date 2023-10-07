//Print product of all numbers from 1 to input number
//factorial

#include<iostream>
using namespace std;

int main () {
    int x;
    int i = 1;
    int total = 1;

    cout << "Enter Number: ";
    cin >> x;

    while (i <= x) {
        i++;
        total *= i;
    }
    cout << total << "\n";
}