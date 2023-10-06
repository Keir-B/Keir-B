//Write a program that asks the user for a number 
//and uses a `while` loop to print all the even numbers between 1 and that number.

#include<iostream>
using namespace std;

int main () {
    int x;
    int i = 2;

    cout << "Enter Number: ";
    cin >> x;

    while (i <= x) {
        cout << i << "\n";
        i += 2;
    }
}